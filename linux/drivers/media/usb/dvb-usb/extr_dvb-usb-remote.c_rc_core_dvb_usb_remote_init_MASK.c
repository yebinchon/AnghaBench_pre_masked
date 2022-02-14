
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * parent; } ;
struct rc_dev {int scancode_mask; struct dvb_usb_device* priv; TYPE_2__ dev; int input_phys; int device_name; int input_id; int allowed_protocols; int change_protocol; int map_name; int driver_name; } ;
struct TYPE_9__ {int rc_interval; scalar_t__ bulk_mode; int rc_query; int scancode_mask; int allowed_protos; int change_protocol; int rc_codes; int module_name; int driver_type; } ;
struct TYPE_10__ {TYPE_3__ core; } ;
struct TYPE_11__ {TYPE_4__ rc; } ;
struct dvb_usb_device {int rc_query_work; TYPE_5__ props; struct rc_dev* rc_dev; int * input_dev; TYPE_6__* udev; int rc_phys; TYPE_1__* desc; } ;
struct TYPE_12__ {int dev; } ;
struct TYPE_7__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 struct rc_dev* FUNC_3 (int ) ;
 int FUNC_4 (struct rc_dev*) ;
 int FUNC_5 (struct rc_dev*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_6__*,int *) ;

__attribute__((used)) static int FUNC_8(struct dvb_usb_device *VAR_2)
{
 int VAR_3, VAR_4;
 struct rc_dev *VAR_5;

 VAR_5 = FUNC_3(VAR_2->props.rc.core.driver_type);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->driver_name = VAR_2->props.rc.core.module_name;
 VAR_5->map_name = VAR_2->props.rc.core.rc_codes;
 VAR_5->change_protocol = VAR_2->props.rc.core.change_protocol;
 VAR_5->allowed_protocols = VAR_2->props.rc.core.allowed_protos;
 FUNC_7(VAR_2->udev, &VAR_5->input_id);
 VAR_5->device_name = VAR_2->desc->name;
 VAR_5->input_phys = VAR_2->rc_phys;
 VAR_5->dev.parent = &VAR_2->udev->dev;
 VAR_5->priv = VAR_2;
 VAR_5->scancode_mask = VAR_2->props.rc.core.scancode_mask;

 VAR_3 = FUNC_5(VAR_5);
 if (VAR_3 < 0) {
  FUNC_4(VAR_5);
  return VAR_3;
 }

 VAR_2->input_dev = ((void*)0);
 VAR_2->rc_dev = VAR_5;

 if (!VAR_2->props.rc.core.rc_query || VAR_2->props.rc.core.bulk_mode)
  return 0;


 FUNC_0(&VAR_2->rc_query_work, VAR_1);

 VAR_4 = VAR_2->props.rc.core.rc_interval;

 FUNC_1("schedule remote query interval to %d msecs.", VAR_4);
 FUNC_6(&VAR_2->rc_query_work,
         FUNC_2(VAR_4));

 return 0;
}
