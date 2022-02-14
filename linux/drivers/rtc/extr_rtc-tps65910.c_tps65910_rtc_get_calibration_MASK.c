
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tps65910 {int regmap; } ;
struct device {int parent; } ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct tps65910* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,unsigned char*,int) ;
 int FUNC_3 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_4, int *VAR_5)
{
 unsigned char VAR_6[VAR_0];
 struct tps65910 *VAR_7 = FUNC_1(VAR_4->parent);
 unsigned int VAR_8;
 u16 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_7->regmap, VAR_2, &VAR_8);
 if (VAR_10 < 0)
  return VAR_10;


 if (!(VAR_8 & VAR_3)) {
  *VAR_5 = 0;
  return 0;
 }

 VAR_10 = FUNC_2(VAR_7->regmap, VAR_1, VAR_6,
  VAR_0);
 if (VAR_10 < 0) {
  FUNC_0(VAR_4, "rtc_get_calibration error: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_9 = (u16)VAR_6[0] | ((u16)VAR_6[1] << 8);

 *VAR_5 = (s16)VAR_9;

 return 0;
}
