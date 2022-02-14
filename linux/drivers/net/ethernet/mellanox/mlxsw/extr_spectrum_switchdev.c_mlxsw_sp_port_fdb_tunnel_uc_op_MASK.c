
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union mlxsw_sp_l3addr {int addr4; } ;
typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct mlxsw_sp {int core; } ;
typedef enum mlxsw_sp_l3proto { ____Placeholder_mlxsw_sp_l3proto } mlxsw_sp_l3proto ;
typedef enum mlxsw_reg_sfd_uc_tunnel_protocol { ____Placeholder_mlxsw_reg_sfd_uc_tunnel_protocol } mlxsw_reg_sfd_uc_tunnel_protocol ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (char*,int ,int ,char const*,int ,int ,int ,int) ;
 int FUNC_8 (int ,int ,char*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_11(struct mlxsw_sp *VAR_8,
       const char *VAR_9, u16 VAR_10,
       enum mlxsw_sp_l3proto VAR_11,
       const union mlxsw_sp_l3addr *VAR_12,
       bool VAR_13, bool VAR_14)
{
 enum mlxsw_reg_sfd_uc_tunnel_protocol VAR_15;
 char *VAR_16;
 u8 VAR_17;
 u32 VAR_18;
 int VAR_19;

 switch (VAR_11) {
 case 129:
  VAR_18 = FUNC_2(VAR_12->addr4);
  VAR_15 = VAR_6;
  break;
 case 128:
 default:
  FUNC_1(1);
  return -VAR_2;
 }

 VAR_16 = FUNC_4(VAR_4, VAR_3);
 if (!VAR_16)
  return -VAR_1;

 FUNC_6(VAR_16, FUNC_9(VAR_13), 0);
 FUNC_7(VAR_16, 0,
         FUNC_10(VAR_14), VAR_9, VAR_10,
         VAR_5, VAR_18,
         VAR_15);
 VAR_17 = FUNC_5(VAR_16);
 VAR_19 = FUNC_8(VAR_8->core, FUNC_0(VAR_7), VAR_16);
 if (VAR_19)
  goto out;

 if (VAR_17 != FUNC_5(VAR_16))
  VAR_19 = -VAR_0;

out:
 FUNC_3(VAR_16);
 return VAR_19;
}
