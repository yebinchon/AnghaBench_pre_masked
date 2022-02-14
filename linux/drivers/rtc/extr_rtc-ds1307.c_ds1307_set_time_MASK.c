
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_wday; } ;
struct ds1307 {size_t type; int regmap; } ;
struct device {int dummy; } ;
struct chip_desc {int century_bit; int century_enable_bit; size_t century_reg; int offset; } ;
typedef int regs ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (int) ;
 struct chip_desc* VAR_16 ;
 int FUNC_1 (struct device*,char*,char*,...) ;
 int FUNC_2 (struct device*,char*,char*,int) ;
 struct ds1307* FUNC_3 (struct device*) ;




 int FUNC_4 (int ,int ,int*,int) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int) ;
 int VAR_17 ;

__attribute__((used)) static int FUNC_7(struct device *VAR_18, struct rtc_time *VAR_19)
{
 struct ds1307 *VAR_20 = FUNC_3(VAR_18);
 const struct chip_desc *VAR_21 = &VAR_16[VAR_20->type];
 int VAR_22;
 int VAR_23;
 u8 VAR_24[7];

 FUNC_1(VAR_18, "%s secs=%d, mins=%d, "
  "hours=%d, mday=%d, mon=%d, year=%d, wday=%d\n",
  "write", VAR_19->tm_sec, VAR_19->tm_min,
  VAR_19->tm_hour, VAR_19->tm_mday,
  VAR_19->tm_mon, VAR_19->tm_year, VAR_19->tm_wday);

 if (VAR_19->tm_year < 100)
  return -VAR_11;





 if (VAR_19->tm_year > 199)
  return -VAR_11;


 VAR_24[VAR_5] = FUNC_0(VAR_19->tm_sec);
 VAR_24[VAR_3] = FUNC_0(VAR_19->tm_min);
 VAR_24[VAR_1] = FUNC_0(VAR_19->tm_hour);
 VAR_24[VAR_6] = FUNC_0(VAR_19->tm_wday + 1);
 VAR_24[VAR_2] = FUNC_0(VAR_19->tm_mday);
 VAR_24[VAR_4] = FUNC_0(VAR_19->tm_mon + 1);


 VAR_23 = VAR_19->tm_year - 100;
 VAR_24[VAR_7] = FUNC_0(VAR_23);

 if (VAR_21->century_enable_bit)
  VAR_24[VAR_21->century_reg] |= VAR_21->century_enable_bit;
 if (VAR_19->tm_year > 199 && VAR_21->century_bit)
  VAR_24[VAR_21->century_reg] |= VAR_21->century_bit;

 switch (VAR_20->type) {
 case 131:
 case 130:
  FUNC_5(VAR_20->regmap, VAR_0,
       VAR_8, 0);
  break;
 case 129:
  FUNC_5(VAR_20->regmap, VAR_10,
       VAR_9, 0);
  break;
 case 128:





  VAR_24[VAR_5] |= VAR_12;
  VAR_24[VAR_6] |= VAR_13;
  break;
 default:
  break;
 }

 FUNC_1(VAR_18, "%s: %7ph\n", "write", VAR_24);

 VAR_22 = FUNC_4(VAR_20->regmap, VAR_21->offset, VAR_24,
       sizeof(VAR_24));
 if (VAR_22) {
  FUNC_2(VAR_18, "%s error %d\n", "write", VAR_22);
  return VAR_22;
 }

 if (VAR_20->type == VAR_17) {

  VAR_22 = FUNC_6(VAR_20->regmap, VAR_14,
          ~(u8)VAR_15);
  if (VAR_22) {
   FUNC_2(VAR_18, "%s error %d\n", "write", VAR_22);
   return VAR_22;
  }
 }

 return 0;
}
