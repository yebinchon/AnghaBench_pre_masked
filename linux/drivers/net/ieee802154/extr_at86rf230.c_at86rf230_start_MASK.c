
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee802154_hw {struct at86rf230_local* priv; } ;
struct at86rf230_trac {int dummy; } ;
struct at86rf230_local {TYPE_1__* spi; int trac; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct at86rf230_local*) ;
 int FUNC_2 (struct at86rf230_local*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct ieee802154_hw *VAR_2)
{
 struct at86rf230_local *VAR_3 = VAR_2->priv;


 if (FUNC_0(VAR_0))
  FUNC_4(&VAR_3->trac, 0, sizeof(struct at86rf230_trac));

 FUNC_1(VAR_3);
 FUNC_3(VAR_3->spi->irq);

 return FUNC_2(VAR_3, VAR_1);
}
