
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcmu_dev {int dummy; } ;
struct tcmu_cmd {int dbi_cur; int dbi_cnt; } ;


 int FUNC_0 (struct tcmu_dev*,struct tcmu_cmd*) ;

__attribute__((used)) static bool FUNC_1(struct tcmu_dev *VAR_0,
      struct tcmu_cmd *VAR_1)
{
 int VAR_2;

 for (VAR_2 = VAR_1->dbi_cur; VAR_2 < VAR_1->dbi_cnt; VAR_2++) {
  if (!FUNC_0(VAR_0, VAR_1))
   return 0;
 }
 return 1;
}
