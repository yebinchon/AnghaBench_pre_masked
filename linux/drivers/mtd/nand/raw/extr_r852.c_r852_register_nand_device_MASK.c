
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct r852_device {int card_registered; scalar_t__ card_detected; TYPE_2__* chip; int sm; scalar_t__ readonly; TYPE_1__* pci_dev; } ;
struct TYPE_7__ {int * parent; } ;
struct mtd_info {TYPE_4__ dev; } ;
struct TYPE_6__ {int options; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*) ;
 struct mtd_info* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct r852_device*) ;
 scalar_t__ FUNC_6 (struct mtd_info*,int ) ;

__attribute__((used)) static int FUNC_7(struct r852_device *VAR_2)
{
 struct mtd_info *VAR_3 = FUNC_4(VAR_2->chip);

 FUNC_0(VAR_2->card_registered);

 VAR_3->dev.parent = &VAR_2->pci_dev->dev;

 if (VAR_2->readonly)
  VAR_2->chip->options |= VAR_0;

 FUNC_5(VAR_2);

 if (FUNC_6(VAR_3, VAR_2->sm))
  goto error1;

 if (FUNC_1(&VAR_3->dev, &VAR_1)) {
  FUNC_2("can't create media type sysfs attribute");
  goto error3;
 }

 VAR_2->card_registered = 1;
 return 0;
error3:
 FUNC_3(VAR_2->chip);
error1:

 VAR_2->card_detected = 0;
 return -1;
}
