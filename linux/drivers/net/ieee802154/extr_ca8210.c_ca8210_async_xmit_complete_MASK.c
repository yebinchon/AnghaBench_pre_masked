
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ieee802154_hw {struct ca8210_priv* priv; } ;
struct ca8210_priv {scalar_t__ nextmsduhandle; int async_tx_pending; int tx_skb; int hw; TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,scalar_t__,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(
 struct ieee802154_hw *VAR_2,
 u8 VAR_3,
 u8 VAR_4)
{
 struct ca8210_priv *VAR_5 = VAR_2->priv;

 if (VAR_5->nextmsduhandle != VAR_3) {
  FUNC_0(
   &VAR_5->spi->dev,
   "Unexpected msdu_handle on data confirm, Expected %d, got %d\n",
   VAR_5->nextmsduhandle,
   VAR_3
  );
  return -VAR_0;
 }

 VAR_5->async_tx_pending = 0;
 VAR_5->nextmsduhandle++;

 if (VAR_4) {
  FUNC_0(
   &VAR_5->spi->dev,
   "Link transmission unsuccessful, status = %d\n",
   VAR_4
  );
  if (VAR_4 != VAR_1) {
   FUNC_1(VAR_5->hw);
   return 0;
  }
 }
 FUNC_2(VAR_5->hw, VAR_5->tx_skb, 1);

 return 0;
}
