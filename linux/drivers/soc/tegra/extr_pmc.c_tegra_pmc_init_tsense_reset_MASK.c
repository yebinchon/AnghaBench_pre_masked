
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_pmc {struct device* dev; TYPE_1__* soc; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;
struct TYPE_2__ {int has_tsense_reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct device*,char*,char const*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,char const*) ;
 struct device_node* FUNC_3 (int ,char*) ;
 int FUNC_4 (struct device_node*) ;
 scalar_t__ FUNC_5 (struct device_node*,char*,int*) ;
 int FUNC_6 (struct tegra_pmc*,int ) ;
 int FUNC_7 (struct tegra_pmc*,int,int ) ;

__attribute__((used)) static void FUNC_8(struct tegra_pmc *VAR_12)
{
 static const char VAR_13[] = "emergency thermal reset disabled";
 u32 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 struct device *VAR_19 = VAR_12->dev;
 struct device_node *VAR_20;
 u32 VAR_21, VAR_22;

 if (!VAR_12->soc->has_tsense_reset)
  return;

 VAR_20 = FUNC_3(VAR_12->dev->of_node, "i2c-thermtrip");
 if (!VAR_20) {
  FUNC_2(VAR_19, "i2c-thermtrip node not found, %s.\n", VAR_13);
  return;
 }

 if (FUNC_5(VAR_20, "nvidia,i2c-controller-id", &VAR_15)) {
  FUNC_0(VAR_19, "I2C controller ID missing, %s.\n", VAR_13);
  goto out;
 }

 if (FUNC_5(VAR_20, "nvidia,bus-addr", &VAR_14)) {
  FUNC_0(VAR_19, "nvidia,bus-addr missing, %s.\n", VAR_13);
  goto out;
 }

 if (FUNC_5(VAR_20, "nvidia,reg-addr", &VAR_16)) {
  FUNC_0(VAR_19, "nvidia,reg-addr missing, %s.\n", VAR_13);
  goto out;
 }

 if (FUNC_5(VAR_20, "nvidia,reg-data", &VAR_17)) {
  FUNC_0(VAR_19, "nvidia,reg-data missing, %s.\n", VAR_13);
  goto out;
 }

 if (FUNC_5(VAR_20, "nvidia,pinmux-id", &VAR_18))
  VAR_18 = 0;

 VAR_21 = FUNC_6(VAR_12, VAR_9);
 VAR_21 |= VAR_11;
 FUNC_7(VAR_12, VAR_21, VAR_9);

 VAR_21 = (VAR_17 << VAR_2) |
  (VAR_16 << VAR_1);
 FUNC_7(VAR_12, VAR_21, VAR_0);

 VAR_21 = VAR_8;
 VAR_21 |= VAR_15 << VAR_5;
 VAR_21 |= VAR_18 << VAR_7;
 VAR_21 |= VAR_14 << VAR_6;





 VAR_22 = VAR_16 + VAR_17 + (VAR_21 & 0xff) + ((VAR_21 >> 8) & 0xff)
  + ((VAR_21 >> 24) & 0xff);
 VAR_22 &= 0xff;
 VAR_22 = 0x100 - VAR_22;

 VAR_21 |= VAR_22 << VAR_4;

 FUNC_7(VAR_12, VAR_21, VAR_3);

 VAR_21 = FUNC_6(VAR_12, VAR_9);
 VAR_21 |= VAR_10;
 FUNC_7(VAR_12, VAR_21, VAR_9);

 FUNC_1(VAR_12->dev, "emergency thermal reset enabled\n");

out:
 FUNC_4(VAR_20);
}
