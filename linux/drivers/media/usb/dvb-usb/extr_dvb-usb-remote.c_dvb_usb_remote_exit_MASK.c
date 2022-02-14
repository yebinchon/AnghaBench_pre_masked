
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mode; } ;
struct TYPE_4__ {TYPE_1__ rc; } ;
struct dvb_usb_device {int state; int rc_dev; int input_dev; TYPE_2__ props; int rc_query_work; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct dvb_usb_device *VAR_2)
{
 if (VAR_2->state & VAR_1) {
  FUNC_0(&VAR_2->rc_query_work);
  if (VAR_2->props.rc.mode == VAR_0)
   FUNC_1(VAR_2->input_dev);
  else
   FUNC_2(VAR_2->rc_dev);
 }
 VAR_2->state &= ~VAR_1;
 return 0;
}
