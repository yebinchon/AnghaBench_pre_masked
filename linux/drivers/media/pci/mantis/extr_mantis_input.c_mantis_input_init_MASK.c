
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * parent; } ;
struct TYPE_6__ {int version; int product; int vendor; int bustype; } ;
struct rc_dev {TYPE_3__ dev; int map_name; int driver_name; TYPE_2__ input_id; int input_phys; int device_name; } ;
struct mantis_pci {struct rc_dev* rc; TYPE_4__* pdev; scalar_t__ rc_map_name; int device_id; int vendor_id; int input_phys; int device_name; TYPE_1__* hwconfig; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_5__ {char* model_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,char*,...) ;
 char* FUNC_1 (TYPE_4__*) ;
 struct rc_dev* FUNC_2 (int ) ;
 int FUNC_3 (struct rc_dev*) ;
 int FUNC_4 (struct rc_dev*) ;
 int FUNC_5 (int ,int,char*,char*) ;

int FUNC_6(struct mantis_pci *VAR_6)
{
 struct rc_dev *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_4);
 if (!VAR_7) {
  FUNC_0(VAR_2, 1, "Remote device allocation failed");
  VAR_8 = -VAR_1;
  goto out;
 }

 FUNC_5(VAR_6->device_name, sizeof(VAR_6->device_name),
   "Mantis %s IR receiver", VAR_6->hwconfig->model_name);
 FUNC_5(VAR_6->input_phys, sizeof(VAR_6->input_phys),
   "pci-%s/ir0", FUNC_1(VAR_6->pdev));

 VAR_7->device_name = VAR_6->device_name;
 VAR_7->input_phys = VAR_6->input_phys;
 VAR_7->input_id.bustype = VAR_0;
 VAR_7->input_id.vendor = VAR_6->vendor_id;
 VAR_7->input_id.product = VAR_6->device_id;
 VAR_7->input_id.version = 1;
 VAR_7->driver_name = VAR_3;
 VAR_7->map_name = VAR_6->rc_map_name ? : VAR_5;
 VAR_7->dev.parent = &VAR_6->pdev->dev;

 VAR_8 = FUNC_4(VAR_7);
 if (VAR_8) {
  FUNC_0(VAR_2, 1, "IR device registration failed, ret = %d", VAR_8);
  goto out_dev;
 }

 VAR_6->rc = VAR_7;
 return 0;

out_dev:
 FUNC_3(VAR_7);
out:
 return VAR_8;
}
