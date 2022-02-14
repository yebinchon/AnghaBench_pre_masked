
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee802154_hw {struct ca8210_priv* priv; } ;
struct ca8210_priv {int spi; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int*,int ) ;

__attribute__((used)) static int FUNC_2(struct ieee802154_hw *VAR_1, s32 VAR_2)
{
 struct ca8210_priv *VAR_3 = VAR_1->priv;

 VAR_2 /= 100;
 return FUNC_0(
  FUNC_1(VAR_0, 0, 1, &VAR_2, VAR_3->spi)
 );
}
