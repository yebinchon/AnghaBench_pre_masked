
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct mlxsw_sp_rif_ipip_lb {int common; } ;
struct mlxsw_sp_ipip_entry {struct mlxsw_sp_rif_ipip_lb* ol_lb; int ol_dev; int ipipt; } ;
struct mlxsw_sp {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlxsw_sp_rif_ipip_lb*) ;
 int FUNC_1 (struct mlxsw_sp_rif_ipip_lb*) ;
 struct mlxsw_sp_rif_ipip_lb* FUNC_2 (struct mlxsw_sp*,int ,int ,struct netlink_ext_ack*) ;
 int FUNC_3 (struct mlxsw_sp*,int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct mlxsw_sp *VAR_0,
     struct mlxsw_sp_ipip_entry *VAR_1,
     bool VAR_2,
     struct netlink_ext_ack *VAR_3)
{
 struct mlxsw_sp_rif_ipip_lb *VAR_4 = VAR_1->ol_lb;
 struct mlxsw_sp_rif_ipip_lb *VAR_5;

 VAR_5 = FUNC_2(VAR_0,
           VAR_1->ipipt,
           VAR_1->ol_dev,
           VAR_3);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);
 VAR_1->ol_lb = VAR_5;

 if (VAR_2)
  FUNC_3(VAR_0, &VAR_4->common,
          &VAR_5->common);

 FUNC_4(&VAR_4->common);

 return 0;
}
