
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdp_frame {int dummy; } ;
struct sk_buff {struct net_device* dev; } ;
struct netdev_queue {int dummy; } ;
struct TYPE_3__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct cpsw_meta_xdp {int ch; struct net_device* ndev; } ;
struct TYPE_4__ {int cpts; } ;


 int VAR_0 ;
 struct xdp_frame* FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (int ,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 TYPE_2__* FUNC_4 (struct net_device*) ;
 struct netdev_queue* FUNC_5 (struct net_device*,int) ;
 int FUNC_6 (struct netdev_queue*) ;
 int FUNC_7 (struct netdev_queue*) ;
 int FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct xdp_frame*) ;

void FUNC_11(void *VAR_1, int VAR_2, int VAR_3)
{
 struct cpsw_meta_xdp *VAR_4;
 struct xdp_frame *VAR_5;
 struct net_device *VAR_6;
 struct netdev_queue *VAR_7;
 struct sk_buff *VAR_8;
 int VAR_9;

 if (FUNC_1(VAR_1)) {
  VAR_5 = FUNC_0(VAR_1);
  VAR_4 = (void *)VAR_5 + VAR_0;
  VAR_6 = VAR_4->ndev;
  VAR_9 = VAR_4->ch;
  FUNC_10(VAR_5);
 } else {
  VAR_8 = VAR_1;
  VAR_6 = VAR_8->dev;
  VAR_9 = FUNC_8(VAR_8);
  FUNC_2(FUNC_4(VAR_6)->cpts, VAR_8);
  FUNC_3(VAR_8);
 }




 VAR_7 = FUNC_5(VAR_6, VAR_9);
 if (FUNC_9(FUNC_6(VAR_7)))
  FUNC_7(VAR_7);

 VAR_6->stats.tx_packets++;
 VAR_6->stats.tx_bytes += VAR_2;
}
