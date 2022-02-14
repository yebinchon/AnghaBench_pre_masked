
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct spi_device {int dev; } ;
struct lcd_device {int dummy; } ;
struct l4f00242t03_priv {int lcd_state; struct lcd_device* ld; struct spi_device* spi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct spi_device*) ;
 int FUNC_2 (struct spi_device*) ;
 struct l4f00242t03_priv* FUNC_3 (struct lcd_device*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct spi_device*,int const*,int) ;

__attribute__((used)) static int FUNC_6(struct lcd_device *VAR_4, int VAR_5)
{
 struct l4f00242t03_priv *VAR_6 = FUNC_3(VAR_4);
 struct spi_device *VAR_7 = VAR_6->spi;

 const u16 VAR_8 = 0x11;
 const u16 VAR_9 = 0x29;

 const u16 VAR_10 = 0x10;
 const u16 VAR_11 = 0x28;

 if (VAR_5 <= VAR_0) {
  if (VAR_6->lcd_state <= VAR_0) {

  } else if (VAR_6->lcd_state < VAR_1) {
   FUNC_0(&VAR_7->dev, "Resuming LCD\n");

   FUNC_5(VAR_7, (const u8 *)&VAR_8, sizeof(u16));
   FUNC_4(60);
   FUNC_5(VAR_7, (const u8 *)&VAR_9, sizeof(u16));
  } else {

   FUNC_1(VAR_7);
   VAR_6->lcd_state = VAR_3;
   FUNC_6(VAR_6->ld, VAR_5);
  }
 } else if (VAR_5 < VAR_1) {
  if (VAR_6->lcd_state <= VAR_0) {

   FUNC_0(&VAR_7->dev, "Standby the LCD\n");

   FUNC_5(VAR_7, (const u8 *)&VAR_11, sizeof(u16));
   FUNC_4(60);
   FUNC_5(VAR_7, (const u8 *)&VAR_10, sizeof(u16));
  } else if (VAR_6->lcd_state < VAR_1) {

  } else {

   FUNC_1(VAR_7);
   VAR_6->lcd_state = VAR_2;
   FUNC_6(VAR_4, VAR_5);
  }
 } else {

  if (VAR_6->lcd_state != VAR_1) {

   FUNC_5(VAR_7, (const u8 *)&VAR_11, sizeof(u16));
   FUNC_4(60);
   FUNC_2(VAR_7);
  }
 }

 VAR_6->lcd_state = VAR_5;

 return 0;
}
