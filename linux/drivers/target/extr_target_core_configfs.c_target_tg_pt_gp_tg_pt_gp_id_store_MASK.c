
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct config_group {int cg_item; } ;
struct t10_alua_tg_pt_gp {int tg_pt_gp_id; struct config_group tg_pt_gp_group; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct t10_alua_tg_pt_gp*,int ) ;
 int FUNC_2 (char const*,int ,unsigned long*) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*,...) ;
 struct t10_alua_tg_pt_gp* FUNC_5 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_6(struct config_item *VAR_1,
  const char *VAR_2, size_t VAR_3)
{
 struct t10_alua_tg_pt_gp *VAR_4 = FUNC_5(VAR_1);
 struct config_group *VAR_5 = &VAR_4->tg_pt_gp_group;
 unsigned long VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_2, 0, &VAR_6);
 if (VAR_7 < 0) {
  FUNC_4("ALUA tg_pt_gp_id: invalid value '%s' for tg_pt_gp_id\n",
         VAR_2);
  return VAR_7;
 }
 if (VAR_6 > 0x0000ffff) {
  FUNC_4("ALUA tg_pt_gp_id: %lu exceeds maximum: 0x0000ffff\n",
         VAR_6);
  return -VAR_0;
 }

 VAR_7 = FUNC_1(VAR_4, (u16)VAR_6);
 if (VAR_7 < 0)
  return -VAR_0;

 FUNC_3("Target_Core_ConfigFS: Set ALUA Target Port Group: "
  "core/alua/tg_pt_gps/%s to ID: %hu\n",
  FUNC_0(&VAR_5->cg_item),
  VAR_4->tg_pt_gp_id);

 return VAR_3;
}
