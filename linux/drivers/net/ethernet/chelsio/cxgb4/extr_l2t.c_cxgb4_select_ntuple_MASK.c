
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct tp_params {int vlan_shift; int port_shift; int protocol_shift; scalar_t__ vnic_shift; int ingress_config; } ;
struct port_info {int vivld; int vin; } ;
struct net_device {int dummy; } ;
struct l2t_entry {int vlan; scalar_t__ lport; } ;
struct TYPE_2__ {struct tp_params tp; } ;
struct adapter {int pf; TYPE_1__ params; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct adapter* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;

u64 FUNC_5(struct net_device *VAR_4,
   const struct l2t_entry *VAR_5)
{
 struct adapter *VAR_6 = FUNC_3(VAR_4);
 struct tp_params *VAR_7 = &VAR_6->params.tp;
 u64 VAR_8 = 0;




 if (VAR_7->vlan_shift >= 0 && VAR_5->vlan != VAR_2)
  VAR_8 |= (u64)(VAR_0 | VAR_5->vlan) << VAR_7->vlan_shift;

 if (VAR_7->port_shift >= 0)
  VAR_8 |= (u64)VAR_5->lport << VAR_7->port_shift;

 if (VAR_7->protocol_shift >= 0)
  VAR_8 |= (u64)VAR_1 << VAR_7->protocol_shift;

 if (VAR_7->vnic_shift >= 0 && (VAR_7->ingress_config & VAR_3)) {
  struct port_info *VAR_9 = (struct port_info *)FUNC_4(VAR_4);

  VAR_8 |= (u64)(FUNC_1(VAR_9->vin) |
    FUNC_0(VAR_6->pf) |
    FUNC_2(VAR_9->vivld)) << VAR_7->vnic_shift;
 }

 return VAR_8;
}
