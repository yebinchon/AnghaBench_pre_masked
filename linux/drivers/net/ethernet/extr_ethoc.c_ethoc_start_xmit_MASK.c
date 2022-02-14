
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; int data; } ;
struct TYPE_2__ {int tx_errors; } ;
struct net_device {int dev; TYPE_1__ stats; } ;
struct ethoc_bd {int stat; } ;
struct ethoc {unsigned int cur_tx; unsigned int num_tx; unsigned int dty_tx; int lock; void** vma; } ;
typedef int netdev_tx_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct ethoc*,unsigned int,struct ethoc_bd*) ;
 int FUNC_4 (struct ethoc*,unsigned int,struct ethoc_bd*) ;
 int FUNC_5 (void*,int ,scalar_t__) ;
 struct ethoc* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct sk_buff*,scalar_t__) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static netdev_tx_t FUNC_13(struct sk_buff *VAR_7, struct net_device *VAR_8)
{
 struct ethoc *VAR_9 = FUNC_6(VAR_8);
 struct ethoc_bd VAR_10;
 unsigned int VAR_11;
 void *VAR_12;

 if (FUNC_8(VAR_7, VAR_1)) {
  VAR_8->stats.tx_errors++;
  goto out_no_free;
 }

 if (FUNC_12(VAR_7->len > VAR_0)) {
  VAR_8->stats.tx_errors++;
  goto out;
 }

 VAR_11 = VAR_9->cur_tx % VAR_9->num_tx;
 FUNC_10(&VAR_9->lock);
 VAR_9->cur_tx++;

 FUNC_3(VAR_9, VAR_11, &VAR_10);
 if (FUNC_12(VAR_7->len < VAR_1))
  VAR_10.stat |= VAR_4;
 else
  VAR_10.stat &= ~VAR_4;

 VAR_12 = VAR_9->vma[VAR_11];
 FUNC_5(VAR_12, VAR_7->data, VAR_7->len);

 VAR_10.stat &= ~(VAR_6 | VAR_3);
 VAR_10.stat |= FUNC_0(VAR_7->len);
 FUNC_4(VAR_9, VAR_11, &VAR_10);

 VAR_10.stat |= VAR_5;
 FUNC_4(VAR_9, VAR_11, &VAR_10);

 if (VAR_9->cur_tx == (VAR_9->dty_tx + VAR_9->num_tx)) {
  FUNC_1(&VAR_8->dev, "stopping queue\n");
  FUNC_7(VAR_8);
 }

 FUNC_11(&VAR_9->lock);
 FUNC_9(VAR_7);
out:
 FUNC_2(VAR_7);
out_no_free:
 return VAR_2;
}
