
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct spi_device {int dev; int mode; int max_speed_hz; } ;
struct lcd_device {int dummy; } ;
struct ili922x {struct lcd_device* ld; int power; struct spi_device* spi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct lcd_device*) ;
 int FUNC_1 (struct lcd_device*) ;
 int VAR_7 ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*,int,int ,int ) ;
 struct ili922x* FUNC_5 (int *,int,int ) ;
 struct lcd_device* FUNC_6 (int *,char*,int *,struct ili922x*,int *) ;
 int FUNC_7 (struct spi_device*) ;
 int FUNC_8 (struct ili922x*,int ) ;
 int VAR_8 ;
 int FUNC_9 (struct spi_device*,int ,int*) ;
 int FUNC_10 (struct spi_device*,int*) ;
 int FUNC_11 (struct spi_device*,struct ili922x*) ;

__attribute__((used)) static int FUNC_12(struct spi_device *VAR_9)
{
 struct ili922x *VAR_10;
 struct lcd_device *VAR_11;
 int VAR_12;
 u16 VAR_13 = 0;

 VAR_10 = FUNC_5(&VAR_9->dev, sizeof(*VAR_10), VAR_4);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->spi = VAR_9;
 FUNC_11(VAR_9, VAR_10);


 VAR_12 = FUNC_9(VAR_9, VAR_7, &VAR_13);
 if (VAR_12 || ((VAR_13 & VAR_6) != VAR_5)) {
  FUNC_3(&VAR_9->dev,
   "no LCD found: Chip ID 0x%x, ret %d\n",
   VAR_13, VAR_12);
  return -VAR_0;
 }

 FUNC_4(&VAR_9->dev, "ILI%x found, SPI freq %d, mode %d\n",
   VAR_13, VAR_9->max_speed_hz, VAR_9->mode);

 VAR_12 = FUNC_10(VAR_9, &VAR_13);
 if (VAR_12) {
  FUNC_3(&VAR_9->dev, "reading RS failed...\n");
  return VAR_12;
 }

 FUNC_2(&VAR_9->dev, "status: 0x%x\n", VAR_13);

 FUNC_7(VAR_9);

 VAR_10->power = VAR_2;

 VAR_11 = FUNC_6(&VAR_9->dev, "ili922xlcd", &VAR_9->dev, VAR_10,
     &VAR_8);
 if (FUNC_0(VAR_11)) {
  FUNC_3(&VAR_9->dev, "cannot register LCD\n");
  return FUNC_1(VAR_11);
 }

 VAR_10->ld = VAR_11;
 FUNC_11(VAR_9, VAR_10);

 FUNC_8(VAR_10, VAR_3);

 return 0;
}
