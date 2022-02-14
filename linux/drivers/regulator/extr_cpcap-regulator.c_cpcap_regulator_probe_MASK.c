
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_config {void* driver_data; scalar_t__ regmap; TYPE_1__* dev; } ;
struct TYPE_6__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_7__ {scalar_t__ volt_table; int name; } ;
typedef struct cpcap_regulator {TYPE_3__ rdesc; } const cpcap_regulator ;
struct cpcap_ddata {struct cpcap_regulator const* soc; scalar_t__ reg; TYPE_1__* dev; } ;
typedef int config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 struct cpcap_ddata* FUNC_4 (TYPE_1__*,int,int ) ;
 struct regulator_dev* FUNC_5 (TYPE_1__*,TYPE_3__*,struct regulator_config*) ;
 int FUNC_6 (struct regulator_config*,int ,int) ;
 struct cpcap_regulator const* FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct platform_device*,struct cpcap_ddata*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_5)
{
 struct cpcap_ddata *VAR_6;
 const struct cpcap_regulator *VAR_7;
 struct regulator_config VAR_8;
 int VAR_9;

 VAR_7 = FUNC_7(&VAR_5->dev);
 if (!VAR_7) {
  FUNC_2(&VAR_5->dev, "no configuration data found\n");

  return -VAR_1;
 }

 VAR_6 = FUNC_4(&VAR_5->dev, sizeof(*VAR_6), VAR_3);
 if (!VAR_6)
  return -VAR_2;

 VAR_6->reg = FUNC_3(VAR_5->dev.parent, ((void*)0));
 if (!VAR_6->reg)
  return -VAR_1;

 VAR_6->dev = &VAR_5->dev;
 VAR_6->soc = VAR_7;
 FUNC_8(VAR_5, VAR_6);

 FUNC_6(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.dev = &VAR_5->dev;
 VAR_8.regmap = VAR_6->reg;

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  const struct cpcap_regulator *VAR_10 = &VAR_6->soc[VAR_9];
  struct regulator_dev *VAR_11;

  if (!VAR_10->rdesc.name)
   break;

  if (VAR_10->rdesc.volt_table == VAR_4)
   continue;

  VAR_8.driver_data = (void *)VAR_10;
  VAR_11 = FUNC_5(&VAR_5->dev,
            &VAR_10->rdesc,
            &VAR_8);
  if (FUNC_0(VAR_11)) {
   FUNC_2(&VAR_5->dev, "failed to register regulator %s\n",
    VAR_10->rdesc.name);

   return FUNC_1(VAR_11);
  }
 }

 return 0;
}
