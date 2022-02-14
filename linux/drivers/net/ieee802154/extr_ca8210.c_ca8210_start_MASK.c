
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ieee802154_hw {struct ca8210_priv* priv; } ;
struct ca8210_priv {int last_dsn; TYPE_1__* spi; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int,int*,TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int,int*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct ieee802154_hw *VAR_2)
{
 int VAR_3;
 u8 VAR_4;
 u8 VAR_5 = 0;
 struct ca8210_priv *VAR_6 = VAR_2->priv;

 VAR_6->last_dsn = -1;

 VAR_4 = 1;
 VAR_3 = FUNC_3(
  VAR_1,
  0,
  1,
  &VAR_4,
  VAR_6->spi
 );
 if (VAR_3) {
  FUNC_0(
   &VAR_6->spi->dev,
   "Setting rx_on_when_idle failed, status = %d\n",
   VAR_3
  );
  return FUNC_2(VAR_3);
 }
 VAR_3 = FUNC_1(
  VAR_0,
  1,
  &VAR_5,
  VAR_6->spi
 );
 if (VAR_3) {
  FUNC_0(
   &VAR_6->spi->dev,
   "Setting lqilimit failed, status = %d\n",
   VAR_3
  );
  return FUNC_2(VAR_3);
 }

 return 0;
}
