
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ngene {int icounts; int device_version; scalar_t__ fw_interface_version; TYPE_2__* channel; scalar_t__ iomem; int event_tasklet; TYPE_1__* pci_dev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int number; struct ngene* dev; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int) ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int ,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct ngene *VAR_5)
{
 struct device *VAR_6 = &VAR_5->pci_dev->dev;
 int VAR_7;

 FUNC_4(&VAR_5->event_tasklet, VAR_4, (unsigned long)VAR_5);

 FUNC_1(VAR_5->iomem + 0xc000, 0x00, 0x220);
 FUNC_1(VAR_5->iomem + 0xc400, 0x00, 0x100);

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_5->channel[VAR_7].dev = VAR_5;
  VAR_5->channel[VAR_7].number = VAR_7;
 }

 VAR_5->fw_interface_version = 0;

 FUNC_3(0, VAR_3);

 VAR_5->icounts = FUNC_2(VAR_2);

 VAR_5->device_version = FUNC_2(VAR_0) & 0x0f;
 FUNC_0(VAR_6, "Device version %d\n", VAR_5->device_version);
}
