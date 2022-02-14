
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_alua_tg_pt_gp {int tg_pt_gp_alua_access_status; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,char*) ;
 struct t10_alua_tg_pt_gp* FUNC_2 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_3(struct config_item *VAR_0,
  char *VAR_1)
{
 struct t10_alua_tg_pt_gp *VAR_2 = FUNC_2(VAR_0);
 return FUNC_1(VAR_1, "%s\n",
  FUNC_0(VAR_2->tg_pt_gp_alua_access_status));
}
