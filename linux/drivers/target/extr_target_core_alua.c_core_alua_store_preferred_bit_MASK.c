
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_alua_tg_pt_gp {int tg_pt_gp_pref; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,unsigned long*) ;
 int FUNC_1 (char*,...) ;

ssize_t FUNC_2(
 struct t10_alua_tg_pt_gp *VAR_1,
 const char *VAR_2,
 size_t VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, 0, &VAR_4);
 if (VAR_5 < 0) {
  FUNC_1("Unable to extract preferred ALUA value\n");
  return VAR_5;
 }
 if ((VAR_4 != 0) && (VAR_4 != 1)) {
  FUNC_1("Illegal value for preferred ALUA: %lu\n", VAR_4);
  return -VAR_0;
 }
 VAR_1->tg_pt_gp_pref = (int)VAR_4;

 return VAR_3;
}
