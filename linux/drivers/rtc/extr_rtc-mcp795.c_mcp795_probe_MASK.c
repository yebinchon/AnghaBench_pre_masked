
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int bits_per_word; scalar_t__ irq; int dev; int mode; } ;
struct rtc_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rtc_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct rtc_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,scalar_t__,int *,int ,int,int ,struct spi_device*) ;
 struct rtc_device* FUNC_7 (int *,char*,int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int *,int,int ,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (struct spi_device*,struct rtc_device*) ;
 int FUNC_11 (struct spi_device*) ;

__attribute__((used)) static int FUNC_12(struct spi_device *VAR_9)
{
 struct rtc_device *VAR_10;
 int VAR_11;

 VAR_9->mode = VAR_5;
 VAR_9->bits_per_word = 8;
 VAR_11 = FUNC_11(VAR_9);
 if (VAR_11) {
  FUNC_3(&VAR_9->dev, "Unable to setup SPI\n");
  return VAR_11;
 }


 FUNC_9(&VAR_9->dev, ((void*)0));

 FUNC_8(&VAR_9->dev, 0x03, VAR_2, 0);

 VAR_10 = FUNC_7(&VAR_9->dev, "rtc-mcp795",
     &VAR_8, VAR_6);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 FUNC_10(VAR_9, VAR_10);

 if (VAR_9->irq > 0) {
  FUNC_2(&VAR_9->dev, "Alarm support enabled\n");




  FUNC_8(&VAR_9->dev, VAR_4,
     VAR_3, 0);
  VAR_11 = FUNC_6(&VAR_9->dev, VAR_9->irq, ((void*)0),
    VAR_7, VAR_1 | VAR_0,
    FUNC_4(&VAR_10->dev), VAR_9);
  if (VAR_11)
   FUNC_3(&VAR_9->dev, "Failed to request IRQ: %d: %d\n",
      VAR_9->irq, VAR_11);
  else
   FUNC_5(&VAR_9->dev, 1);
 }
 return 0;
}
