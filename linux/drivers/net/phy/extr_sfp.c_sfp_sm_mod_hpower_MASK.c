
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int val ;
typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int options; scalar_t__ sff8472_compliance; int diagmon; } ;
struct TYPE_4__ {TYPE_1__ ext; } ;
struct sfp {int max_power_mW; int dev; TYPE_2__ id; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 (int ,char*,int,int) ;
 int FUNC_5 (struct sfp*,int,int ,int *,int) ;
 int FUNC_6 (struct sfp*,int,int ,int *,int) ;

__attribute__((used)) static int FUNC_7(struct sfp *VAR_9)
{
 u32 VAR_10;
 u8 VAR_11;
 int VAR_12;

 VAR_10 = 1000;
 if (VAR_9->id.ext.options & FUNC_1(VAR_6))
  VAR_10 = 1500;
 if (VAR_9->id.ext.options & FUNC_1(VAR_5))
  VAR_10 = 2000;

 if (VAR_9->id.ext.sff8472_compliance == VAR_7 &&
     (VAR_9->id.ext.diagmon & (VAR_3 | VAR_2)) !=
     VAR_3) {




  if (VAR_10 > VAR_9->max_power_mW) {
   FUNC_2(VAR_9->dev,
    "Host does not support %u.%uW modules\n",
    VAR_10 / 1000, (VAR_10 / 100) % 10);
   return -VAR_1;
  }
  return 0;
 }

 if (VAR_10 > VAR_9->max_power_mW) {
  FUNC_4(VAR_9->dev,
    "Host does not support %u.%uW modules, module left in power mode 1\n",
    VAR_10 / 1000, (VAR_10 / 100) % 10);
  return 0;
 }

 if (VAR_10 <= 1000)
  return 0;

 VAR_12 = FUNC_5(VAR_9, 1, VAR_4, &VAR_11, sizeof(VAR_11));
 if (VAR_12 != sizeof(VAR_11)) {
  FUNC_2(VAR_9->dev, "Failed to read EEPROM: %d\n", VAR_12);
  VAR_12 = -VAR_0;
  goto err;
 }

 VAR_11 |= FUNC_0(0);

 VAR_12 = FUNC_6(VAR_9, 1, VAR_4, &VAR_11, sizeof(VAR_11));
 if (VAR_12 != sizeof(VAR_11)) {
  FUNC_2(VAR_9->dev, "Failed to write EEPROM: %d\n", VAR_12);
  VAR_12 = -VAR_0;
  goto err;
 }

 FUNC_3(VAR_9->dev, "Module switched to %u.%uW power level\n",
   VAR_10 / 1000, (VAR_10 / 100) % 10);
 return VAR_8;

err:
 return VAR_12;
}
