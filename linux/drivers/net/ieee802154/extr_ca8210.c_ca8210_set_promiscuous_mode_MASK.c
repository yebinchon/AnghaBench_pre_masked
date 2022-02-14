
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ieee802154_hw {struct ca8210_priv* priv; } ;
struct ca8210_priv {int promiscuous; TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,int,void const*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct ieee802154_hw *VAR_1, const bool VAR_2)
{
 u8 VAR_3;
 struct ca8210_priv *VAR_4 = VAR_1->priv;

 VAR_3 = FUNC_2(
  VAR_0,
  0,
  1,
  (const void *)&VAR_2,
  VAR_4->spi
 );
 if (VAR_3) {
  FUNC_0(
   &VAR_4->spi->dev,
   "error setting promiscuous mode, MLME-SET.confirm status = %d",
   VAR_3
  );
 } else {
  VAR_4->promiscuous = VAR_2;
 }
 return FUNC_1(VAR_3);
}
