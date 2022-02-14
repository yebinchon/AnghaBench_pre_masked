
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct rpmhpd {int level_count; scalar_t__* level; int res_name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__ const*) ;
 int FUNC_1 (scalar_t__ const*) ;
 int VAR_1 ;
 scalar_t__* FUNC_2 (int ,int*) ;
 int FUNC_3 (char*,int ,int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct rpmhpd *VAR_2)
{
 int VAR_3;
 const u16 *VAR_4;

 VAR_4 = FUNC_2(VAR_2->res_name, &VAR_2->level_count);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);


 VAR_2->level_count >>= 1;

 if (VAR_2->level_count > VAR_1)
  return -VAR_0;

 for (VAR_3 = 0; VAR_3 < VAR_2->level_count; VAR_3++) {
  VAR_2->level[VAR_3] = VAR_4[VAR_3];





  if (VAR_3 > 0 && VAR_2->level[VAR_3] == 0) {
   VAR_2->level_count = VAR_3;
   break;
  }
  FUNC_3("%s: ARC hlvl=%2d --> vlvl=%4u\n", VAR_2->res_name, VAR_3,
    VAR_2->level[VAR_3]);
 }

 return 0;
}
