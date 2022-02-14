
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_lun {int lun_tg_pt_secondary_write_md; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;

ssize_t FUNC_1(
 struct se_lun *VAR_0,
 char *VAR_1)
{
 return FUNC_0(VAR_1, "%d\n", VAR_0->lun_tg_pt_secondary_write_md);
}
