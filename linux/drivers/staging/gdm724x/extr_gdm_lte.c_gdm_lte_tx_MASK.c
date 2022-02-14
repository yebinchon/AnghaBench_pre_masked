
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct vlan_ethhdr {int h_vlan_TCI; } ;
struct sk_buff {int len; void* data; } ;
struct TYPE_6__ {int tx_bytes; int tx_packets; int tx_dropped; } ;
struct TYPE_5__ {int dft_eps_id; } ;
struct nic {int vlan_id; TYPE_3__ stats; TYPE_2__ pdn_table; TYPE_1__* phy_dev; } ;
struct net_device {int name; } ;
typedef int netdev_tx_t ;
struct TYPE_4__ {int (* send_sdu_func ) (int ,void*,int,int ,int ,int ,struct nic*,int,int) ;int priv_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct net_device*,struct sk_buff*) ;
 int FUNC_4 (struct net_device*,char*) ;
 struct nic* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int*) ;
 int FUNC_9 (int ,void*,int,int ,int ,int ,struct nic*,int,int) ;
 int VAR_15 ;

__attribute__((used)) static netdev_tx_t FUNC_10(struct sk_buff *VAR_16, struct net_device *VAR_17)
{
 struct nic *VAR_18 = FUNC_5(VAR_17);
 u32 VAR_19;
 void *VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23 = 0;

 VAR_19 = FUNC_3(VAR_17, VAR_16);
 if (VAR_19 == 0) {
  FUNC_4(VAR_17, "tx - invalid nic_type\n");
  return -VAR_1;
 }

 if (VAR_19 & VAR_5) {
  if (FUNC_1(VAR_16, VAR_19) == 0) {
   FUNC_0(VAR_16);
   return 0;
  }
 }

 if (VAR_19 & VAR_8) {
  if (FUNC_2(VAR_16, VAR_19) == 0) {
   FUNC_0(VAR_16);
   return 0;
  }
 }
 if (VAR_19 & VAR_7) {
  struct vlan_ethhdr *VAR_24 = (struct vlan_ethhdr *)VAR_16->data;

  VAR_18->vlan_id = FUNC_7(VAR_24->h_vlan_TCI) & VAR_14;
  VAR_20 = VAR_16->data + (VAR_13 - VAR_4);
  VAR_21 = VAR_16->len - (VAR_13 - VAR_4);
 } else {
  VAR_18->vlan_id = 0;
  VAR_20 = VAR_16->data;
  VAR_21 = VAR_16->len;
 }




 if (VAR_19 & VAR_8)
  VAR_19 = VAR_8;




 if (!(VAR_19 & VAR_6))
  VAR_19 &= VAR_9;

 VAR_23 = FUNC_8(VAR_17->name, "lte%d", &VAR_22);
 if (VAR_23 != 1) {
  FUNC_0(VAR_16);
  return -VAR_0;
 }

 VAR_23 = VAR_18->phy_dev->send_sdu_func(VAR_18->phy_dev->priv_dev,
       VAR_20, VAR_21,
       VAR_18->pdn_table.dft_eps_id, 0,
       VAR_15, VAR_18, VAR_22,
       VAR_19);

 if (VAR_23 == VAR_10 || VAR_23 == VAR_12) {
  FUNC_6(VAR_17);
  if (VAR_23 == VAR_10)
   VAR_23 = 0;
  else
   VAR_23 = -VAR_3;
 } else if (VAR_23 == VAR_11) {
  VAR_23 = -VAR_2;
 }


 if (VAR_23) {
  VAR_18->stats.tx_dropped++;
 } else {
  VAR_18->stats.tx_packets++;
  VAR_18->stats.tx_bytes += VAR_21;
 }
 FUNC_0(VAR_16);

 return 0;
}
