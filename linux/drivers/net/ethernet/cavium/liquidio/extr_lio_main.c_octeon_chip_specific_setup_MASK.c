
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int max_vfs; } ;
struct octeon_device {int rev_id; TYPE_2__* pci_dev; TYPE_1__ sriov_info; int chip_id; } ;
struct TYPE_7__ {int card_name; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;

 int FUNC_0 (struct octeon_device*) ;
 int FUNC_1 (struct octeon_device*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,char*,int ,int ,int ,int ) ;
 int FUNC_4 (struct octeon_device*) ;
 int FUNC_5 (struct octeon_device*) ;
 TYPE_4__* FUNC_6 (struct octeon_device*) ;
 int FUNC_7 (TYPE_2__*,int,int*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (struct octeon_device*) ;

__attribute__((used)) static int FUNC_10(struct octeon_device *VAR_4)
{
 u32 VAR_5, VAR_6;
 int VAR_7 = 1;
 char *VAR_8;

 FUNC_7(VAR_4->pci_dev, 0, &VAR_5);
 FUNC_7(VAR_4->pci_dev, 8, &VAR_6);
 VAR_4->rev_id = VAR_6 & 0xff;

 switch (VAR_5) {
 case 128:
  VAR_4->chip_id = VAR_3;
  VAR_7 = FUNC_5(VAR_4);
  VAR_8 = "CN68XX";
  break;

 case 129:
  VAR_4->chip_id = VAR_2;
  VAR_7 = FUNC_4(VAR_4);
  VAR_8 = "CN66XX";
  break;

 case 130:
  VAR_4->chip_id = VAR_1;
  VAR_7 = FUNC_9(VAR_4);
  if (VAR_7)
   break;





  VAR_8 = "CN23XX";
  break;

 default:
  VAR_8 = "?";
  FUNC_2(&VAR_4->pci_dev->dev, "Unknown device found (dev_id: %x)\n",
   VAR_5);
 }

 if (!VAR_7)
  FUNC_3(&VAR_4->pci_dev->dev, "%s PASS%d.%d %s Version: %s\n", VAR_8,
    FUNC_0(VAR_4),
    FUNC_1(VAR_4),
    FUNC_6(VAR_4)->card_name,
    VAR_0);

 return VAR_7;
}
