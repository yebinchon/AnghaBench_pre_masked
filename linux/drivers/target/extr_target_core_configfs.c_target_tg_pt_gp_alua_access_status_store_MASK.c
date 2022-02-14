
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_alua_tg_pt_gp {int tg_pt_gp_valid_id; int tg_pt_gp_alua_access_status; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,int ,unsigned long*) ;
 int FUNC_1 (char*,...) ;
 struct t10_alua_tg_pt_gp* FUNC_2 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_3(
  struct config_item *VAR_4, const char *VAR_5, size_t VAR_6)
{
 struct t10_alua_tg_pt_gp *VAR_7 = FUNC_2(VAR_4);
 unsigned long VAR_8;
 int VAR_9, VAR_10;

 if (!VAR_7->tg_pt_gp_valid_id) {
  FUNC_1("Unable to do set ALUA access status on non"
   " valid tg_pt_gp ID: %hu\n",
   VAR_7->tg_pt_gp_valid_id);
  return -VAR_3;
 }

 VAR_10 = FUNC_0(VAR_5, 0, &VAR_8);
 if (VAR_10 < 0) {
  FUNC_1("Unable to extract new ALUA access status"
    " from %s\n", VAR_5);
  return VAR_10;
 }
 VAR_9 = (int)VAR_8;

 if ((VAR_9 != VAR_2) &&
     (VAR_9 != VAR_0) &&
     (VAR_9 != VAR_1)) {
  FUNC_1("Illegal ALUA access status: 0x%02x\n",
    VAR_9);
  return -VAR_3;
 }

 VAR_7->tg_pt_gp_alua_access_status = VAR_9;
 return VAR_6;
}
