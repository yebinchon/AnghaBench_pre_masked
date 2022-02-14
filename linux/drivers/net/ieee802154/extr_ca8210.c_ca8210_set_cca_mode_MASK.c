
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpan_phy_cca {int mode; scalar_t__ opt; } ;
struct ieee802154_hw {struct ca8210_priv* priv; } ;
struct ca8210_priv {TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int,int*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(
 struct ieee802154_hw *VAR_2,
 const struct wpan_phy_cca *VAR_3
)
{
 u8 VAR_4;
 u8 VAR_5;
 struct ca8210_priv *VAR_6 = VAR_2->priv;

 VAR_5 = VAR_3->mode & 3;
 if (VAR_5 == 3 && VAR_3->opt == VAR_0) {

  VAR_5 = 0;
 }
 VAR_4 = FUNC_2(
  VAR_1,
  0,
  1,
  &VAR_5,
  VAR_6->spi
 );
 if (VAR_4) {
  FUNC_0(
   &VAR_6->spi->dev,
   "error setting cca mode, MLME-SET.confirm status = %d",
   VAR_4
  );
 }
 return FUNC_1(VAR_4);
}
