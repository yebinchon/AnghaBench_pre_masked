
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_2__ {unsigned long tx_packets; unsigned long tx_bytes; } ;
struct net_device {TYPE_1__ stats; } ;
struct ioc3_private {int tx_ci; scalar_t__ txqlen; int ioc3_lock; struct sk_buff** tx_skbs; struct ioc3_ethregs* regs; } ;
struct ioc3_ethregs {int etcir; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 struct ioc3_private* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static inline void FUNC_7(struct net_device *VAR_2)
{
 struct ioc3_private *VAR_3 = FUNC_1(VAR_2);
 struct ioc3_ethregs *VAR_4 = VAR_3->regs;
 unsigned long VAR_5, VAR_6;
 int VAR_7, VAR_8;
 struct sk_buff *VAR_9;
 u32 VAR_10;

 FUNC_5(&VAR_3->ioc3_lock);
 VAR_10 = FUNC_4(&VAR_4->etcir);

 VAR_7 = (VAR_10 >> 7) & VAR_1;
 VAR_8 = VAR_3->tx_ci;
 VAR_5 = 0;
 VAR_6 = 0;

 while (VAR_8 != VAR_7) {
  VAR_5++;
  VAR_9 = VAR_3->tx_skbs[VAR_8];
  VAR_6 += VAR_9->len;
  FUNC_0(VAR_9);
  VAR_3->tx_skbs[VAR_8] = ((void*)0);

  VAR_8 = (VAR_8 + 1) & VAR_1;

  VAR_10 = FUNC_4(&VAR_4->etcir);
  VAR_7 = (VAR_10 >> 7) & VAR_1;
 }

 VAR_2->stats.tx_packets += VAR_5;
 VAR_2->stats.tx_bytes += VAR_6;
 VAR_3->txqlen -= VAR_5;

 if (FUNC_2(VAR_2) && VAR_3->txqlen < VAR_0)
  FUNC_3(VAR_2);

 VAR_3->tx_ci = VAR_8;
 FUNC_6(&VAR_3->ioc3_lock);
}
