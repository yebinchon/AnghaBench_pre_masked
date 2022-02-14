
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned char u8 ;
struct TYPE_2__ {int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct rtc_wkalrm {scalar_t__ enabled; TYPE_1__ time; int pending; } ;
struct ds1307 {int regmap; int flags; } ;
struct device {int dummy; } ;
typedef int regs ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*,...) ;
 struct ds1307* FUNC_3 (struct device*) ;
 int FUNC_4 (int ,int ,unsigned char*,int) ;
 int FUNC_5 (int ,int ,unsigned char*,int) ;
 int FUNC_6 (int ,int ,unsigned char) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_8, struct rtc_wkalrm *VAR_9)
{
 struct ds1307 *VAR_10 = FUNC_3(VAR_8);
 unsigned char VAR_11[9];
 u8 VAR_12, VAR_13;
 int VAR_14;

 if (!FUNC_7(VAR_7, &VAR_10->flags))
  return -VAR_6;

 FUNC_1(VAR_8, "%s secs=%d, mins=%d, "
  "hours=%d, mday=%d, enabled=%d, pending=%d\n",
  "alarm set", VAR_9->time.tm_sec, VAR_9->time.tm_min,
  VAR_9->time.tm_hour, VAR_9->time.tm_mday,
  VAR_9->enabled, VAR_9->pending);


 VAR_14 = FUNC_4(VAR_10->regmap, VAR_5, VAR_11,
          sizeof(VAR_11));
 if (VAR_14) {
  FUNC_2(VAR_8, "%s error %d\n", "alarm write", VAR_14);
  return VAR_14;
 }
 VAR_12 = VAR_11[7];
 VAR_13 = VAR_11[8];

 FUNC_1(VAR_8, "%s: %4ph, %3ph, %02x %02x\n", "alarm set (old status)",
  &VAR_11[0], &VAR_11[4], VAR_12, VAR_13);


 VAR_11[0] = FUNC_0(VAR_9->time.tm_sec);
 VAR_11[1] = FUNC_0(VAR_9->time.tm_min);
 VAR_11[2] = FUNC_0(VAR_9->time.tm_hour);
 VAR_11[3] = FUNC_0(VAR_9->time.tm_mday);


 VAR_11[4] = 0;
 VAR_11[5] = 0;
 VAR_11[6] = 0;


 VAR_11[7] = VAR_12 & ~(VAR_1 | VAR_3);
 VAR_11[8] = VAR_13 & ~(VAR_0 | VAR_2);

 VAR_14 = FUNC_5(VAR_10->regmap, VAR_5, VAR_11,
    sizeof(VAR_11));
 if (VAR_14) {
  FUNC_2(VAR_8, "can't set alarm time\n");
  return VAR_14;
 }


 if (VAR_9->enabled) {
  FUNC_1(VAR_8, "alarm IRQ armed\n");
  VAR_11[7] |= VAR_1;
  FUNC_6(VAR_10->regmap, VAR_4, VAR_11[7]);
 }

 return 0;
}
