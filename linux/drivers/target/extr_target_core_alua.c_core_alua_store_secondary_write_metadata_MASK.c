
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_lun {int lun_tg_pt_secondary_write_md; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,unsigned long*) ;
 int FUNC_1 (char*,...) ;

ssize_t FUNC_2(
 struct se_lun *VAR_1,
 const char *VAR_2,
 size_t VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, 0, &VAR_4);
 if (VAR_5 < 0) {
  FUNC_1("Unable to extract alua_tg_pt_write_md\n");
  return VAR_5;
 }
 if ((VAR_4 != 0) && (VAR_4 != 1)) {
  FUNC_1("Illegal value for alua_tg_pt_write_md:"
    " %lu\n", VAR_4);
  return -VAR_0;
 }
 VAR_1->lun_tg_pt_secondary_write_md = (int)VAR_4;

 return VAR_3;
}
