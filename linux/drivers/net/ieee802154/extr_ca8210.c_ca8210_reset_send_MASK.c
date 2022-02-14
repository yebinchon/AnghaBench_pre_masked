
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct ca8210_platform_data* platform_data; } ;
struct spi_device {TYPE_1__ dev; } ;
struct ca8210_priv {int promiscuous; int ca8210_is_awake; } ;
struct ca8210_platform_data {int gpio_reset; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int *) ;
 struct ca8210_priv* FUNC_6 (struct spi_device*) ;
 long FUNC_7 (int *,int ) ;

__attribute__((used)) static void FUNC_8(struct spi_device *VAR_1, unsigned int VAR_2)
{
 struct ca8210_platform_data *VAR_3 = VAR_1->dev.platform_data;
 struct ca8210_priv *VAR_4 = FUNC_6(VAR_1);
 long VAR_5;

 FUNC_2(VAR_3->gpio_reset, 0);
 FUNC_5(&VAR_4->ca8210_is_awake);
 FUNC_4(VAR_2);
 FUNC_2(VAR_3->gpio_reset, 1);
 VAR_4->promiscuous = 0;


 VAR_5 = FUNC_7(
  &VAR_4->ca8210_is_awake,
  FUNC_3(VAR_0)
 );
 if (VAR_5 == 0) {
  FUNC_0(
   &VAR_1->dev,
   "Fatal: No wakeup from ca8210 after reset!\n"
  );
 }

 FUNC_1(&VAR_1->dev, "Reset the device\n");
}
