
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ieee802154_hw {struct at86rf230_local* priv; } ;
struct at86rf230_local {TYPE_1__* spi; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct at86rf230_local*) ;
 int FUNC_2 (struct at86rf230_local*,int ) ;
 int FUNC_3 (struct at86rf230_local*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void
FUNC_6(struct ieee802154_hw *VAR_3)
{
 struct at86rf230_local *VAR_4 = VAR_3->priv;
 u8 VAR_5[2];

 FUNC_2(VAR_4, VAR_2);

 FUNC_4(VAR_4->spi->irq);






 FUNC_5(VAR_5, FUNC_0(VAR_5));
 FUNC_3(VAR_4, VAR_0, VAR_5[0]);
 FUNC_3(VAR_4, VAR_1, VAR_5[1]);

 FUNC_1(VAR_4);
}
