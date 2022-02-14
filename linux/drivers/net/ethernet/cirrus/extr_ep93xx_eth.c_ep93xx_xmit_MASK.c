
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct TYPE_6__ {int parent; } ;
struct TYPE_4__ {int tx_dropped; } ;
struct net_device {TYPE_3__ dev; TYPE_1__ stats; } ;
struct ep93xx_tdesc {int tdesc1; int buf_addr; } ;
struct ep93xx_priv {int tx_pointer; int tx_pending; int tx_pending_lock; int * tx_buf; TYPE_2__* descs; } ;
typedef int netdev_tx_t ;
struct TYPE_5__ {struct ep93xx_tdesc* tdesc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (int ,int ,int,int ) ;
 struct ep93xx_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct ep93xx_priv*,int ,int) ;

__attribute__((used)) static netdev_tx_t FUNC_10(struct sk_buff *VAR_6, struct net_device *VAR_7)
{
 struct ep93xx_priv *VAR_8 = FUNC_3(VAR_7);
 struct ep93xx_tdesc *VAR_9;
 int VAR_10;

 if (FUNC_8(VAR_6->len > VAR_1)) {
  VAR_7->stats.tx_dropped++;
  FUNC_0(VAR_6);
  return VAR_2;
 }

 VAR_10 = VAR_8->tx_pointer;
 VAR_8->tx_pointer = (VAR_8->tx_pointer + 1) & (VAR_5 - 1);

 VAR_9 = &VAR_8->descs->tdesc[VAR_10];

 VAR_9->tdesc1 = VAR_4 | (VAR_10 << 16) | (VAR_6->len & 0xfff);
 FUNC_1(VAR_7->dev.parent, VAR_9->buf_addr, VAR_6->len,
    VAR_0);
 FUNC_5(VAR_6, VAR_8->tx_buf[VAR_10]);
 FUNC_2(VAR_7->dev.parent, VAR_9->buf_addr, VAR_6->len,
       VAR_0);
 FUNC_0(VAR_6);

 FUNC_6(&VAR_8->tx_pending_lock);
 VAR_8->tx_pending++;
 if (VAR_8->tx_pending == VAR_5)
  FUNC_4(VAR_7);
 FUNC_7(&VAR_8->tx_pending_lock);

 FUNC_9(VAR_8, VAR_3, 1);

 return VAR_2;
}
