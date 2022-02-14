
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int t ;
struct wl12xx_spi_glue {int dev; } ;
struct wl1271 {int* buffer_busyword; } ;
struct spi_transfer {int* rx_buf; int len; int cs_change; } ;
struct spi_message {int dummy; } ;
struct device {struct device* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 void* FUNC_1 (struct device*) ;
 int FUNC_2 (struct spi_transfer*,int ,int) ;
 int FUNC_3 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_4 (struct spi_message*) ;
 int FUNC_5 (int ,struct spi_message*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_2)
{
 struct wl12xx_spi_glue *VAR_3 = FUNC_1(VAR_2->parent);
 struct wl1271 *VAR_4 = FUNC_1(VAR_2);
 struct spi_transfer VAR_5[1];
 struct spi_message VAR_6;
 u32 *VAR_7;
 int VAR_8 = 0;






 VAR_8 = VAR_1;
 VAR_7 = VAR_4->buffer_busyword;
 while (VAR_8) {
  VAR_8--;
  FUNC_4(&VAR_6);
  FUNC_2(VAR_5, 0, sizeof(VAR_5));
  VAR_5[0].rx_buf = VAR_7;
  VAR_5[0].len = sizeof(u32);
  VAR_5[0].cs_change = 1;
  FUNC_3(&VAR_5[0], &VAR_6);
  FUNC_5(FUNC_6(VAR_3->dev), &VAR_6);

  if (*VAR_7 & 0x1)
   return 0;
 }


 FUNC_0(VAR_2->parent, "SPI read busy-word timeout!\n");
 return -VAR_0;
}
