
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__* data; scalar_t__ protocol; int ip_summed; } ;
struct sge_port_stats {int vlan_xtract; int rx_cso_good; } ;
struct TYPE_4__ {int rx_drops; } ;
struct sge {int * port_stats; TYPE_1__ stats; scalar_t__ rx_pkt_pad; struct adapter* adapter; } ;
struct net_device {int features; } ;
struct freelQ {int dummy; } ;
struct cpl_rx_pkt {size_t iff; int csum; int vlan; scalar_t__ vlan_valid; } ;
struct TYPE_5__ {size_t nports; } ;
struct adapter {TYPE_3__* port; TYPE_2__ params; } ;
struct TYPE_6__ {struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (struct sk_buff*,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct net_device*) ;
 struct sk_buff* FUNC_3 (struct adapter*,struct freelQ*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct sk_buff*) ;
 struct sge_port_stats* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct sge *VAR_6, struct freelQ *VAR_7, unsigned int VAR_8)
{
 struct sk_buff *VAR_9;
 const struct cpl_rx_pkt *VAR_10;
 struct adapter *VAR_11 = VAR_6->adapter;
 struct sge_port_stats *VAR_12;
 struct net_device *VAR_13;

 VAR_9 = FUNC_3(VAR_11, VAR_7, VAR_8 - VAR_6->rx_pkt_pad);
 if (FUNC_10(!VAR_9)) {
  VAR_6->stats.rx_drops++;
  return;
 }

 VAR_10 = (const struct cpl_rx_pkt *) VAR_9->data;
 if (VAR_10->iff >= VAR_11->params.nports) {
  FUNC_5(VAR_9);
  return;
 }
 FUNC_0(VAR_9, sizeof(*VAR_10));

 VAR_12 = FUNC_9(VAR_6->port_stats[VAR_10->iff]);
 VAR_13 = VAR_11->port[VAR_10->iff].dev;

 VAR_9->protocol = FUNC_2(VAR_9, VAR_13);
 if ((VAR_13->features & VAR_5) && VAR_10->csum == 0xffff &&
     VAR_9->protocol == FUNC_4(VAR_2) &&
     (VAR_9->data[9] == VAR_3 || VAR_9->data[9] == VAR_4)) {
  ++VAR_12->rx_cso_good;
  VAR_9->ip_summed = VAR_0;
 } else
  FUNC_8(VAR_9);

 if (VAR_10->vlan_valid) {
  VAR_12->vlan_xtract++;
  FUNC_1(VAR_9, FUNC_4(VAR_1), FUNC_7(VAR_10->vlan));
 }
 FUNC_6(VAR_9);
}
