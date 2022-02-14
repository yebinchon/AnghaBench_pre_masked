
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union mlxsw_sp_l3addr {int dummy; } mlxsw_sp_l3addr ;
typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct mlxsw_sp_fid {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
typedef enum switchdev_notifier_type { ____Placeholder_switchdev_notifier_type } switchdev_notifier_type ;
typedef enum mlxsw_sp_l3proto { ____Placeholder_mlxsw_sp_l3proto } mlxsw_sp_l3proto ;
typedef enum mlxsw_reg_sfn_uc_tunnel_protocol { ____Placeholder_mlxsw_reg_sfn_uc_tunnel_protocol } mlxsw_reg_sfn_uc_tunnel_protocol ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp_fid*,int,struct net_device**,int *,int *) ;
 int FUNC_1 (char*,int,char*,int *,int *,int*) ;
 int FUNC_2 (int,char*,int ,struct net_device*,int) ;
 int FUNC_3 (struct net_device*,char*,int,union mlxsw_sp_l3addr*,int ,int) ;
 struct mlxsw_sp_fid* FUNC_4 (struct mlxsw_sp*,int ) ;
 int FUNC_5 (struct mlxsw_sp_fid*) ;
 int FUNC_6 (struct mlxsw_sp*,int ,int,union mlxsw_sp_l3addr*) ;
 int FUNC_7 (struct mlxsw_sp*,char*,int ,int,union mlxsw_sp_l3addr*,int,int) ;

__attribute__((used)) static void FUNC_8(struct mlxsw_sp *VAR_3,
            char *VAR_4,
            int VAR_5,
            bool VAR_6)
{
 enum mlxsw_reg_sfn_uc_tunnel_protocol VAR_7;
 enum switchdev_notifier_type VAR_8;
 struct net_device *VAR_9;
 union mlxsw_sp_l3addr VAR_10;
 struct mlxsw_sp_fid *VAR_11;
 char VAR_12[VAR_0];
 u16 VAR_13, VAR_14;
 __be32 VAR_15;
 u32 VAR_16;
 int VAR_17;

 FUNC_1(VAR_4, VAR_5, VAR_12, &VAR_13,
           &VAR_16, &VAR_7);

 VAR_11 = FUNC_4(VAR_3, VAR_13);
 if (!VAR_11)
  goto err_fid_lookup;

 VAR_17 = FUNC_6(VAR_3, VAR_16,
           (enum mlxsw_sp_l3proto) VAR_7,
           &VAR_10);
 if (VAR_17)
  goto err_ip_resolve;

 VAR_17 = FUNC_0(VAR_3, VAR_11, VAR_6,
         &VAR_9, &VAR_14, &VAR_15);
 if (VAR_17)
  goto err_fdb_process;

 VAR_17 = FUNC_7(VAR_3, VAR_12, VAR_13,
          (enum mlxsw_sp_l3proto) VAR_7,
          &VAR_10, VAR_6, 1);
 if (VAR_17)
  goto err_fdb_op;

 FUNC_3(VAR_9, VAR_12,
     (enum mlxsw_sp_l3proto) VAR_7,
     &VAR_10, VAR_15, VAR_6);

 VAR_8 = VAR_6 ? VAR_1 :
   VAR_2;
 FUNC_2(VAR_8, VAR_12, VAR_14, VAR_9, VAR_6);

 FUNC_5(VAR_11);

 return;

err_fdb_op:
err_fdb_process:
err_ip_resolve:
 FUNC_5(VAR_11);
err_fid_lookup:



 FUNC_7(VAR_3, VAR_12, VAR_13,
           (enum mlxsw_sp_l3proto) VAR_7, &VAR_10,
           0, 1);
}
