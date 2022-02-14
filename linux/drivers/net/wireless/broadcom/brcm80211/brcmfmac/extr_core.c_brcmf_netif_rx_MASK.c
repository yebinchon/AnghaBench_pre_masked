
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {scalar_t__ pkt_type; int protocol; scalar_t__ len; } ;
struct brcmf_if {TYPE_2__* ndev; TYPE_4__* drvr; } ;
struct TYPE_8__ {TYPE_3__* settings; } ;
struct TYPE_7__ {int iapp; } ;
struct TYPE_5__ {int rx_packets; int rx_bytes; int multicast; } ;
struct TYPE_6__ {int flags; TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ) ;

void FUNC_7(struct brcmf_if *VAR_3, struct sk_buff *VAR_4)
{




 if (!VAR_3->drvr->settings->iapp && FUNC_1(VAR_4)) {
  FUNC_2(VAR_4);
  return;
 }

 if (VAR_4->pkt_type == VAR_2)
  VAR_3->ndev->stats.multicast++;

 if (!(VAR_3->ndev->flags & VAR_1)) {
  FUNC_2(VAR_4);
  return;
 }

 VAR_3->ndev->stats.rx_bytes += VAR_4->len;
 VAR_3->ndev->stats.rx_packets++;

 FUNC_0(VAR_0, "rx proto=0x%X\n", FUNC_6(VAR_4->protocol));
 if (FUNC_3())
  FUNC_4(VAR_4);
 else




  FUNC_5(VAR_4);
}
