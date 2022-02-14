
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct smi_rc {struct smi_dev* dev; struct rc_dev* rc_dev; int device_name; int input_phys; } ;
struct smi_dev {TYPE_3__* info; TYPE_4__* pci_dev; struct smi_rc ir; } ;
struct TYPE_6__ {int * parent; } ;
struct TYPE_5__ {int version; int product; int vendor; int bustype; } ;
struct rc_dev {char* driver_name; int rx_resolution; int timeout; int map_name; TYPE_2__ dev; TYPE_1__ input_id; int device_name; int input_phys; int allowed_protocols; } ;
struct TYPE_8__ {int dev; int subsystem_device; int subsystem_vendor; } ;
struct TYPE_7__ {char* name; int rc_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (TYPE_4__*) ;
 struct rc_dev* FUNC_3 (int ) ;
 int FUNC_4 (struct rc_dev*) ;
 int FUNC_5 (struct rc_dev*) ;
 int FUNC_6 (struct smi_rc*) ;
 int FUNC_7 (int ,int,char*,char*) ;

int FUNC_8(struct smi_dev *VAR_5)
{
 int VAR_6;
 struct rc_dev *VAR_7;
 struct smi_rc *VAR_8 = &VAR_5->ir;

 VAR_7 = FUNC_3(VAR_2);
 if (!VAR_7)
  return -VAR_1;


 FUNC_7(VAR_8->device_name, sizeof(VAR_8->device_name), "IR (%s)",
   VAR_5->info->name);
 FUNC_7(VAR_8->input_phys, sizeof(VAR_8->input_phys), "pci-%s/ir0",
   FUNC_2(VAR_5->pci_dev));

 VAR_7->allowed_protocols = VAR_3;
 VAR_7->driver_name = "SMI_PCIe";
 VAR_7->input_phys = VAR_8->input_phys;
 VAR_7->device_name = VAR_8->device_name;
 VAR_7->input_id.bustype = VAR_0;
 VAR_7->input_id.version = 1;
 VAR_7->input_id.vendor = VAR_5->pci_dev->subsystem_vendor;
 VAR_7->input_id.product = VAR_5->pci_dev->subsystem_device;
 VAR_7->dev.parent = &VAR_5->pci_dev->dev;

 VAR_7->map_name = VAR_5->info->rc_map;
 VAR_7->timeout = FUNC_0(100);
 VAR_7->rx_resolution = FUNC_1(VAR_4);

 VAR_8->rc_dev = VAR_7;
 VAR_8->dev = VAR_5;

 FUNC_6(VAR_8);

 VAR_6 = FUNC_5(VAR_7);
 if (VAR_6)
  goto ir_err;

 return 0;
ir_err:
 FUNC_4(VAR_7);
 return VAR_6;
}
