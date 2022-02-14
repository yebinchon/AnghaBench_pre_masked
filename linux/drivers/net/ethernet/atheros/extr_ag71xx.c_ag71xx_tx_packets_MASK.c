
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_8__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_4__ stats; } ;
struct ag71xx_ring {int dirty; int curr; TYPE_3__* buf; int order; } ;
struct ag71xx_desc {int ctrl; } ;
struct ag71xx {int restart_work; struct net_device* ndev; TYPE_1__* dcfg; struct ag71xx_ring tx_ring; } ;
struct TYPE_6__ {scalar_t__ len; struct sk_buff* skb; } ;
struct TYPE_7__ {TYPE_2__ tx; } ;
struct TYPE_5__ {scalar_t__ tx_hang_workaround; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct ag71xx*) ;
 int FUNC_2 (struct ag71xx_desc*) ;
 struct ag71xx_desc* FUNC_3 (struct ag71xx_ring*,unsigned int) ;
 int FUNC_4 (struct ag71xx*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct net_device*,int,int) ;
 int FUNC_8 (struct ag71xx*,int ,struct net_device*,char*,...) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int *,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_11(struct ag71xx *VAR_6, bool VAR_7)
{
 struct ag71xx_ring *VAR_8 = &VAR_6->tx_ring;
 int VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
 struct net_device *VAR_12 = VAR_6->ndev;
 int VAR_13, VAR_14;
 bool VAR_15 = 0;

 VAR_13 = FUNC_0(VAR_8->order) - 1;
 VAR_14 = FUNC_0(VAR_8->order);

 FUNC_8(VAR_6, VAR_5, VAR_12, "processing TX ring\n");

 while (VAR_8->dirty + VAR_11 != VAR_8->curr) {
  struct ag71xx_desc *VAR_16;
  struct sk_buff *VAR_17;
  unsigned int VAR_18;

  VAR_18 = (VAR_8->dirty + VAR_11) & VAR_13;
  VAR_16 = FUNC_3(VAR_8, VAR_18);
  VAR_17 = VAR_8->buf[VAR_18].tx.skb;

  if (!VAR_7 && !FUNC_2(VAR_16)) {
   if (VAR_6->dcfg->tx_hang_workaround &&
       FUNC_1(VAR_6)) {
    FUNC_10(&VAR_6->restart_work,
            VAR_2 / 2);
    VAR_15 = 1;
   }
   break;
  }

  if (VAR_7)
   VAR_16->ctrl |= VAR_1;

  VAR_11++;
  if (!VAR_17)
   continue;

  FUNC_6(VAR_17);
  VAR_8->buf[VAR_18].tx.skb = ((void*)0);

  VAR_10 += VAR_8->buf[VAR_18].tx.len;

  VAR_9++;
  VAR_8->dirty += VAR_11;

  while (VAR_11 > 0) {
   FUNC_4(VAR_6, VAR_0, VAR_3);
   VAR_11--;
  }
 }

 FUNC_8(VAR_6, VAR_4, VAR_12, "%d packets sent out\n", VAR_9);

 if (!VAR_9)
  return 0;

 VAR_6->ndev->stats.tx_bytes += VAR_10;
 VAR_6->ndev->stats.tx_packets += VAR_9;

 FUNC_7(VAR_6->ndev, VAR_9, VAR_10);
 if ((VAR_8->curr - VAR_8->dirty) < (VAR_14 * 3) / 4)
  FUNC_9(VAR_6->ndev);

 if (!VAR_15)
  FUNC_5(&VAR_6->restart_work);

 return VAR_9;
}
