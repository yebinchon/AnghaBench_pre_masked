
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {int len; int data; } ;
struct ieee802154_hw {struct cc2520_private* priv; } ;
struct cc2520_private {int is_tx; int lock; int tx_complete; TYPE_1__* spi; scalar_t__ promiscuous; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cc2520_private*,int ) ;
 int FUNC_2 (struct cc2520_private*,int*) ;
 int FUNC_3 (struct cc2520_private*,int,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(struct ieee802154_hw *VAR_4, struct sk_buff *VAR_5)
{
 struct cc2520_private *VAR_6 = VAR_4->priv;
 unsigned long VAR_7;
 int VAR_8;
 u8 VAR_9 = 0;
 u8 VAR_10;




 if (VAR_6->promiscuous) {
  u16 VAR_11 = FUNC_4(0, VAR_5->data, VAR_5->len);

  FUNC_6(VAR_11, FUNC_7(VAR_5, 2));
  VAR_10 = VAR_5->len;
 } else {
  VAR_10 = VAR_5->len + 2;
 }

 VAR_8 = FUNC_1(VAR_6, VAR_0);
 if (VAR_8)
  goto err_tx;

 VAR_8 = FUNC_3(VAR_6, VAR_10, VAR_5->data, VAR_5->len);
 if (VAR_8)
  goto err_tx;

 VAR_8 = FUNC_2(VAR_6, &VAR_9);
 if (VAR_8)
  goto err_tx;

 if (VAR_9 & VAR_3) {
  FUNC_5(&VAR_6->spi->dev, "cc2520 tx underflow exception\n");
  goto err_tx;
 }

 FUNC_8(&VAR_6->lock, VAR_7);
 FUNC_0(VAR_6->is_tx);
 VAR_6->is_tx = 1;
 FUNC_9(&VAR_6->lock, VAR_7);

 VAR_8 = FUNC_1(VAR_6, VAR_2);
 if (VAR_8)
  goto err;

 VAR_8 = FUNC_10(&VAR_6->tx_complete);
 if (VAR_8 < 0)
  goto err;

 FUNC_1(VAR_6, VAR_0);
 FUNC_1(VAR_6, VAR_1);

 return VAR_8;
err:
 FUNC_8(&VAR_6->lock, VAR_7);
 VAR_6->is_tx = 0;
 FUNC_9(&VAR_6->lock, VAR_7);
err_tx:
 return VAR_8;
}
