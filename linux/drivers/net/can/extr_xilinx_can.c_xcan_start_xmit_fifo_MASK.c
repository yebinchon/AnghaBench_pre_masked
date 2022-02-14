
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xcan_priv {int (* read_reg ) (struct xcan_priv*,int ) ;int tx_head; int tx_max; int tx_tail; int tx_lock; int (* write_reg ) (struct xcan_priv*,int ,int ) ;} ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,struct net_device*,int) ;
 struct xcan_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct xcan_priv*,int ) ;
 int FUNC_6 (struct xcan_priv*,int ,int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct xcan_priv*,struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_6, struct net_device *VAR_7)
{
 struct xcan_priv *VAR_8 = FUNC_1(VAR_7);
 unsigned long VAR_9;


 if (FUNC_7(VAR_8->read_reg(VAR_8, VAR_3) &
   VAR_4))
  return -VAR_0;

 FUNC_0(VAR_6, VAR_7, VAR_8->tx_head % VAR_8->tx_max);

 FUNC_3(&VAR_8->tx_lock, VAR_9);

 VAR_8->tx_head++;

 FUNC_8(VAR_8, VAR_6, VAR_5);


 if (VAR_8->tx_max > 1)
  VAR_8->write_reg(VAR_8, VAR_1, VAR_2);


 if ((VAR_8->tx_head - VAR_8->tx_tail) == VAR_8->tx_max)
  FUNC_2(VAR_7);

 FUNC_4(&VAR_8->tx_lock, VAR_9);

 return 0;
}
