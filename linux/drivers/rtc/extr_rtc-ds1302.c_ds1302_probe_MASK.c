
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int bits_per_word; int max_speed_hz; int mode; int dev; } ;
struct rtc_device {int dummy; } ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rtc_device*) ;
 int FUNC_1 (struct rtc_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,char*,...) ;
 struct rtc_device* FUNC_3 (int *,char*,int *,int ) ;
 int VAR_8 ;
 int FUNC_4 (struct spi_device*,struct spi_device*) ;
 int FUNC_5 (struct spi_device*,int*,int,int*,int) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_9)
{
 struct rtc_device *VAR_10;
 u8 VAR_11;
 u8 VAR_12[4];
 u8 *VAR_13;
 int VAR_14;





 if (VAR_9->bits_per_word && (VAR_9->bits_per_word != 8)) {
  FUNC_2(&VAR_9->dev, "bad word length\n");
  return -VAR_0;
 } else if (VAR_9->max_speed_hz > 2000000) {
  FUNC_2(&VAR_9->dev, "speed is too high\n");
  return -VAR_0;
 } else if (VAR_9->mode & VAR_6) {
  FUNC_2(&VAR_9->dev, "bad mode\n");
  return -VAR_0;
 }

 VAR_11 = VAR_2 << 1 | VAR_3;
 VAR_14 = FUNC_5(VAR_9, &VAR_11, sizeof(VAR_11), VAR_12, 1);
 if (VAR_14 < 0) {
  FUNC_2(&VAR_9->dev, "control register read error %d\n",
    VAR_14);
  return VAR_14;
 }

 if ((VAR_12[0] & ~VAR_5) != 0) {
  VAR_14 = FUNC_5(VAR_9, &VAR_11, sizeof(VAR_11), VAR_12, 1);
  if (VAR_14 < 0) {
   FUNC_2(&VAR_9->dev, "control register read error %d\n",
     VAR_14);
   return VAR_14;
  }

  if ((VAR_12[0] & ~VAR_5) != 0) {
   FUNC_2(&VAR_9->dev, "junk in control register\n");
   return -VAR_1;
  }
 }
 if (VAR_12[0] == 0) {
  VAR_13 = VAR_12;
  *VAR_13++ = VAR_2 << 1 | VAR_4;
  *VAR_13++ = VAR_5;

  VAR_14 = FUNC_5(VAR_9, VAR_12, 2, ((void*)0), 0);
  if (VAR_14 < 0) {
   FUNC_2(&VAR_9->dev, "control register write error %d\n",
     VAR_14);
   return VAR_14;
  }

  VAR_11 = VAR_2 << 1 | VAR_3;
  VAR_14 = FUNC_5(VAR_9, &VAR_11, sizeof(VAR_11), VAR_12, 1);
  if (VAR_14 < 0) {
   FUNC_2(&VAR_9->dev,
     "error %d reading control register\n",
     VAR_14);
   return VAR_14;
  }

  if (VAR_12[0] != VAR_5) {
   FUNC_2(&VAR_9->dev, "failed to detect chip\n");
   return -VAR_1;
  }
 }

 FUNC_4(VAR_9, VAR_9);

 VAR_10 = FUNC_3(&VAR_9->dev, "ds1302",
   &VAR_8, VAR_7);
 if (FUNC_0(VAR_10)) {
  VAR_14 = FUNC_1(VAR_10);
  FUNC_2(&VAR_9->dev, "error %d registering rtc\n", VAR_14);
  return VAR_14;
 }

 return 0;
}
