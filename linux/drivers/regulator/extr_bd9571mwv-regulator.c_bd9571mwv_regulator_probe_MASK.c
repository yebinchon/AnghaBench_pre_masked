
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_config {int regmap; struct bd9571mwv* driver_data; TYPE_1__* dev; } ;
struct TYPE_5__ {int of_node; int parent; } ;
struct platform_device {TYPE_1__ dev; int name; } ;
struct bd9571mwv_reg {unsigned int bkup_mode_cnt_keepon; void* rstbmode_pulse; void* bkup_mode_enabled; void* rstbmode_level; struct bd9571mwv* bd; } ;
struct bd9571mwv {TYPE_4__* dev; int regmap; } ;
struct TYPE_6__ {int of_node; } ;


 int FUNC_0 (int *) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_4__*,char*,...) ;
 struct bd9571mwv* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 struct bd9571mwv_reg* FUNC_6 (TYPE_1__*,int,int ) ;
 struct regulator_dev* FUNC_7 (TYPE_1__*,int *,struct regulator_config*) ;
 void* FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,char*,unsigned int*) ;
 int FUNC_10 (struct platform_device*,struct bd9571mwv_reg*) ;
 int * VAR_5 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_6)
{
 struct bd9571mwv *VAR_7 = FUNC_4(VAR_6->dev.parent);
 struct regulator_config VAR_8 = { };
 struct bd9571mwv_reg *VAR_9;
 struct regulator_dev *VAR_10;
 unsigned int VAR_11;
 int VAR_12;

 VAR_9 = FUNC_6(&VAR_6->dev, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_9->bd = VAR_7;

 FUNC_10(VAR_6, VAR_9);

 VAR_8.dev = &VAR_6->dev;
 VAR_8.dev->of_node = VAR_7->dev->of_node;
 VAR_8.driver_data = VAR_7;
 VAR_8.regmap = VAR_7->regmap;

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_5); VAR_12++) {
  VAR_10 = FUNC_7(&VAR_6->dev, &VAR_5[VAR_12],
            &VAR_8);
  if (FUNC_1(VAR_10)) {
   FUNC_3(VAR_7->dev, "failed to register %s regulator\n",
    VAR_6->name);
   return FUNC_2(VAR_10);
  }
 }

 VAR_11 = 0;
 FUNC_9(VAR_7->dev->of_node, "rohm,ddr-backup-power", &VAR_11);
 if (VAR_11 & ~VAR_0) {
  FUNC_3(VAR_7->dev, "invalid %s mode %u\n",
   "rohm,ddr-backup-power", VAR_11);
  return -VAR_1;
 }
 VAR_9->bkup_mode_cnt_keepon = VAR_11;

 VAR_9->rstbmode_level = FUNC_8(VAR_7->dev->of_node,
            "rohm,rstbmode-level");
 VAR_9->rstbmode_pulse = FUNC_8(VAR_7->dev->of_node,
            "rohm,rstbmode-pulse");
 if (VAR_9->rstbmode_level && VAR_9->rstbmode_pulse) {
  FUNC_3(VAR_7->dev, "only one rohm,rstbmode-* may be specified");
  return -VAR_1;
 }
 return 0;
}
