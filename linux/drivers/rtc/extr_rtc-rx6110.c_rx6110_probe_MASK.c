
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct spi_device {int bits_per_word; int max_speed_hz; int mode; int dev; } ;
struct rx6110_data {TYPE_1__* rtc; TYPE_1__* regmap; } ;
struct TYPE_5__ {int max_user_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,...) ;
 struct rx6110_data* FUNC_4 (int *,int,int ) ;
 TYPE_1__* FUNC_5 (struct spi_device*,int *) ;
 TYPE_1__* FUNC_6 (int *,int ,int *,int ) ;
 int VAR_7 ;
 int FUNC_7 (struct rx6110_data*) ;
 int VAR_8 ;
 int FUNC_8 (struct spi_device*,struct rx6110_data*) ;

__attribute__((used)) static int FUNC_9(struct spi_device *VAR_9)
{
 struct rx6110_data *VAR_10;
 int VAR_11;

 if ((VAR_9->bits_per_word && VAR_9->bits_per_word != 8) ||
     (VAR_9->max_speed_hz > 2000000) ||
     (VAR_9->mode != (VAR_5 | VAR_4 | VAR_3))) {
  FUNC_3(&VAR_9->dev, "SPI settings: bits_per_word: %d, max_speed_hz: %d, mode: %xh\n",
    VAR_9->bits_per_word, VAR_9->max_speed_hz, VAR_9->mode);
  FUNC_3(&VAR_9->dev, "driving device in an unsupported mode");
 }

 VAR_10 = FUNC_4(&VAR_9->dev, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->regmap = FUNC_5(VAR_9, &VAR_7);
 if (FUNC_0(VAR_10->regmap)) {
  FUNC_2(&VAR_9->dev, "regmap init failed for rtc rx6110\n");
  return FUNC_1(VAR_10->regmap);
 }

 FUNC_8(VAR_9, VAR_10);

 VAR_10->rtc = FUNC_6(&VAR_9->dev,
            VAR_2,
            &VAR_8, VAR_6);

 if (FUNC_0(VAR_10->rtc))
  return FUNC_1(VAR_10->rtc);

 VAR_11 = FUNC_7(VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_10->rtc->max_user_freq = 1;

 return 0;
}
