
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ieee802154_hw_addr_filt {int ieee_addr; int short_addr; int pan_id; } ;
struct ieee802154_hw {struct ca8210_priv* priv; } ;
struct ca8210_priv {TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,int,int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(
 struct ieee802154_hw *VAR_6,
 struct ieee802154_hw_addr_filt *VAR_7,
 unsigned long VAR_8
)
{
 u8 VAR_9 = 0;
 struct ca8210_priv *VAR_10 = VAR_6->priv;

 if (VAR_8 & VAR_1) {
  VAR_9 = FUNC_2(
   VAR_3,
   0,
   2,
   &VAR_7->pan_id, VAR_10->spi
  );
  if (VAR_9) {
   FUNC_0(
    &VAR_10->spi->dev,
    "error setting pan id, MLME-SET.confirm status = %d",
    VAR_9
   );
   return FUNC_1(VAR_9);
  }
 }
 if (VAR_8 & VAR_2) {
  VAR_9 = FUNC_2(
   VAR_4,
   0,
   2,
   &VAR_7->short_addr, VAR_10->spi
  );
  if (VAR_9) {
   FUNC_0(
    &VAR_10->spi->dev,
    "error setting short address, MLME-SET.confirm status = %d",
    VAR_9
   );
   return FUNC_1(VAR_9);
  }
 }
 if (VAR_8 & VAR_0) {
  VAR_9 = FUNC_2(
   VAR_5,
   0,
   8,
   &VAR_7->ieee_addr,
   VAR_10->spi
  );
  if (VAR_9) {
   FUNC_0(
    &VAR_10->spi->dev,
    "error setting ieee address, MLME-SET.confirm status = %d",
    VAR_9
   );
   return FUNC_1(VAR_9);
  }
 }

 return 0;
}
