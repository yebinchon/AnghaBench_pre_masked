
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int mode; int cs_gpio; int dev; } ;
struct img_spfi_device_data {int gpio_requested; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int ,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int ) ;
 struct img_spfi_device_data* FUNC_5 (int,int ) ;
 struct img_spfi_device_data* FUNC_6 (struct spi_device*) ;
 int FUNC_7 (struct spi_device*,struct img_spfi_device_data*) ;

__attribute__((used)) static int FUNC_8(struct spi_device *VAR_6)
{
 int VAR_7 = -VAR_0;
 struct img_spfi_device_data *VAR_8 = FUNC_6(VAR_6);

 if (!VAR_8) {
  VAR_8 = FUNC_5(sizeof(*VAR_8), VAR_2);
  if (!VAR_8)
   return -VAR_1;
  VAR_8->gpio_requested = 0;
  FUNC_7(VAR_6, VAR_8);
 }
 if (!VAR_8->gpio_requested) {
  VAR_7 = FUNC_4(VAR_6->cs_gpio,
           (VAR_6->mode & VAR_5) ?
           VAR_4 : VAR_3,
           FUNC_1(&VAR_6->dev));
  if (VAR_7)
   FUNC_0(&VAR_6->dev, "can't request chipselect gpio %d\n",
    VAR_6->cs_gpio);
  else
   VAR_8->gpio_requested = 1;
 } else {
  if (FUNC_3(VAR_6->cs_gpio)) {
   int VAR_9 = ((VAR_6->mode & VAR_5) ?
        VAR_4 : VAR_3);

   VAR_7 = FUNC_2(VAR_6->cs_gpio, VAR_9);
   if (VAR_7)
    FUNC_0(&VAR_6->dev, "chipselect gpio %d setup failed (%d)\n",
     VAR_6->cs_gpio, VAR_7);
  }
 }
 return VAR_7;
}
