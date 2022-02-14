
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int ip_summed; TYPE_3__* dev; int protocol; scalar_t__ data; } ;
struct sge_rspq {scalar_t__ polling; } ;
struct sge_qset {int napi; int * port_stats; } ;
struct TYPE_5__ {int flags; } ;
struct port_info {size_t first_qset; TYPE_2__ iscsic; } ;
struct cpl_rx_pkt {size_t iff; scalar_t__ csum; int vlan; scalar_t__ vlan_valid; int fragment; scalar_t__ csum_valid; } ;
struct TYPE_4__ {struct sge_qset* qs; } ;
struct adapter {TYPE_1__ sge; int * port; } ;
struct TYPE_6__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct sk_buff*,scalar_t__,int ) ;
 int FUNC_1 (struct port_info*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 struct port_info* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int ) ;
 struct sge_qset* FUNC_9 (struct sge_rspq*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (struct sk_buff*,int) ;
 scalar_t__ FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(struct adapter *VAR_5, struct sge_rspq *VAR_6,
     struct sk_buff *VAR_7, int VAR_8, int VAR_9)
{
 struct cpl_rx_pkt *VAR_10 = (struct cpl_rx_pkt *)(VAR_7->data + VAR_8);
 struct sge_qset *VAR_11 = FUNC_9(VAR_6);
 struct port_info *VAR_12;

 FUNC_11(VAR_7, sizeof(*VAR_10) + VAR_8);
 VAR_7->protocol = FUNC_2(VAR_7, VAR_5->port[VAR_10->iff]);
 VAR_12 = FUNC_5(VAR_7->dev);
 if ((VAR_7->dev->features & VAR_2) && VAR_10->csum_valid &&
     VAR_10->csum == FUNC_3(0xffff) && !VAR_10->fragment) {
  VAR_11->port_stats[VAR_3]++;
  VAR_7->ip_summed = VAR_0;
 } else
  FUNC_10(VAR_7);
 FUNC_12(VAR_7, VAR_11 - &VAR_5->sge.qs[VAR_12->first_qset]);

 if (VAR_10->vlan_valid) {
  VAR_11->port_stats[VAR_4]++;
  FUNC_0(VAR_7, FUNC_3(VAR_1), FUNC_8(VAR_10->vlan));
 }
 if (VAR_6->polling) {
  if (VAR_9)
   FUNC_4(&VAR_11->napi, VAR_7);
  else {
   if (FUNC_13(VAR_12->iscsic.flags))
    FUNC_1(VAR_12, VAR_7);
   FUNC_6(VAR_7);
  }
 } else
  FUNC_7(VAR_7);
}
