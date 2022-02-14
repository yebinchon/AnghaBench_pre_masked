
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int cs_gpio; int dev; int master; } ;
struct sirfsoc_spi {int hw_cs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (struct spi_device*) ;
 struct sirfsoc_spi* FUNC_5 (int ) ;
 int FUNC_6 (struct spi_device*,void*) ;
 int FUNC_7 (struct spi_device*,int ) ;
 int FUNC_8 (struct spi_device*) ;

__attribute__((used)) static int FUNC_9(struct spi_device *VAR_5)
{
 struct sirfsoc_spi *VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_5(VAR_5->master);
 if (VAR_5->cs_gpio == -VAR_2)
  VAR_6->hw_cs = 1;
 else {
  VAR_6->hw_cs = 0;
  if (!FUNC_4(VAR_5)) {
   void *VAR_8 = FUNC_3(sizeof(int), VAR_4);
   if (!VAR_8) {
    VAR_7 = -VAR_3;
    goto exit;
   }
   VAR_7 = FUNC_1(VAR_5->cs_gpio);
   if (!VAR_7) {
    FUNC_0(&VAR_5->dev, "no valid gpio\n");
    VAR_7 = -VAR_2;
    goto exit;
   }
   VAR_7 = FUNC_2(VAR_5->cs_gpio, VAR_1);
   if (VAR_7) {
    FUNC_0(&VAR_5->dev, "failed to request gpio\n");
    goto exit;
   }
   FUNC_6(VAR_5, VAR_8);
  }
 }
 FUNC_8(VAR_5);
 FUNC_7(VAR_5, VAR_0);
exit:
 return VAR_7;
}
