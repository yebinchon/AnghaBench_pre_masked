
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_usb_device {struct dib0700_state* priv; } ;
struct dvb_usb_adapter {scalar_t__ id; struct dvb_usb_device* dev; } ;
struct dvb_frontend {TYPE_1__* dvb; } ;
struct dib0700_state {int (* sleep ) (struct dvb_frontend*) ;} ;
struct TYPE_2__ {struct dvb_usb_adapter* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dvb_usb_device*,int ,int ,int ) ;
 int FUNC_1 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_3)
{
 struct dvb_usb_adapter *VAR_4 = VAR_3->dvb->priv;
 struct dvb_usb_device *VAR_5 = VAR_4->dev;
 struct dib0700_state *VAR_6 = VAR_5->priv;


 FUNC_0(VAR_5, VAR_4->id == 0 ? VAR_1 : VAR_0, VAR_2, 0);

 return VAR_6->sleep(VAR_3);
}
