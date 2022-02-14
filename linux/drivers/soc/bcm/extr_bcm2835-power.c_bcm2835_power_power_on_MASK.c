
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct device {int dummy; } ;
struct TYPE_2__ {int name; } ;
struct bcm2835_power_domain {TYPE_1__ base; struct bcm2835_power* power; } ;
struct bcm2835_power {struct device* dev; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct device*,char*,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct bcm2835_power_domain *VAR_11, u32 VAR_12)
{
 struct bcm2835_power *VAR_13 = VAR_11->power;
 struct device *VAR_14 = VAR_13->dev;
 u64 VAR_15;
 int VAR_16;
 int VAR_17;
 bool VAR_18;


 if (FUNC_0(VAR_12) & VAR_10)
  return 0;





 VAR_18 = 0;
 for (VAR_17 = VAR_2; VAR_17 <= VAR_1; VAR_17++) {
  FUNC_1(VAR_12,
    (FUNC_0(VAR_12) & ~VAR_3) |
    (VAR_17 << VAR_4) |
    VAR_10);

  VAR_15 = FUNC_4();
  while (!(VAR_18 = !!(FUNC_0(VAR_12) & VAR_9))) {
   FUNC_2();
   if (FUNC_4() - VAR_15 >= 3000)
    break;
  }
 }
 if (!VAR_18) {
  FUNC_3(VAR_14, "Timeout waiting for %s power OK\n",
   VAR_11->base.name);
  VAR_16 = -VAR_0;
  goto err_disable_powup;
 }


 FUNC_1(VAR_12, FUNC_0(VAR_12) | VAR_6);


 FUNC_1(VAR_12, FUNC_0(VAR_12) | VAR_7);
 VAR_15 = FUNC_4();
 while (!(FUNC_0(VAR_12) & VAR_8)) {
  FUNC_2();
  if (FUNC_4() - VAR_15 >= 1000) {
   FUNC_3(VAR_14, "Timeout waiting for %s memory repair\n",
    VAR_11->base.name);
   VAR_16 = -VAR_0;
   goto err_disable_ispow;
  }
 }


 FUNC_1(VAR_12, FUNC_0(VAR_12) | VAR_5);

 return 0;

err_disable_ispow:
 FUNC_1(VAR_12, FUNC_0(VAR_12) & ~VAR_6);
err_disable_powup:
 FUNC_1(VAR_12, FUNC_0(VAR_12) & ~(VAR_10 | VAR_3));
 return VAR_16;
}
