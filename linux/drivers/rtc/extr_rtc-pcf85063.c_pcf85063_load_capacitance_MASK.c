
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pcf85063 {int regmap; TYPE_1__* rtc; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct device_node const*,char*,int*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct pcf85063 *VAR_2,
         const struct device_node *VAR_3,
         unsigned int VAR_4)
{
 u32 VAR_5 = 7000;
 u8 VAR_6 = 0;

 if (VAR_4)
  VAR_5 = VAR_4;
 else
  FUNC_1(VAR_3, "quartz-load-femtofarads", &VAR_5);

 switch (VAR_5) {
 default:
  FUNC_0(&VAR_2->rtc->dev, "Unknown quartz-load-femtofarads value: %d. Assuming 7000",
    VAR_5);

 case 7000:
  break;
 case 12500:
  VAR_6 = VAR_1;
  break;
 }

 return FUNC_2(VAR_2->regmap, VAR_0,
      VAR_1, VAR_6);
}
