
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {int * parent; } ;
struct TYPE_5__ {int version; int product; scalar_t__ vendor; int bustype; } ;
struct rc_dev {char* map_name; int driver_name; int close; int open; struct cx23885_kernel_ir* priv; int allowed_protocols; TYPE_2__ dev; TYPE_1__ input_id; struct cx23885_kernel_ir* input_phys; struct cx23885_kernel_ir* device_name; } ;
struct cx23885_kernel_ir {struct cx23885_kernel_ir* name; struct cx23885_kernel_ir* phys; struct rc_dev* rc; struct cx23885_dev* cx; } ;
struct cx23885_dev {int board; struct cx23885_kernel_ir* kernel_ir; TYPE_3__* pci; int * sd_ir; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_7__ {int dev; int device; scalar_t__ vendor; int subsystem_device; scalar_t__ subsystem_vendor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 int VAR_13 ;
 TYPE_4__* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct cx23885_dev*) ;
 void* FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct cx23885_kernel_ir*) ;
 struct cx23885_kernel_ir* FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 struct rc_dev* FUNC_5 (int ) ;
 int FUNC_6 (struct rc_dev*) ;
 int FUNC_7 (struct rc_dev*) ;

int FUNC_8(struct cx23885_dev *VAR_17)
{
 struct cx23885_kernel_ir *VAR_18;
 struct rc_dev *VAR_19;
 char *VAR_20;
 u64 VAR_21;

 int VAR_22;





 if (VAR_17->sd_ir == ((void*)0))
  return -VAR_1;

 switch (VAR_17->board) {
 case 136:
 case 134:
 case 135:
 case 138:
 case 137:

  VAR_21 = VAR_13;

  VAR_20 = VAR_7;
  break;
 case 130:

  VAR_21 = VAR_13;

  VAR_20 = VAR_8;
  break;
 case 129:

  VAR_21 = VAR_13;

  VAR_20 = VAR_10;
  break;
 case 133:

  VAR_21 = VAR_13;

  VAR_20 = VAR_11;
  break;
 case 132:
 case 131:

  VAR_21 = VAR_13;

  VAR_20 = VAR_9;
  break;
 case 141:
 case 140:
 case 143:
 case 144:
 case 142:
 case 139:

  VAR_21 = VAR_13;
  VAR_20 = VAR_6;
  break;
 case 128:

  VAR_21 = VAR_13;
  VAR_20 = VAR_12;
  break;
 default:
  return -VAR_1;
 }


 VAR_18 = FUNC_3(sizeof(struct cx23885_kernel_ir), VAR_3);
 if (VAR_18 == ((void*)0))
  return -VAR_2;

 VAR_18->cx = VAR_17;
 VAR_18->name = FUNC_1(VAR_3, "cx23885 IR (%s)",
        VAR_14[VAR_17->board].name);
 if (!VAR_18->name) {
  VAR_22 = -VAR_2;
  goto err_out_free;
 }

 VAR_18->phys = FUNC_1(VAR_3, "pci-%s/ir0",
        FUNC_4(VAR_17->pci));
 if (!VAR_18->phys) {
  VAR_22 = -VAR_2;
  goto err_out_free_name;
 }


 VAR_19 = FUNC_5(VAR_5);
 if (!VAR_19) {
  VAR_22 = -VAR_2;
  goto err_out_free_phys;
 }

 VAR_18->rc = VAR_19;
 VAR_19->device_name = VAR_18->name;
 VAR_19->input_phys = VAR_18->phys;
 VAR_19->input_id.bustype = VAR_0;
 VAR_19->input_id.version = 1;
 if (VAR_17->pci->subsystem_vendor) {
  VAR_19->input_id.vendor = VAR_17->pci->subsystem_vendor;
  VAR_19->input_id.product = VAR_17->pci->subsystem_device;
 } else {
  VAR_19->input_id.vendor = VAR_17->pci->vendor;
  VAR_19->input_id.product = VAR_17->pci->device;
 }
 VAR_19->dev.parent = &VAR_17->pci->dev;
 VAR_19->allowed_protocols = VAR_21;
 VAR_19->priv = VAR_18;
 VAR_19->open = VAR_16;
 VAR_19->close = VAR_15;
 VAR_19->map_name = VAR_20;
 VAR_19->driver_name = VAR_4;


 VAR_17->kernel_ir = VAR_18;
 VAR_22 = FUNC_7(VAR_19);
 if (VAR_22)
  goto err_out_stop;

 return 0;

err_out_stop:
 FUNC_0(VAR_17);
 VAR_17->kernel_ir = ((void*)0);
 FUNC_6(VAR_19);
err_out_free_phys:
 FUNC_2(VAR_18->phys);
err_out_free_name:
 FUNC_2(VAR_18->name);
err_out_free:
 FUNC_2(VAR_18);
 return VAR_22;
}
