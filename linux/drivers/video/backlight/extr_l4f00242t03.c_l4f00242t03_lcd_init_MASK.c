
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct spi_device {int dev; } ;
struct l4f00242t03_priv {int io_reg; int core_reg; } ;
struct l4f00242t03_pdata {int data_enable_gpio; int reset_gpio; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 struct l4f00242t03_pdata* FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int,int) ;
 struct l4f00242t03_priv* FUNC_11 (struct spi_device*) ;
 int FUNC_12 (struct spi_device*,int const*,int) ;

__attribute__((used)) static void FUNC_13(struct spi_device *VAR_0)
{
 struct l4f00242t03_pdata *VAR_1 = FUNC_3(&VAR_0->dev);
 struct l4f00242t03_priv *VAR_2 = FUNC_11(VAR_0);
 const u16 VAR_3[] = { 0x36, FUNC_7(0), 0x3A, FUNC_7(0x60) };
 int VAR_4;

 FUNC_1(&VAR_0->dev, "initializing LCD\n");

 VAR_4 = FUNC_10(VAR_2->io_reg, 1800000, 1800000);
 if (VAR_4) {
  FUNC_2(&VAR_0->dev, "failed to set the IO regulator voltage.\n");
  return;
 }
 VAR_4 = FUNC_9(VAR_2->io_reg);
 if (VAR_4) {
  FUNC_2(&VAR_0->dev, "failed to enable the IO regulator.\n");
  return;
 }

 VAR_4 = FUNC_10(VAR_2->core_reg, 2800000, 2800000);
 if (VAR_4) {
  FUNC_2(&VAR_0->dev, "failed to set the core regulator voltage.\n");
  FUNC_8(VAR_2->io_reg);
  return;
 }
 VAR_4 = FUNC_9(VAR_2->core_reg);
 if (VAR_4) {
  FUNC_2(&VAR_0->dev, "failed to enable the core regulator.\n");
  FUNC_8(VAR_2->io_reg);
  return;
 }

 FUNC_5(VAR_1->reset_gpio);

 FUNC_4(VAR_1->data_enable_gpio, 1);
 FUNC_6(60);
 FUNC_12(VAR_0, (const u8 *)VAR_3, FUNC_0(VAR_3) * sizeof(u16));
}
