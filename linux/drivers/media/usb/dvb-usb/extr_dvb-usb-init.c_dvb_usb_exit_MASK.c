
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* priv_destroy ) (struct dvb_usb_device*) ;} ;
struct dvb_usb_device {struct dvb_usb_device* priv; TYPE_1__ props; int state; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct dvb_usb_device*) ;
 int FUNC_2 (struct dvb_usb_device*) ;
 int FUNC_3 (struct dvb_usb_device*) ;
 int FUNC_4 (struct dvb_usb_device*) ;
 int FUNC_5 (struct dvb_usb_device*) ;

__attribute__((used)) static int FUNC_6(struct dvb_usb_device *VAR_1)
{
 FUNC_0("state before exiting everything: %x\n", VAR_1->state);
 FUNC_3(VAR_1);
 FUNC_1(VAR_1);
 FUNC_2(VAR_1);
 FUNC_0("state should be zero now: %x\n", VAR_1->state);
 VAR_1->state = VAR_0;

 if (VAR_1->priv != ((void*)0) && VAR_1->props.priv_destroy != ((void*)0))
  VAR_1->props.priv_destroy(VAR_1);

 FUNC_4(VAR_1->priv);
 FUNC_4(VAR_1);
 return 0;
}
