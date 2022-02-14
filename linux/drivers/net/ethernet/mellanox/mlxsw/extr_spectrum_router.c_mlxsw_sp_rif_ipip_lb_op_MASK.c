
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int addr4; } ;
struct mlxsw_sp_rif_ipip_lb_config {int ul_protocol; int okey; int lb_ipipt; TYPE_1__ saddr; } ;
struct mlxsw_sp_rif {TYPE_2__* dev; int vr_id; int rif_index; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp_rif_ipip_lb {struct mlxsw_sp_rif common; struct mlxsw_sp_rif_ipip_lb_config lb_config; } ;
struct mlxsw_sp {int core; } ;
struct TYPE_4__ {int mtu; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (char*,int,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_5(struct mlxsw_sp_rif_ipip_lb *VAR_5, u16 VAR_6,
   u16 VAR_7, bool VAR_8)
{
 struct mlxsw_sp_rif_ipip_lb_config VAR_9 = VAR_5->lb_config;
 struct mlxsw_sp_rif *VAR_10 = &VAR_5->common;
 struct mlxsw_sp *VAR_11 = VAR_10->mlxsw_sp;
 char VAR_12[VAR_1];
 u32 VAR_13;

 switch (VAR_9.ul_protocol) {
 case 129:
  VAR_13 = FUNC_1(VAR_9.saddr.addr4);
  FUNC_3(VAR_12, VAR_8, VAR_2,
        VAR_10->rif_index, VAR_10->vr_id, VAR_10->dev->mtu);
  FUNC_2(VAR_12, VAR_9.lb_ipipt,
       VAR_3,
       VAR_6, VAR_7, VAR_13, VAR_9.okey);
  break;

 case 128:
  return -VAR_0;
 }

 return FUNC_4(VAR_11->core, FUNC_0(VAR_4), VAR_12);
}
