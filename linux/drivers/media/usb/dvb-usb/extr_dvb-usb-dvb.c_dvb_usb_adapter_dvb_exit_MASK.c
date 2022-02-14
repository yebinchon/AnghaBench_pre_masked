
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* close ) (TYPE_1__*) ;} ;
struct TYPE_4__ {TYPE_1__ dmx; } ;
struct dvb_usb_adapter {int state; int dvb_adap; TYPE_2__ demux; int dmxdev; int dvb_net; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dvb_usb_adapter*) ;
 int FUNC_6 (TYPE_1__*) ;

int FUNC_7(struct dvb_usb_adapter *VAR_1)
{
 if (VAR_1->state & VAR_0) {
  FUNC_0("unregistering DVB part\n");
  FUNC_3(&VAR_1->dvb_net);
  VAR_1->demux.dmx.close(&VAR_1->demux.dmx);
  FUNC_2(&VAR_1->dmxdev);
  FUNC_1(&VAR_1->demux);
  FUNC_5(VAR_1);
  FUNC_4(&VAR_1->dvb_adap);
  VAR_1->state &= ~VAR_0;
 }
 return 0;
}
