
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap {int dummy; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct act8945a_charger {void* chglev_gpio; void* lbo_gpio; struct regmap* regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_21 ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,char*,int ) ;
 int FUNC_5 (struct device*,int ,int ,int,char*,struct act8945a_charger*) ;
 int FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (struct device_node*,char*,int*) ;
 int FUNC_8 (struct regmap*,int ,unsigned int*) ;
 int FUNC_9 (struct regmap*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_22,
       struct act8945a_charger *VAR_23)
{
 struct device_node *VAR_24 = VAR_22->of_node;
 struct regmap *VAR_25 = VAR_23->regmap;

 u32 VAR_26;
 u32 VAR_27;
 u32 VAR_28;
 int VAR_29, VAR_30;

 unsigned int VAR_31;
 unsigned int VAR_32 = 0;

 if (!VAR_24) {
  FUNC_2(VAR_22, "no charger of node\n");
  return -VAR_17;
 }

 VAR_30 = FUNC_8(VAR_25, VAR_0, &VAR_31);
 if (VAR_30)
  return VAR_30;

 if (VAR_31 & VAR_9) {
  VAR_32 |= VAR_9;
  FUNC_3(VAR_22, "have been suspended\n");
 }

 VAR_23->lbo_gpio = FUNC_4(VAR_22, "active-semi,lbo",
          VAR_18);
 if (FUNC_0(VAR_23->lbo_gpio)) {
  VAR_29 = FUNC_1(VAR_23->lbo_gpio);
  FUNC_2(VAR_22, "unable to claim gpio \"lbo\": %d\n", VAR_29);
  return VAR_29;
 }

 VAR_30 = FUNC_5(VAR_22, FUNC_6(VAR_23->lbo_gpio),
          VAR_21,
          (VAR_19 | VAR_20),
          "act8945a_lbo_detect", VAR_23);
 if (VAR_30)
  FUNC_3(VAR_22, "failed to request gpio \"lbo\" IRQ\n");

 VAR_23->chglev_gpio = FUNC_4(VAR_22,
             "active-semi,chglev",
             VAR_18);
 if (FUNC_0(VAR_23->chglev_gpio)) {
  VAR_29 = FUNC_1(VAR_23->chglev_gpio);
  FUNC_2(VAR_22, "unable to claim gpio \"chglev\": %d\n", VAR_29);
  return VAR_29;
 }

 if (FUNC_7(VAR_24,
     "active-semi,input-voltage-threshold-microvolt",
     &VAR_28))
  VAR_28 = VAR_14;

 if (FUNC_7(VAR_24,
     "active-semi,precondition-timeout",
     &VAR_27))
  VAR_27 = VAR_15;

 if (FUNC_7(VAR_24, "active-semi,total-timeout",
     &VAR_26))
  VAR_26 = VAR_16;

 switch (VAR_28) {
 case 8000:
  VAR_32 |= VAR_4;
  break;
 case 7500:
  VAR_32 |= VAR_3;
  break;
 case 7000:
  VAR_32 |= VAR_2;
  break;
 case 6600:
 default:
  VAR_32 |= VAR_1;
  break;
 }

 switch (VAR_27) {
 case 60:
  VAR_32 |= VAR_6;
  break;
 case 80:
  VAR_32 |= VAR_7;
  break;
 case 0:
  VAR_32 |= VAR_8;
  break;
 case 40:
 default:
  VAR_32 |= VAR_5;
  break;
 }

 switch (VAR_26) {
 case 4:
  VAR_32 |= VAR_11;
  break;
 case 5:
  VAR_32 |= VAR_12;
  break;
 case 0:
  VAR_32 |= VAR_13;
  break;
 case 3:
 default:
  VAR_32 |= VAR_10;
  break;
 }

 return FUNC_9(VAR_25, VAR_0, VAR_32);
}
