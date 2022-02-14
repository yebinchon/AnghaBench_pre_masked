
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_alua_tg_pt_gp {int tg_pt_gp_alua_access_type; int tg_pt_gp_valid_id; struct se_device* tg_pt_gp_dev; } ;
struct se_device {int dummy; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct t10_alua_tg_pt_gp*,struct se_device*,int *,int *,int,int ) ;
 int FUNC_1 (char const*,int ,unsigned long*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct se_device*) ;
 struct t10_alua_tg_pt_gp* FUNC_4 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_5(struct config_item *VAR_5,
  const char *VAR_6, size_t VAR_7)
{
 struct t10_alua_tg_pt_gp *VAR_8 = FUNC_4(VAR_5);
 struct se_device *VAR_9 = VAR_8->tg_pt_gp_dev;
 unsigned long VAR_10;
 int VAR_11, VAR_12;

 if (!VAR_8->tg_pt_gp_valid_id) {
  FUNC_2("Unable to do implicit ALUA on non valid"
   " tg_pt_gp ID: %hu\n", VAR_8->tg_pt_gp_valid_id);
  return -VAR_1;
 }
 if (!FUNC_3(VAR_9)) {
  FUNC_2("Unable to set alua_access_state while device is"
         " not configured\n");
  return -VAR_2;
 }

 VAR_12 = FUNC_1(VAR_6, 0, &VAR_10);
 if (VAR_12 < 0) {
  FUNC_2("Unable to extract new ALUA access state from"
    " %s\n", VAR_6);
  return VAR_12;
 }
 VAR_11 = (int)VAR_10;

 if (!(VAR_8->tg_pt_gp_alua_access_type & VAR_4)) {
  FUNC_2("Unable to process implicit configfs ALUA"
   " transition while TPGS_IMPLICIT_ALUA is disabled\n");
  return -VAR_1;
 }
 if (VAR_8->tg_pt_gp_alua_access_type & VAR_3 &&
     VAR_11 == VAR_0) {

  FUNC_2("Unable to process implicit configfs ALUA transition"
         " while explicit ALUA management is enabled\n");
  return -VAR_1;
 }

 VAR_12 = FUNC_0(VAR_8, VAR_9,
     ((void*)0), ((void*)0), VAR_11, 0);
 return (!VAR_12) ? VAR_7 : -VAR_1;
}
