
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * parent; } ;
struct TYPE_6__ {int version; int product; scalar_t__ vendor; int bustype; } ;
struct rc_dev {int allowed_protocols; struct av7110* priv; int map_name; int change_protocol; TYPE_3__ dev; TYPE_2__ input_id; int input_phys; int driver_name; int device_name; } ;
struct pci_dev {int dev; int device; scalar_t__ vendor; int subsystem_device; scalar_t__ subsystem_vendor; } ;
struct TYPE_8__ {struct rc_dev* rcdev; int ir_config; int input_phys; } ;
struct av7110 {TYPE_4__ ir; int card_name; TYPE_1__* dev; } ;
struct TYPE_5__ {struct pci_dev* pci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct av7110*) ;
 int VAR_8 ;
 char* FUNC_1 (struct pci_dev*) ;
 struct rc_dev* FUNC_2 (int ) ;
 int FUNC_3 (struct rc_dev*) ;
 int FUNC_4 (struct rc_dev*) ;
 int FUNC_5 (int ,int,char*,char*) ;

int FUNC_6(struct av7110 *VAR_9)
{
 struct rc_dev *VAR_10;
 struct pci_dev *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_2(VAR_4);
 if (!VAR_10)
  return -VAR_1;

 VAR_11 = VAR_9->dev->pci;

 FUNC_5(VAR_9->ir.input_phys, sizeof(VAR_9->ir.input_phys),
   "pci-%s/ir0", FUNC_1(VAR_11));

 VAR_10->device_name = VAR_9->card_name;
 VAR_10->driver_name = VAR_3;
 VAR_10->input_phys = VAR_9->ir.input_phys;
 VAR_10->input_id.bustype = VAR_0;
 VAR_10->input_id.version = 2;
 if (VAR_11->subsystem_vendor) {
  VAR_10->input_id.vendor = VAR_11->subsystem_vendor;
  VAR_10->input_id.product = VAR_11->subsystem_device;
 } else {
  VAR_10->input_id.vendor = VAR_11->vendor;
  VAR_10->input_id.product = VAR_11->device;
 }

 VAR_10->dev.parent = &VAR_11->dev;
 VAR_10->allowed_protocols = VAR_6 | VAR_7;
 VAR_10->change_protocol = VAR_8;
 VAR_10->map_name = VAR_5;
 VAR_10->priv = VAR_9;

 VAR_9->ir.rcdev = VAR_10;
 VAR_9->ir.ir_config = VAR_2;
 FUNC_0(VAR_9);

 VAR_12 = FUNC_4(VAR_10);
 if (VAR_12) {
  VAR_9->ir.rcdev = ((void*)0);
  FUNC_3(VAR_10);
 }

 return VAR_12;
}
