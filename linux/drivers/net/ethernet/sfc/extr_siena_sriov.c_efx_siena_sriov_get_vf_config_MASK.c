
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int tci; int mac_addr; } ;
struct siena_vf {scalar_t__ tx_filter_mode; TYPE_1__ addr; } ;
struct siena_nic_data {struct siena_vf* vf; } ;
struct ifla_vf_info {int vf; int vlan; int qos; int spoofchk; scalar_t__ min_tx_rate; scalar_t__ max_tx_rate; int mac; } ;
struct efx_nic {int vf_init_count; struct siena_nic_data* nic_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct efx_nic *VAR_4, int VAR_5,
      struct ifla_vf_info *VAR_6)
{
 struct siena_nic_data *VAR_7 = VAR_4->nic_data;
 struct siena_vf *VAR_8;
 u16 VAR_9;

 if (VAR_5 >= VAR_4->vf_init_count)
  return -VAR_0;
 VAR_8 = VAR_7->vf + VAR_5;

 VAR_6->vf = VAR_5;
 FUNC_0(VAR_6->mac, VAR_8->addr.mac_addr);
 VAR_6->max_tx_rate = 0;
 VAR_6->min_tx_rate = 0;
 VAR_9 = FUNC_1(VAR_8->addr.tci);
 VAR_6->vlan = VAR_9 & VAR_3;
 VAR_6->qos = (VAR_9 >> VAR_2) & 0x7;
 VAR_6->spoofchk = VAR_8->tx_filter_mode == VAR_1;

 return 0;
}
