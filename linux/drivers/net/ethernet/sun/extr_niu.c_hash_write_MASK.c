
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct niu {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct niu *VAR_3, unsigned long VAR_4,
        unsigned long VAR_5, unsigned long VAR_6,
        u64 *VAR_7)
{
 u64 VAR_8 = FUNC_2(VAR_5, VAR_6);
 unsigned long VAR_9;

 if (VAR_4 >= VAR_1 ||
     VAR_5 + (VAR_6 * 8) > VAR_2)
  return -VAR_0;

 FUNC_3(FUNC_0(VAR_4), VAR_8);
 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
  FUNC_3(FUNC_1(VAR_4), VAR_7[VAR_9]);

 return 0;
}
