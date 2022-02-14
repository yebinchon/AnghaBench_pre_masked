
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* frontend_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_usb_adapter {int active_fe; TYPE_2__ props; } ;
struct dvb_frontend {int id; TYPE_1__* dvb; } ;
struct TYPE_3__ {struct dvb_usb_adapter* priv; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0, int VAR_1)
{
 struct dvb_usb_adapter *VAR_2 = VAR_0->dvb->priv;

 int VAR_3 = (VAR_2->props.frontend_ctrl) ?
  VAR_2->props.frontend_ctrl(VAR_0, VAR_1) : 0;

 if (VAR_3 < 0) {
  FUNC_0("frontend_ctrl request failed");
  return VAR_3;
 }
 if (VAR_1)
  VAR_2->active_fe = VAR_0->id;

 return 0;
}
