
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_alua_lu_gp {int lu_gp_id; int lu_gp_valid_id; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int ) ;
 struct t10_alua_lu_gp* FUNC_1 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_0, char *VAR_1)
{
 struct t10_alua_lu_gp *VAR_2 = FUNC_1(VAR_0);

 if (!VAR_2->lu_gp_valid_id)
  return 0;
 return FUNC_0(VAR_1, "%hu\n", VAR_2->lu_gp_id);
}
