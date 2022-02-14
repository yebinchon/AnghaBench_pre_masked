
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int irq; int name; } ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct mv643xx_eth_private {int int_mask; int rxq_count; int txq_count; scalar_t__ rxq; TYPE_1__ mib_counters_timer; scalar_t__ txq; TYPE_1__ rx_oom; scalar_t__ oom; int napi; } ;


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
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,struct net_device*) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct mv643xx_eth_private*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct net_device*,char*) ;
 struct mv643xx_eth_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct mv643xx_eth_private*) ;
 int FUNC_7 (struct mv643xx_eth_private*,int ) ;
 int FUNC_8 (int ,int ,int ,int ,struct net_device*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct mv643xx_eth_private*,int) ;
 int FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct mv643xx_eth_private*,int) ;
 int FUNC_14 (struct mv643xx_eth_private*,int ,int) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_15)
{
 struct mv643xx_eth_private *VAR_16 = FUNC_5(VAR_15);
 int VAR_17;
 int VAR_18;

 FUNC_14(VAR_16, VAR_2, 0);
 FUNC_14(VAR_16, VAR_3, 0);
 FUNC_7(VAR_16, VAR_3);

 VAR_17 = FUNC_8(VAR_15->irq, VAR_14,
     VAR_12, VAR_15->name, VAR_15);
 if (VAR_17) {
  FUNC_4(VAR_15, "can't assign irq\n");
  return -VAR_0;
 }

 FUNC_2(VAR_16);

 FUNC_3(&VAR_16->napi);

 VAR_16->int_mask = VAR_4;

 for (VAR_18 = 0; VAR_18 < VAR_16->rxq_count; VAR_18++) {
  VAR_17 = FUNC_10(VAR_16, VAR_18);
  if (VAR_17) {
   while (--VAR_18 >= 0)
    FUNC_9(VAR_16->rxq + VAR_18);
   goto out;
  }

  FUNC_11(VAR_16->rxq + VAR_18, VAR_9);
  VAR_16->int_mask |= VAR_10 << VAR_18;
 }

 if (VAR_16->oom) {
  VAR_16->rx_oom.expires = VAR_13 + (VAR_1 / 10);
  FUNC_0(&VAR_16->rx_oom);
 }

 for (VAR_18 = 0; VAR_18 < VAR_16->txq_count; VAR_18++) {
  VAR_17 = FUNC_13(VAR_16, VAR_18);
  if (VAR_17) {
   while (--VAR_18 >= 0)
    FUNC_12(VAR_16->txq + VAR_18);
   goto out_free;
  }
  VAR_16->int_mask |= VAR_11 << VAR_18;
 }

 FUNC_0(&VAR_16->mib_counters_timer);
 FUNC_6(VAR_16);

 FUNC_14(VAR_16, VAR_8, VAR_5 | VAR_6);
 FUNC_14(VAR_16, VAR_7, VAR_16->int_mask);

 return 0;


out_free:
 for (VAR_18 = 0; VAR_18 < VAR_16->rxq_count; VAR_18++)
  FUNC_9(VAR_16->rxq + VAR_18);
out:
 FUNC_1(VAR_15->irq, VAR_15);

 return VAR_17;
}
