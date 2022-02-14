
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* devices; } ;
struct dvb_usb_device {struct cxusb_medion_dev* priv; TYPE_2__ props; } ;
struct cxusb_medion_dev {scalar_t__ open_type; int open_lock; } ;
struct TYPE_3__ {int ** warm_ids; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct dvb_usb_device*,int) ;
 int * VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_device *VAR_4, int VAR_5)
{
 bool VAR_6 = VAR_4->props.devices[0].warm_ids[0] == &VAR_3[VAR_2];
 int VAR_7;

 if (VAR_6 && !VAR_5) {
  struct cxusb_medion_dev *VAR_8 = VAR_4->priv;

  FUNC_2(&VAR_8->open_lock);

  if (VAR_8->open_type == VAR_0) {
   FUNC_1("preventing DVB core from setting power OFF while we are in analog mode\n");
   VAR_7 = -VAR_1;
   goto ret_unlock;
  }
 }

 VAR_7 = FUNC_0(VAR_4, VAR_5);

ret_unlock:
 if (VAR_6 && !VAR_5) {
  struct cxusb_medion_dev *VAR_9 = VAR_4->priv;

  FUNC_3(&VAR_9->open_lock);
 }

 return VAR_7;
}
