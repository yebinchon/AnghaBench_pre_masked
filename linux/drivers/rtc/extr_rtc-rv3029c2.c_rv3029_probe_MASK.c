
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rv3029_data {int irq; int rtc; struct device* dev; struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int alarm_irq_enable; int set_alarm; int read_alarm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,struct rv3029_data*) ;
 int FUNC_4 (struct device*,char*) ;
 struct rv3029_data* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,int,int *,int ,int,char*,struct device*) ;
 int FUNC_7 (struct device*,char const*,TYPE_1__*,int ) ;
 int VAR_5 ;
 int FUNC_8 (struct device*,int *) ;
 int VAR_6 ;
 int FUNC_9 (struct device*,char const*) ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (struct device*) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_10, struct regmap *VAR_11, int VAR_12,
   const char *VAR_13)
{
 struct rv3029_data *VAR_14;
 int VAR_15 = 0;
 u8 VAR_16[1];

 VAR_14 = FUNC_5(VAR_10, sizeof(*VAR_14), VAR_1);
 if (!VAR_14)
  return -VAR_0;

 VAR_14->regmap = VAR_11;
 VAR_14->irq = VAR_12;
 VAR_14->dev = VAR_10;
 FUNC_3(VAR_10, VAR_14);

 VAR_15 = FUNC_8(VAR_10, VAR_16);
 if (VAR_15 < 0) {
  FUNC_2(VAR_10, "reading status failed\n");
  return VAR_15;
 }

 FUNC_10(VAR_10);
 FUNC_9(VAR_10, VAR_13);

 VAR_14->rtc = FUNC_7(VAR_10, VAR_13, &VAR_8,
            VAR_4);
 if (FUNC_0(VAR_14->rtc)) {
  FUNC_2(VAR_10, "unable to register the class device\n");
  return FUNC_1(VAR_14->rtc);
 }

 if (VAR_14->irq > 0) {
  VAR_15 = FUNC_6(VAR_10, VAR_14->irq,
            ((void*)0), VAR_6,
            VAR_3 | VAR_2,
            "rv3029", VAR_10);
  if (VAR_15) {
   FUNC_4(VAR_10, "unable to request IRQ, alarms disabled\n");
   VAR_14->irq = 0;
  } else {
   VAR_8.read_alarm = VAR_7;
   VAR_8.set_alarm = VAR_9;
   VAR_8.alarm_irq_enable = VAR_5;
  }
 }

 return 0;
}
