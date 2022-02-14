
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee802154_hw {struct adf7242_local* priv; } ;
struct adf7242_local {int flags; int work; TYPE_1__* spi; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adf7242_local*) ;
 int FUNC_1 (struct adf7242_local*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ieee802154_hw *VAR_2)
{
 struct adf7242_local *VAR_3 = VAR_2->priv;

 FUNC_4(VAR_3->spi->irq);
 FUNC_2(&VAR_3->work);
 FUNC_1(VAR_3, VAR_0);
 FUNC_3(VAR_1, &VAR_3->flags);
 FUNC_0(VAR_3);
}
