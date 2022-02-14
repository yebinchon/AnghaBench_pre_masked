
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {TYPE_2__* cur_altsetting; } ;
struct tty_struct {struct hso_serial* driver_data; } ;
struct hso_serial {int rts_state; int dtr_state; TYPE_3__* parent; int serial_lock; } ;
struct TYPE_6__ {int port_spec; int usb; struct usb_interface* interface; } ;
struct TYPE_4__ {int bInterfaceNumber; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int ,int,int,int,int,int *,int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct tty_struct *VAR_6,
          unsigned int VAR_7, unsigned int VAR_8)
{
 int VAR_9 = 0;
 unsigned long VAR_10;
 int VAR_11;
 struct hso_serial *VAR_12 = VAR_6->driver_data;
 struct usb_interface *VAR_13;


 if (!VAR_12) {
  FUNC_0(0x1, "no tty structures\n");
  return -VAR_0;
 }

 if ((VAR_12->parent->port_spec & VAR_1) != VAR_2)
  return -VAR_0;

 VAR_13 = VAR_12->parent->interface;
 VAR_11 = VAR_13->cur_altsetting->desc.bInterfaceNumber;

 FUNC_1(&VAR_12->serial_lock, VAR_10);
 if (VAR_7 & VAR_4)
  VAR_12->rts_state = 1;
 if (VAR_7 & VAR_3)
  VAR_12->dtr_state = 1;

 if (VAR_8 & VAR_4)
  VAR_12->rts_state = 0;
 if (VAR_8 & VAR_3)
  VAR_12->dtr_state = 0;

 if (VAR_12->dtr_state)
  VAR_9 |= 0x01;
 if (VAR_12->rts_state)
  VAR_9 |= 0x02;

 FUNC_2(&VAR_12->serial_lock, VAR_10);

 return FUNC_3(VAR_12->parent->usb,
          FUNC_4(VAR_12->parent->usb, 0), 0x22,
          0x21, VAR_9, VAR_11, ((void*)0), 0,
          VAR_5);
}
