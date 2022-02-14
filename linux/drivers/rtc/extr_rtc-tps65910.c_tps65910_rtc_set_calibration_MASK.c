
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tps65910 {int regmap; } ;
struct device {int parent; } ;
typedef scalar_t__ s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct tps65910* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,unsigned char*,int) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_5, int VAR_6)
{
 unsigned char VAR_7[VAR_1];
 struct tps65910 *VAR_8 = FUNC_1(VAR_5->parent);
 s16 VAR_9;
 int VAR_10;
 if ((VAR_6 < -32768) || (VAR_6 > 32766)) {
  FUNC_0(VAR_5, "RTC calibration value out of range: %d\n",
   VAR_6);
  return -VAR_0;
 }

 VAR_9 = (s16)VAR_6;

 VAR_7[0] = (u16)VAR_9 & 0xFF;
 VAR_7[1] = ((u16)VAR_9 >> 8) & 0xFF;


 VAR_10 = FUNC_2(VAR_8->regmap, VAR_2,
  VAR_7, VAR_1);
 if (VAR_10 < 0) {
  FUNC_0(VAR_5, "rtc_set_calibration error: %d\n", VAR_10);
  return VAR_10;
 }


 VAR_10 = FUNC_3(VAR_8->regmap, VAR_3,
  VAR_4, VAR_4);
 if (VAR_10 < 0)
  FUNC_0(VAR_5, "auto_comp enable failed with error: %d\n", VAR_10);

 return VAR_10;
}
