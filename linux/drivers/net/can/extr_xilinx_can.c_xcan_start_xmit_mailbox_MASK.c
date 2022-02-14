
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xcan_priv {int (* read_reg ) (struct xcan_priv*,int ) ;int tx_lock; int (* write_reg ) (struct xcan_priv*,int ,int) ;int tx_head; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct sk_buff*,struct net_device*,int ) ;
 struct xcan_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct xcan_priv*,int ) ;
 int FUNC_8 (struct xcan_priv*,int ,int) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct xcan_priv*,struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 struct xcan_priv *VAR_5 = FUNC_3(VAR_4);
 unsigned long VAR_6;

 if (FUNC_9(VAR_5->read_reg(VAR_5, VAR_1) &
       FUNC_0(VAR_2)))
  return -VAR_0;

 FUNC_2(VAR_3, VAR_4, 0);

 FUNC_5(&VAR_5->tx_lock, VAR_6);

 VAR_5->tx_head++;

 FUNC_10(VAR_5, VAR_3,
    FUNC_1(VAR_2));


 VAR_5->write_reg(VAR_5, VAR_1, FUNC_0(VAR_2));

 FUNC_4(VAR_4);

 FUNC_6(&VAR_5->tx_lock, VAR_6);

 return 0;
}
