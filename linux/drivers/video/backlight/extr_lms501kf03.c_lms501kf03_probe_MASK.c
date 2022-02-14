
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int bits_per_word; int dev; } ;
struct lms501kf03 {int power; TYPE_1__* lcd_pd; struct lcd_device* ld; int * dev; struct spi_device* spi; } ;
struct lcd_device {int dummy; } ;
struct TYPE_2__ {int lcd_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct lcd_device*) ;
 int FUNC_1 (struct lcd_device*) ;
 int FUNC_2 (int *,char*) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 struct lms501kf03* FUNC_5 (int *,int,int ) ;
 struct lcd_device* FUNC_6 (int *,char*,int *,struct lms501kf03*,int *) ;
 int VAR_5 ;
 int FUNC_7 (struct lms501kf03*,int ) ;
 int FUNC_8 (struct spi_device*,struct lms501kf03*) ;
 int FUNC_9 (struct spi_device*) ;

__attribute__((used)) static int FUNC_10(struct spi_device *VAR_6)
{
 struct lms501kf03 *VAR_7 = ((void*)0);
 struct lcd_device *VAR_8 = ((void*)0);
 int VAR_9 = 0;

 VAR_7 = FUNC_5(&VAR_6->dev, sizeof(struct lms501kf03), VAR_4);
 if (!VAR_7)
  return -VAR_1;


 VAR_6->bits_per_word = 9;

 VAR_9 = FUNC_9(VAR_6);
 if (VAR_9 < 0) {
  FUNC_2(&VAR_6->dev, "spi setup failed.\n");
  return VAR_9;
 }

 VAR_7->spi = VAR_6;
 VAR_7->dev = &VAR_6->dev;

 VAR_7->lcd_pd = FUNC_3(&VAR_6->dev);
 if (!VAR_7->lcd_pd) {
  FUNC_2(&VAR_6->dev, "platform data is NULL\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_6(&VAR_6->dev, "lms501kf03", &VAR_6->dev, VAR_7,
     &VAR_5);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_7->ld = VAR_8;

 if (!VAR_7->lcd_pd->lcd_enabled) {





  VAR_7->power = VAR_2;

  FUNC_7(VAR_7, VAR_3);
 } else {
  VAR_7->power = VAR_3;
 }

 FUNC_8(VAR_6, VAR_7);

 FUNC_4(&VAR_6->dev, "lms501kf03 panel driver has been probed.\n");

 return 0;
}
