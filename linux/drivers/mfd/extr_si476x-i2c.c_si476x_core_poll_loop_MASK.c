
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct si476x_core {int is_alive; } ;


 struct si476x_core* FUNC_0 (struct work_struct*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct si476x_core*) ;
 int FUNC_3 (struct si476x_core*) ;

__attribute__((used)) static void FUNC_4(struct work_struct *VAR_0)
{
 struct si476x_core *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_1);

 if (FUNC_1(&VAR_1->is_alive))
  FUNC_3(VAR_1);
}
