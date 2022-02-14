
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_alua_tg_pt_gp {int tg_pt_gp_nonop_delay_msecs; } ;
typedef int ssize_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ,unsigned long*) ;
 int FUNC_1 (char*,...) ;

ssize_t FUNC_2(
 struct t10_alua_tg_pt_gp *VAR_2,
 const char *VAR_3,
 size_t VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3, 0, &VAR_5);
 if (VAR_6 < 0) {
  FUNC_1("Unable to extract nonop_delay_msecs\n");
  return VAR_6;
 }
 if (VAR_5 > VAR_0) {
  FUNC_1("Passed nonop_delay_msecs: %lu, exceeds"
   " ALUA_MAX_NONOP_DELAY_MSECS: %d\n", VAR_5,
   VAR_0);
  return -VAR_1;
 }
 VAR_2->tg_pt_gp_nonop_delay_msecs = (int)VAR_5;

 return VAR_4;
}
