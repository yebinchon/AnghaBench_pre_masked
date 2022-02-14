
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
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,int,scalar_t__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(
 struct ieee802154_hw *VAR_3,
 u8 VAR_4,
 u8 VAR_5,
 u8 VAR_6
)
{
 u8 VAR_7;
 struct ca8210_priv *VAR_8 = VAR_3->priv;

 VAR_7 = FUNC_2(VAR_2, 0, 1, &VAR_4, VAR_8->spi);
 if (VAR_7) {
  FUNC_0(
   &VAR_8->spi->dev,
   "error setting min be, MLME-SET.confirm status = %d",
   VAR_7
  );
  return FUNC_1(VAR_7);
 }
 VAR_7 = FUNC_2(VAR_0, 0, 1, &VAR_5, VAR_8->spi);
 if (VAR_7) {
  FUNC_0(
   &VAR_8->spi->dev,
   "error setting max be, MLME-SET.confirm status = %d",
   VAR_7
  );
  return FUNC_1(VAR_7);
 }
 VAR_7 = FUNC_2(
  VAR_1,
  0,
  1,
  &VAR_6,
  VAR_8->spi
 );
 if (VAR_7) {
  FUNC_0(
   &VAR_8->spi->dev,
   "error setting max csma backoffs, MLME-SET.confirm status = %d",
   VAR_7
  );
 }
 return FUNC_1(VAR_7);
}
