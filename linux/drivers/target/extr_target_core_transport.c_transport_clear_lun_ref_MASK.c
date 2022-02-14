
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_lun {int lun_shutdown_comp; int lun_ref; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct se_lun *VAR_0)
{
 FUNC_0(&VAR_0->lun_ref);
 FUNC_1(&VAR_0->lun_shutdown_comp);
}
