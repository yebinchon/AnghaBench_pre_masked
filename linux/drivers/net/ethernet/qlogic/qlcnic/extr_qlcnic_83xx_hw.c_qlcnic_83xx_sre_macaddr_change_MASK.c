
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct qlcnic_macvlan_mbx {int mac_addr0; int mac_addr1; int mac_addr2; int mac_addr3; int mac_addr4; int mac_addr5; scalar_t__ vlan; } ;
struct TYPE_4__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_2__ req; int type; } ;
struct qlcnic_adapter {TYPE_1__* recv_ctx; } ;
struct TYPE_3__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct qlcnic_cmd_args*) ;
 struct qlcnic_cmd_args* FUNC_1 (int,int ) ;
 int FUNC_2 (int*,struct qlcnic_macvlan_mbx*,int) ;
 int FUNC_3 (struct qlcnic_adapter*,int*) ;
 int FUNC_4 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_5 (struct qlcnic_cmd_args*) ;
 int FUNC_6 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

int FUNC_7(struct qlcnic_adapter *VAR_9, u8 *VAR_10,
       u16 VAR_11, u8 VAR_12)
{
 struct qlcnic_cmd_args *VAR_13 = ((void*)0);
 struct qlcnic_macvlan_mbx VAR_14;
 u32 *VAR_15, VAR_16 = 0;
 int VAR_17;

 if (VAR_9->recv_ctx->state == VAR_4)
  return -VAR_0;

 VAR_13 = FUNC_1(sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_17 = FUNC_4(VAR_13, VAR_9, VAR_3);
 if (VAR_17)
  goto out;

 VAR_13->type = VAR_8;

 if (VAR_11)
  VAR_12 = (VAR_12 == VAR_5 || VAR_12 == VAR_6) ?
       VAR_6 : VAR_7;

 VAR_13->req.arg[1] = VAR_12 | (1 << 8);
 FUNC_3(VAR_9, &VAR_16);
 VAR_13->req.arg[1] |= VAR_16;
 VAR_14.vlan = VAR_11;
 VAR_14.mac_addr0 = VAR_10[0];
 VAR_14.mac_addr1 = VAR_10[1];
 VAR_14.mac_addr2 = VAR_10[2];
 VAR_14.mac_addr3 = VAR_10[3];
 VAR_14.mac_addr4 = VAR_10[4];
 VAR_14.mac_addr5 = VAR_10[5];
 VAR_15 = &VAR_13->req.arg[2];
 FUNC_2(VAR_15, &VAR_14, sizeof(struct qlcnic_macvlan_mbx));
 VAR_17 = FUNC_6(VAR_9, VAR_13);
 if (!VAR_17)
  return VAR_17;

 FUNC_5(VAR_13);
out:
 FUNC_0(VAR_13);
 return VAR_17;
}
