
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tosa_lcd_data {int is_vga; int * lcd; struct spi_device* spi; } ;
struct spi_device {int bits_per_word; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,int ,char*) ;
 struct tosa_lcd_data* FUNC_3 (int *,int,int ) ;
 int * FUNC_4 (int *,char*,int *,struct tosa_lcd_data*,int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct spi_device*,struct tosa_lcd_data*) ;
 int FUNC_7 (struct spi_device*) ;
 int VAR_4 ;
 int FUNC_8 (struct tosa_lcd_data*) ;
 int FUNC_9 (struct tosa_lcd_data*) ;
 int FUNC_10 (struct tosa_lcd_data*) ;

__attribute__((used)) static int FUNC_11(struct spi_device *VAR_5)
{
 int VAR_6;
 struct tosa_lcd_data *VAR_7;

 VAR_7 = FUNC_3(&VAR_5->dev, sizeof(struct tosa_lcd_data),
    VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->is_vga = 1;




 VAR_5->bits_per_word = 8;

 VAR_6 = FUNC_7(VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_7->spi = VAR_5;
 FUNC_6(VAR_5, VAR_7);

 VAR_6 = FUNC_2(&VAR_5->dev, VAR_3,
    VAR_2, "tg #pwr");
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_5(60);

 FUNC_8(VAR_7);

 FUNC_10(VAR_7);

 VAR_7->lcd = FUNC_4(&VAR_5->dev, "tosa-lcd", &VAR_5->dev,
     VAR_7, &VAR_4);

 if (FUNC_0(VAR_7->lcd)) {
  VAR_6 = FUNC_1(VAR_7->lcd);
  VAR_7->lcd = ((void*)0);
  goto err_register;
 }

 return 0;

err_register:
 FUNC_9(VAR_7);
 return VAR_6;
}
