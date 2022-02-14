
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct power_supply_desc {int dummy; } ;
struct power_supply_config {int num_supplicants; int supplied_to; } ;
struct power_supply {int dummy; } ;
struct TYPE_5__ {int parent; } ;
struct platform_device {int id; TYPE_1__ dev; } ;
struct TYPE_6__ {int notifier_call; } ;
struct nvec_power {TYPE_2__ notifier; int poller; struct nvec_chip* nvec; } ;
struct nvec_chip {int dummy; } ;



 int FUNC_0 (int ) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct power_supply*) ;
 struct nvec_chip* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,struct nvec_power*) ;
 struct nvec_power* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (struct nvec_power*) ;
 int FUNC_7 (int) ;
 struct power_supply* VAR_4 ;
 struct power_supply_desc VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct power_supply* VAR_10 ;
 struct power_supply_desc VAR_11 ;
 int FUNC_8 (struct nvec_chip*,TYPE_2__*,int ) ;
 struct power_supply* FUNC_9 (TYPE_1__*,struct power_supply_desc const*,struct power_supply_config*) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_12)
{
 struct power_supply **VAR_13;
 const struct power_supply_desc *VAR_14;
 struct nvec_power *VAR_15;
 struct nvec_chip *VAR_16 = FUNC_3(VAR_12->dev.parent);
 struct power_supply_config VAR_17 = {};

 VAR_15 = FUNC_5(&VAR_12->dev, sizeof(struct nvec_power), VAR_2);
 if (!VAR_15)
  return -VAR_1;

 FUNC_4(&VAR_12->dev, VAR_15);
 VAR_15->nvec = VAR_16;

 switch (VAR_12->id) {
 case 129:
  VAR_13 = &VAR_10;
  VAR_14 = &VAR_11;
  VAR_17.supplied_to = VAR_9;
  VAR_17.num_supplicants = FUNC_0(VAR_9);

  VAR_15->notifier.notifier_call = VAR_7;

  FUNC_1(&VAR_15->poller, VAR_8);
  FUNC_10(&VAR_15->poller, FUNC_7(5000));
  break;
 case 128:
  VAR_13 = &VAR_4;
  VAR_14 = &VAR_5;

  VAR_15->notifier.notifier_call = VAR_6;
  break;
 default:
  return -VAR_0;
 }

 FUNC_8(VAR_16, &VAR_15->notifier, VAR_3);

 if (VAR_12->id == 128)
  FUNC_6(VAR_15);

 *VAR_13 = FUNC_9(&VAR_12->dev, VAR_14, &VAR_17);

 return FUNC_2(*VAR_13);
}
