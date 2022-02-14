
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_alua_tg_pt_gp {int tg_pt_gp_write_metadata; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,unsigned long*) ;
 int FUNC_1 (char*,...) ;
 struct t10_alua_tg_pt_gp* FUNC_2 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_3(
  struct config_item *VAR_1, const char *VAR_2, size_t VAR_3)
{
 struct t10_alua_tg_pt_gp *VAR_4 = FUNC_2(VAR_1);
 unsigned long VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, 0, &VAR_5);
 if (VAR_6 < 0) {
  FUNC_1("Unable to extract alua_write_metadata\n");
  return VAR_6;
 }

 if ((VAR_5 != 0) && (VAR_5 != 1)) {
  FUNC_1("Illegal value for alua_write_metadata:"
   " %lu\n", VAR_5);
  return -VAR_0;
 }
 VAR_4->tg_pt_gp_write_metadata = (int)VAR_5;

 return VAR_3;
}
