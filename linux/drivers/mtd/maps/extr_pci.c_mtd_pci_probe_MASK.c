
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int dummy; } ;
struct mtd_pci_info {int (* init ) (struct pci_dev*,struct map_pci_info*) ;int map_name; int translate; int (* exit ) (struct pci_dev*,struct map_pci_info*) ;} ;
struct mtd_info {int owner; } ;
struct TYPE_3__ {int name; } ;
struct map_pci_info {int (* exit ) (struct pci_dev*,struct map_pci_info*) ;TYPE_1__ map; int translate; struct pci_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mtd_info* FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (struct map_pci_info*) ;
 struct map_pci_info* FUNC_2 (int,int ) ;
 int FUNC_3 (struct mtd_info*,int *,int ) ;
 TYPE_1__ VAR_4 ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,char*) ;
 int FUNC_8 (struct pci_dev*,struct mtd_info*) ;
 int FUNC_9 (struct pci_dev*,struct map_pci_info*) ;
 int FUNC_10 (struct pci_dev*,struct map_pci_info*) ;

__attribute__((used)) static int FUNC_11(struct pci_dev *VAR_5, const struct pci_device_id *VAR_6)
{
 struct mtd_pci_info *VAR_7 = (struct mtd_pci_info *)VAR_6->driver_data;
 struct map_pci_info *VAR_8 = ((void*)0);
 struct mtd_info *VAR_9 = ((void*)0);
 int VAR_10;

 VAR_10 = FUNC_4(VAR_5);
 if (VAR_10)
  goto out;

 VAR_10 = FUNC_7(VAR_5, "pci mtd");
 if (VAR_10)
  goto out;

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_2);
 VAR_10 = -VAR_1;
 if (!VAR_8)
  goto release;

 VAR_8->map = VAR_4;
 VAR_8->map.name = FUNC_5(VAR_5);
 VAR_8->dev = VAR_5;
 VAR_8->exit = VAR_7->exit;
 VAR_8->translate = VAR_7->translate;

 VAR_10 = VAR_7->init(VAR_5, VAR_8);
 if (VAR_10)
  goto release;

 VAR_9 = FUNC_0(VAR_7->map_name, &VAR_8->map);
 VAR_10 = -VAR_0;
 if (!VAR_9)
  goto release;

 VAR_9->owner = VAR_3;
 FUNC_3(VAR_9, ((void*)0), 0);

 FUNC_8(VAR_5, VAR_9);

 return 0;

release:
 if (VAR_8) {
  VAR_8->exit(VAR_5, VAR_8);
  FUNC_1(VAR_8);
 }

 FUNC_6(VAR_5);
out:
 return VAR_10;
}
