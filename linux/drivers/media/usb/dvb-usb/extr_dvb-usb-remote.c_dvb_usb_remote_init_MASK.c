
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int rc_interval; scalar_t__ rc_query; scalar_t__ rc_map_table; } ;
struct TYPE_5__ {scalar_t__ rc_codes; } ;
struct TYPE_7__ {scalar_t__ mode; TYPE_2__ legacy; TYPE_1__ core; } ;
struct TYPE_8__ {TYPE_3__ rc; } ;
struct dvb_usb_device {int state; TYPE_4__ props; int rc_phys; int udev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct dvb_usb_device*) ;
 int FUNC_1 (struct dvb_usb_device*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ,int) ;

int FUNC_4(struct dvb_usb_device *VAR_4)
{
 int VAR_5;

 if (VAR_3)
  return 0;

 if (VAR_4->props.rc.legacy.rc_map_table && VAR_4->props.rc.legacy.rc_query)
  VAR_4->props.rc.mode = VAR_1;
 else if (VAR_4->props.rc.core.rc_codes)
  VAR_4->props.rc.mode = VAR_0;
 else
  return 0;

 FUNC_3(VAR_4->udev, VAR_4->rc_phys, sizeof(VAR_4->rc_phys));
 FUNC_2(VAR_4->rc_phys, "/ir0", sizeof(VAR_4->rc_phys));


 if (VAR_4->props.rc.legacy.rc_interval < 40)
  VAR_4->props.rc.legacy.rc_interval = 100;

 if (VAR_4->props.rc.mode == VAR_1)
  VAR_5 = FUNC_0(VAR_4);
 else
  VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_4->state |= VAR_2;

 return 0;
}
