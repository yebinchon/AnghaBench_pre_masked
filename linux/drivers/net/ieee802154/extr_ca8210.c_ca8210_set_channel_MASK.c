
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ieee802154_hw {struct ca8210_priv* priv; } ;
struct ca8210_priv {TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,int,scalar_t__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(
 struct ieee802154_hw *VAR_1,
 u8 VAR_2,
 u8 VAR_3
)
{
 u8 VAR_4;
 struct ca8210_priv *VAR_5 = VAR_1->priv;

 VAR_4 = FUNC_2(
  VAR_0,
  0,
  1,
  &VAR_3,
  VAR_5->spi
 );
 if (VAR_4) {
  FUNC_0(
   &VAR_5->spi->dev,
   "error setting channel, MLME-SET.confirm status = %d\n",
   VAR_4
  );
 }
 return FUNC_1(VAR_4);
}
