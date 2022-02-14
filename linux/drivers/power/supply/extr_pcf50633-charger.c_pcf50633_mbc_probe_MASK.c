
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct power_supply_config {int attr_grp; struct pcf50633_mbc* drv_data; int num_supplicants; int supplied_to; } ;
struct TYPE_8__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct pcf50633_mbc {TYPE_3__* pcf; void* ac; void* usb; void* adapter; } ;
struct TYPE_9__ {int dev; TYPE_1__* pdata; } ;
struct TYPE_7__ {int num_batteries; int batteries; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ,char*) ;
 TYPE_3__* FUNC_4 (int ) ;
 struct pcf50633_mbc* FUNC_5 (TYPE_2__*,int,int ) ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ,struct pcf50633_mbc*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (TYPE_3__*,int ,int (*) (int ,struct pcf50633_mbc*),struct pcf50633_mbc*) ;
 int FUNC_9 (struct platform_device*,struct pcf50633_mbc*) ;
 void* FUNC_10 (TYPE_2__*,int *,struct power_supply_config*) ;
 int FUNC_11 (void*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_12)
{
 struct power_supply_config VAR_13 = {};
 struct power_supply_config VAR_14;
 struct pcf50633_mbc *VAR_15;
 int VAR_16;
 u8 VAR_17;

 VAR_15 = FUNC_5(&VAR_12->dev, sizeof(*VAR_15), VAR_1);
 if (!VAR_15)
  return -VAR_0;

 FUNC_9(VAR_12, VAR_15);
 VAR_15->pcf = FUNC_4(VAR_12->dev.parent);


 for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_7); VAR_16++)
  FUNC_8(VAR_15->pcf, VAR_7[VAR_16],
     FUNC_6, VAR_15);

 VAR_13.supplied_to = VAR_15->pcf->pdata->batteries;
 VAR_13.num_supplicants = VAR_15->pcf->pdata->num_batteries;
 VAR_13.drv_data = VAR_15;


 VAR_15->adapter = FUNC_10(&VAR_12->dev,
          &VAR_9,
          &VAR_13);
 if (FUNC_1(VAR_15->adapter)) {
  FUNC_3(VAR_15->pcf->dev, "failed to register adapter\n");
  return FUNC_2(VAR_15->adapter);
 }

 VAR_14 = VAR_13;
 VAR_14.attr_grp = VAR_10;

 VAR_15->usb = FUNC_10(&VAR_12->dev, &VAR_11,
      &VAR_14);
 if (FUNC_1(VAR_15->usb)) {
  FUNC_3(VAR_15->pcf->dev, "failed to register usb\n");
  FUNC_11(VAR_15->adapter);
  return FUNC_2(VAR_15->usb);
 }

 VAR_15->ac = FUNC_10(&VAR_12->dev, &VAR_8,
     &VAR_13);
 if (FUNC_1(VAR_15->ac)) {
  FUNC_3(VAR_15->pcf->dev, "failed to register ac\n");
  FUNC_11(VAR_15->adapter);
  FUNC_11(VAR_15->usb);
  return FUNC_2(VAR_15->ac);
 }

 VAR_17 = FUNC_7(VAR_15->pcf, VAR_6);
 if (VAR_17 & VAR_5)
  FUNC_6(VAR_3, VAR_15);
 if (VAR_17 & VAR_4)
  FUNC_6(VAR_2, VAR_15);

 return 0;
}
