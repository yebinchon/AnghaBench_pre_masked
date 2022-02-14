
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * parent; } ;
struct TYPE_5__ {int version; int product; scalar_t__ vendor; int bustype; } ;
struct rc_dev {char* device_name; TYPE_2__ dev; TYPE_1__ input_id; int input_phys; int map_name; int driver_name; } ;
struct TYPE_7__ {struct rc_dev* dev; int work; int input_phys; } ;
struct dm1105_dev {TYPE_3__ ir; TYPE_4__* pdev; } ;
struct TYPE_8__ {int dev; int device; scalar_t__ vendor; int subsystem_device; scalar_t__ subsystem_vendor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_1 (TYPE_4__*) ;
 struct rc_dev* FUNC_2 (int ) ;
 int FUNC_3 (struct rc_dev*) ;
 int FUNC_4 (struct rc_dev*) ;
 int FUNC_5 (int ,int,char*,char*) ;

__attribute__((used)) static int FUNC_6(struct dm1105_dev *VAR_6)
{
 struct rc_dev *VAR_7;
 int VAR_8 = -VAR_1;

 VAR_7 = FUNC_2(VAR_3);
 if (!VAR_7)
  return -VAR_1;

 FUNC_5(VAR_6->ir.input_phys, sizeof(VAR_6->ir.input_phys),
  "pci-%s/ir0", FUNC_1(VAR_6->pdev));

 VAR_7->driver_name = VAR_2;
 VAR_7->map_name = VAR_4;
 VAR_7->device_name = "DVB on-card IR receiver";
 VAR_7->input_phys = VAR_6->ir.input_phys;
 VAR_7->input_id.bustype = VAR_0;
 VAR_7->input_id.version = 1;
 if (VAR_6->pdev->subsystem_vendor) {
  VAR_7->input_id.vendor = VAR_6->pdev->subsystem_vendor;
  VAR_7->input_id.product = VAR_6->pdev->subsystem_device;
 } else {
  VAR_7->input_id.vendor = VAR_6->pdev->vendor;
  VAR_7->input_id.product = VAR_6->pdev->device;
 }
 VAR_7->dev.parent = &VAR_6->pdev->dev;

 FUNC_0(&VAR_6->ir.work, VAR_5);

 VAR_8 = FUNC_4(VAR_7);
 if (VAR_8 < 0) {
  FUNC_3(VAR_7);
  return VAR_8;
 }

 VAR_6->ir.dev = VAR_7;
 return 0;
}
