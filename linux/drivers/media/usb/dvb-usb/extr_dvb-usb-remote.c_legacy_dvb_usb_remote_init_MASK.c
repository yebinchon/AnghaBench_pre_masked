
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


struct TYPE_7__ {int * parent; } ;
struct input_dev {char* name; int* rep; int keybit; int setkeycode; int getkeycode; TYPE_1__ dev; int id; int phys; int * evbit; } ;
struct TYPE_9__ {int rc_map_size; int rc_interval; TYPE_2__* rc_map_table; } ;
struct TYPE_10__ {TYPE_3__ legacy; } ;
struct TYPE_11__ {TYPE_4__ rc; } ;
struct dvb_usb_device {int state; int rc_query_work; TYPE_5__ props; int * rc_dev; struct input_dev* input_dev; TYPE_6__* udev; int rc_phys; } ;
struct TYPE_12__ {int dev; } ;
struct TYPE_8__ {int keycode; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (char*,int) ;
 struct input_dev* FUNC_4 () ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (struct input_dev*,struct dvb_usb_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (TYPE_6__*,int *) ;

__attribute__((used)) static int FUNC_12(struct dvb_usb_device *VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 struct input_dev *VAR_12;

 VAR_12 = FUNC_4();
 if (!VAR_12)
  return -VAR_1;

 VAR_12->evbit[0] = FUNC_0(VAR_2);
 VAR_12->name = "IR-receiver inside an USB DVB receiver";
 VAR_12->phys = VAR_8->rc_phys;
 FUNC_11(VAR_8->udev, &VAR_12->id);
 VAR_12->dev.parent = &VAR_8->udev->dev;
 VAR_8->input_dev = VAR_12;
 VAR_8->rc_dev = ((void*)0);

 VAR_12->getkeycode = VAR_5;
 VAR_12->setkeycode = VAR_7;


 FUNC_2("key map size: %d\n", VAR_8->props.rc.legacy.rc_map_size);
 for (VAR_9 = 0; VAR_9 < VAR_8->props.rc.legacy.rc_map_size; VAR_9++) {
  FUNC_2("setting bit for event %d item %d\n",
   VAR_8->props.rc.legacy.rc_map_table[VAR_9].keycode, VAR_9);
  FUNC_10(VAR_8->props.rc.legacy.rc_map_table[VAR_9].keycode, VAR_12->keybit);
 }


 VAR_12->rep[VAR_4] = VAR_8->props.rc.legacy.rc_interval;
 VAR_12->rep[VAR_3] = VAR_8->props.rc.legacy.rc_interval + 150;

 FUNC_7(VAR_12, VAR_8);

 VAR_10 = FUNC_6(VAR_12);
 if (VAR_10)
  FUNC_5(VAR_12);

 VAR_11 = VAR_8->props.rc.legacy.rc_interval;

 FUNC_1(&VAR_8->rc_query_work, VAR_6);

 FUNC_3("schedule remote query interval to %d msecs.", VAR_11);
 FUNC_9(&VAR_8->rc_query_work,
         FUNC_8(VAR_11));

 VAR_8->state |= VAR_0;

 return VAR_10;
}
