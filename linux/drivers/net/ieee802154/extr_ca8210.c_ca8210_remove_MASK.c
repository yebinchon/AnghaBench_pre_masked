
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int driver_data; struct ca8210_platform_data* platform_data; } ;
struct spi_device {TYPE_1__ dev; } ;
struct ca8210_priv {int * hw; scalar_t__ hw_registered; int sync_up; int sync_down; } ;
struct ca8210_platform_data {int irq_id; scalar_t__ extclockenable; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ca8210_platform_data*,struct spi_device*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ca8210_priv*) ;
 int FUNC_4 (struct spi_device*) ;
 int FUNC_5 (TYPE_1__*,char*,...) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ca8210_platform_data*) ;
 struct ca8210_priv* FUNC_10 (struct spi_device*) ;

__attribute__((used)) static int FUNC_11(struct spi_device *VAR_1)
{
 struct ca8210_priv *VAR_2;
 struct ca8210_platform_data *VAR_3;

 FUNC_5(&VAR_1->dev, "Removing ca8210\n");

 VAR_3 = VAR_1->dev.platform_data;
 if (VAR_3) {
  if (VAR_3->extclockenable) {
   FUNC_4(VAR_1);
   FUNC_1(VAR_3, VAR_1, 0);
  }
  FUNC_6(VAR_3->irq_id, VAR_1->dev.driver_data);
  FUNC_9(VAR_3);
  VAR_1->dev.platform_data = ((void*)0);
 }

 VAR_2 = FUNC_10(VAR_1);
 if (VAR_2) {
  FUNC_5(
   &VAR_1->dev,
   "sync_down = %d, sync_up = %d\n",
   VAR_2->sync_down,
   VAR_2->sync_up
  );
  FUNC_2(VAR_1->dev.driver_data);
  if (VAR_2->hw) {
   if (VAR_2->hw_registered)
    FUNC_8(VAR_2->hw);
   FUNC_7(VAR_2->hw);
   VAR_2->hw = ((void*)0);
   FUNC_5(
    &VAR_1->dev,
    "Unregistered & freed ieee802154_hw.\n"
   );
  }
  if (FUNC_0(VAR_0))
   FUNC_3(VAR_2);
 }

 return 0;
}
