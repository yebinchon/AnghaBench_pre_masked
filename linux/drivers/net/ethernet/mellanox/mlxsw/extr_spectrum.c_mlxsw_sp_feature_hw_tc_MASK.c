
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlxsw_sp_port {int eg_acl_block; int ing_acl_block; int mall_tc_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*,char*) ;
 struct mlxsw_sp_port* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1, bool VAR_2)
{
 struct mlxsw_sp_port *VAR_3 = FUNC_5(VAR_1);

 if (!VAR_2) {
  if (FUNC_3(VAR_3->ing_acl_block) ||
      FUNC_3(VAR_3->eg_acl_block) ||
      !FUNC_0(&VAR_3->mall_tc_list)) {
   FUNC_4(VAR_1, "Active offloaded tc filters, can't turn hw_tc_offload off\n");
   return -VAR_0;
  }
  FUNC_2(VAR_3->ing_acl_block);
  FUNC_2(VAR_3->eg_acl_block);
 } else {
  FUNC_1(VAR_3->ing_acl_block);
  FUNC_1(VAR_3->eg_acl_block);
 }
 return 0;
}
