
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_lun {int lun_tg_pt_secondary_stat; } ;
typedef int ssize_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,int ,unsigned long*) ;
 int FUNC_1 (char*,...) ;

ssize_t FUNC_2(
 struct se_lun *VAR_4,
 const char *VAR_5,
 size_t VAR_6)
{
 unsigned long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_5, 0, &VAR_7);
 if (VAR_8 < 0) {
  FUNC_1("Unable to extract alua_tg_pt_status\n");
  return VAR_8;
 }
 if ((VAR_7 != VAR_2) &&
     (VAR_7 != VAR_0) &&
     (VAR_7 != VAR_1)) {
  FUNC_1("Illegal value for alua_tg_pt_status: %lu\n",
    VAR_7);
  return -VAR_3;
 }
 VAR_4->lun_tg_pt_secondary_stat = (int)VAR_7;

 return VAR_6;
}
