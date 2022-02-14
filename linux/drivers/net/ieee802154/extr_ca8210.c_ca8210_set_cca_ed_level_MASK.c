
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ieee802154_hw {struct ca8210_priv* priv; } ;
struct ca8210_priv {TYPE_1__* spi; } ;
typedef int s32 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int,int*,TYPE_1__*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct ieee802154_hw *VAR_1, s32 VAR_2)
{
 u8 VAR_3;
 u8 VAR_4 = (VAR_2 / 100) * 2 + 256;
 struct ca8210_priv *VAR_5 = VAR_1->priv;

 VAR_3 = FUNC_1(
  VAR_0,
  1,
  &VAR_4,
  VAR_5->spi
 );
 if (VAR_3) {
  FUNC_0(
   &VAR_5->spi->dev,
   "error setting ed threshold, HWME-SET.confirm status = %d",
   VAR_3
  );
 }
 return FUNC_2(VAR_3);
}
