
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee802154_hw {struct ca8210_priv* priv; } ;
struct ca8210_priv {int spi; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ieee802154_hw *VAR_1, u8 *VAR_2)
{
 u8 VAR_3;
 struct ca8210_priv *VAR_4 = VAR_1->priv;

 return FUNC_1(
  FUNC_0(VAR_0, &VAR_3, VAR_2, VAR_4->spi)
 );
}
