
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct mlxsw_afa_mirror {int span_id; } ;
struct mlxsw_afa_block {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlxsw_afa_mirror*) ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int FUNC_2 (struct mlxsw_afa_mirror*) ;
 int FUNC_3 (struct mlxsw_afa_block*,int ) ;
 struct mlxsw_afa_mirror* FUNC_4 (struct mlxsw_afa_block*,int ,struct net_device const*,int) ;
 int FUNC_5 (struct mlxsw_afa_block*,struct mlxsw_afa_mirror*) ;

int
FUNC_6(struct mlxsw_afa_block *VAR_0, u8 VAR_1,
         const struct net_device *VAR_2, bool VAR_3,
         struct netlink_ext_ack *VAR_4)
{
 struct mlxsw_afa_mirror *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(VAR_0, VAR_1, VAR_2,
      VAR_3);
 if (FUNC_0(VAR_5)) {
  FUNC_1(VAR_4, "Cannot create mirror action");
  return FUNC_2(VAR_5);
 }
 VAR_6 = FUNC_3(VAR_0, VAR_5->span_id);
 if (VAR_6) {
  FUNC_1(VAR_4, "Cannot append mirror action");
  goto err_append_allocated_mirror;
 }

 return 0;

err_append_allocated_mirror:
 FUNC_5(VAR_0, VAR_5);
 return VAR_6;
}
