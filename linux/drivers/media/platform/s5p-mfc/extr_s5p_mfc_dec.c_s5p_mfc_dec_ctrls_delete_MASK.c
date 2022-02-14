
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_ctx {int ** ctrls; int ctrl_handler; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct s5p_mfc_ctx *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_1->ctrl_handler);
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_1->ctrls[VAR_2] = ((void*)0);
}
