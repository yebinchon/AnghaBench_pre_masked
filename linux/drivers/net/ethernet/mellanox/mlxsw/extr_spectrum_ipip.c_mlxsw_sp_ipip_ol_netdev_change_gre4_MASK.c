
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union mlxsw_sp_l3addr {int dummy; } mlxsw_sp_l3addr ;
typedef int u16 ;
struct netlink_ext_ack {int dummy; } ;
struct ip_tunnel_parm {scalar_t__ link; } ;
struct mlxsw_sp_ipip_entry {struct ip_tunnel_parm parms4; int ol_dev; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp_ipip_entry*,int,int,int,struct netlink_ext_ack*) ;
 scalar_t__ FUNC_1 (struct mlxsw_sp*,int ,union mlxsw_sp_l3addr,int ,struct mlxsw_sp_ipip_entry*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_ipip_entry*) ;
 struct ip_tunnel_parm FUNC_4 (int ) ;
 union mlxsw_sp_l3addr FUNC_5 (struct ip_tunnel_parm) ;
 scalar_t__ FUNC_6 (struct ip_tunnel_parm) ;
 scalar_t__ FUNC_7 (struct ip_tunnel_parm) ;
 union mlxsw_sp_l3addr FUNC_8 (struct ip_tunnel_parm) ;
 int FUNC_9 (union mlxsw_sp_l3addr*,union mlxsw_sp_l3addr*) ;

__attribute__((used)) static int
FUNC_10(struct mlxsw_sp *VAR_1,
        struct mlxsw_sp_ipip_entry *VAR_2,
        struct netlink_ext_ack *VAR_3)
{
 union mlxsw_sp_l3addr VAR_4, VAR_5;
 union mlxsw_sp_l3addr VAR_6, VAR_7;
 struct ip_tunnel_parm VAR_8;
 bool VAR_9 = 0;
 bool VAR_10 = 0;
 bool VAR_11 = 0;
 int VAR_12 = 0;

 VAR_8 = FUNC_4(VAR_2->ol_dev);

 VAR_5 = FUNC_8(VAR_8);
 VAR_4 = FUNC_8(VAR_2->parms4);
 VAR_7 = FUNC_5(VAR_8);
 VAR_6 = FUNC_5(VAR_2->parms4);

 if (!FUNC_9(&VAR_5, &VAR_4)) {
  u16 VAR_13 = FUNC_2(VAR_2->ol_dev);




  if (FUNC_1(VAR_1,
        VAR_0,
        VAR_5, VAR_13,
        VAR_2)) {
   FUNC_3(VAR_1, VAR_2);
   return 0;
  }

  VAR_9 = 1;
 } else if ((FUNC_7(VAR_2->parms4) !=
      FUNC_7(VAR_8)) ||
     VAR_2->parms4.link != VAR_8.link) {
  VAR_9 = 1;
 } else if (!FUNC_9(&VAR_7, &VAR_6)) {
  VAR_11 = 1;
 } else if (FUNC_6(VAR_2->parms4) !=
     FUNC_6(VAR_8)) {
  VAR_10 = 1;
 }

 if (VAR_9)
  VAR_12 = FUNC_0(VAR_1, VAR_2,
         1, 1, 1,
         VAR_3);
 else if (VAR_11)
  VAR_12 = FUNC_0(VAR_1, VAR_2,
         0, 0, 1,
         VAR_3);
 else if (VAR_10)
  VAR_12 = FUNC_0(VAR_1, VAR_2,
         0, 0, 0,
         VAR_3);

 VAR_2->parms4 = VAR_8;
 return VAR_12;
}
