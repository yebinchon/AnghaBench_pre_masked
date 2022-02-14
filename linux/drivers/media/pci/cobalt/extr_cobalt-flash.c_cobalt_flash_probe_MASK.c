
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * parent; } ;
struct mtd_info {TYPE_1__ dev; int owner; } ;
struct map_info {int copy_to; int copy_from; int write; int read; int virt; int bankwidth; } ;
struct cobalt {TYPE_2__* pci_dev; struct mtd_info* mtd; int bar1; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 struct map_info VAR_1 ;
 struct mtd_info* FUNC_2 (char*,struct map_info*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mtd_info*,int *,int ) ;

int FUNC_5(struct cobalt *VAR_6)
{
 struct map_info *VAR_7 = &VAR_1;
 struct mtd_info *VAR_8;

 FUNC_0(!FUNC_3(VAR_7->bankwidth));
 VAR_7->virt = VAR_6->bar1;
 VAR_7->read = VAR_4;
 VAR_7->write = VAR_5;
 VAR_7->copy_from = VAR_2;
 VAR_7->copy_to = VAR_3;

 VAR_8 = FUNC_2("cfi_probe", VAR_7);
 VAR_6->mtd = VAR_8;
 if (!VAR_8) {
  FUNC_1("Probe CFI flash failed!\n");
  return -1;
 }

 VAR_8->owner = VAR_0;
 VAR_8->dev.parent = &VAR_6->pci_dev->dev;
 FUNC_4(VAR_8, ((void*)0), 0);
 return 0;
}
