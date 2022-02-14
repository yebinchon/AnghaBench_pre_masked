
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ssb_mipscore {TYPE_2__* dev; } ;
struct TYPE_3__ {int coreid; } ;
struct ssb_device {int irq; TYPE_1__ id; } ;
struct ssb_bus {unsigned int nr_devices; int chip_id; struct ssb_device* devices; int chipco; int extif; } ;
struct TYPE_4__ {int dev; struct ssb_bus* bus; } ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ssb_bus*) ;
 int FUNC_2 (struct ssb_device*,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 unsigned long FUNC_5 (struct ssb_bus*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct ssb_mipscore*) ;
 int FUNC_9 (struct ssb_device*) ;
 int FUNC_10 (struct ssb_mipscore*) ;

void FUNC_11(struct ssb_mipscore *VAR_0)
{
 struct ssb_bus *VAR_1;
 struct ssb_device *VAR_2;
 unsigned long VAR_3, VAR_4;
 unsigned int VAR_5, VAR_6;

 if (!VAR_0->dev)
  return;

 FUNC_0(VAR_0->dev->dev, "Initializing MIPS core...\n");

 VAR_1 = VAR_0->dev->bus;
 VAR_3 = FUNC_5(VAR_1);
 if (!VAR_3)
  VAR_3 = 100000000;
 VAR_4 = 1000000000 / VAR_3;

 if (FUNC_6(&VAR_1->extif))
  FUNC_7(&VAR_1->extif, VAR_4);
 else if (FUNC_3(&VAR_1->chipco))
  FUNC_4(&VAR_1->chipco, VAR_4);


 for (VAR_5 = 2, VAR_6 = 0; VAR_6 < VAR_1->nr_devices; VAR_6++) {
  int VAR_7;
  VAR_2 = &(VAR_1->devices[VAR_6]);
  VAR_7 = FUNC_9(VAR_2);
  if (VAR_7 > 4)
   VAR_2->irq = 0;
  else
   VAR_2->irq = VAR_7 + 2;
  if (VAR_2->irq > 5)
   continue;
  switch (VAR_2->id.coreid) {
  case 129:


   if ((VAR_1->chip_id == 0x4710) && (VAR_5 <= 4)) {
    FUNC_2(VAR_2, VAR_5++);
   }
   break;
  case 130:
  case 133:
  case 132:
  case 134:
  case 128:

   if (VAR_5 <= 4) {
    FUNC_2(VAR_2, VAR_5++);
    break;
   }

  case 131:
   FUNC_2(VAR_2, 0);
   break;
  }
 }
 FUNC_0(VAR_0->dev->dev, "after irq reconfiguration\n");
 FUNC_1(VAR_1);

 FUNC_10(VAR_0);
 FUNC_8(VAR_0);
}
