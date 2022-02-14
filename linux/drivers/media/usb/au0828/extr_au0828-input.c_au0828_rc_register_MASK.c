
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_9__ {int * parent; } ;
struct TYPE_7__ {int version; void* product; void* vendor; int bustype; } ;
struct rc_dev {char* driver_name; int allowed_protocols; TYPE_4__ dev; TYPE_2__ input_id; int input_phys; int device_name; int map_name; int close; int open; struct au0828_rc* priv; } ;
struct au0828_rc {int polling; int name; int phys; scalar_t__ i2c_dev_addr; int get_key_i2c; struct rc_dev* rc; struct au0828_dev* dev; } ;
struct TYPE_6__ {char* name; scalar_t__ has_ir_i2c; } ;
struct au0828_dev {int boardnr; struct au0828_rc* ir; TYPE_5__* usbdev; TYPE_1__ board; } ;
struct TYPE_8__ {int idProduct; int idVendor; } ;
struct TYPE_10__ {int dev; TYPE_3__ descriptor; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct au0828_dev*) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (struct au0828_rc*) ;
 struct au0828_rc* FUNC_2 (int,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 struct rc_dev* FUNC_5 (int ) ;
 int FUNC_6 (struct rc_dev*) ;
 int FUNC_7 (struct rc_dev*) ;
 int FUNC_8 (int ,int,char*,char*) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (TYPE_5__*,int ,int) ;

int FUNC_11(struct au0828_dev *VAR_14)
{
 struct au0828_rc *VAR_15;
 struct rc_dev *VAR_16;
 int VAR_17 = -VAR_2;
 u16 VAR_18 = 0;

 if (!VAR_14->board.has_ir_i2c || VAR_13)
  return 0;

 VAR_18 = FUNC_0(VAR_14);
 if (!VAR_18)
  return -VAR_1;

 VAR_15 = FUNC_2(sizeof(*VAR_15), VAR_3);
 VAR_16 = FUNC_5(VAR_4);
 if (!VAR_15 || !VAR_16)
  goto error;


 VAR_15->dev = VAR_14;
 VAR_14->ir = VAR_15;
 VAR_15->rc = VAR_16;

 VAR_16->priv = VAR_15;
 VAR_16->open = VAR_11;
 VAR_16->close = VAR_12;

 if (VAR_14->board.has_ir_i2c) {
  switch (VAR_14->boardnr) {
  case 128:
   VAR_16->map_name = VAR_5;
   VAR_15->get_key_i2c = VAR_10;
   break;
  default:
   VAR_17 = -VAR_1;
   goto error;
  }

  VAR_15->i2c_dev_addr = VAR_18;
 }


 VAR_15->polling = 100;


 FUNC_8(VAR_15->name, sizeof(VAR_15->name), "au0828 IR (%s)",
   VAR_14->board.name);

 FUNC_10(VAR_14->usbdev, VAR_15->phys, sizeof(VAR_15->phys));
 FUNC_9(VAR_15->phys, "/input0", sizeof(VAR_15->phys));

 VAR_16->device_name = VAR_15->name;
 VAR_16->input_phys = VAR_15->phys;
 VAR_16->input_id.bustype = VAR_0;
 VAR_16->input_id.version = 1;
 VAR_16->input_id.vendor = FUNC_3(VAR_14->usbdev->descriptor.idVendor);
 VAR_16->input_id.product = FUNC_3(VAR_14->usbdev->descriptor.idProduct);
 VAR_16->dev.parent = &VAR_14->usbdev->dev;
 VAR_16->driver_name = "au0828-input";
 VAR_16->allowed_protocols = VAR_6 | VAR_8 |
    VAR_7 | VAR_9;


 VAR_17 = FUNC_7(VAR_16);
 if (VAR_17)
  goto error;

 FUNC_4("Remote controller %s initialized\n", VAR_15->name);

 return 0;

error:
 VAR_14->ir = ((void*)0);
 FUNC_6(VAR_16);
 FUNC_1(VAR_15);
 return VAR_17;
}
