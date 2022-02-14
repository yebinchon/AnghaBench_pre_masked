
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_usb_device {struct dib0700_state* priv; } ;
struct dvb_usb_adapter {scalar_t__ id; struct dvb_usb_device* dev; } ;
struct dvb_frontend {TYPE_1__* dvb; } ;
struct dib0700_state {int (* read_status ) (struct dvb_frontend*,int*) ;} ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;
struct TYPE_2__ {struct dvb_usb_adapter* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dvb_usb_device*,int ,int ,int) ;
 int FUNC_1 (struct dvb_frontend*,int*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_4,
           enum fe_status *VAR_5)
{
 struct dvb_usb_adapter *VAR_6 = VAR_4->dvb->priv;
 struct dvb_usb_device *VAR_7 = VAR_6->dev;
 struct dib0700_state *VAR_8 = VAR_7->priv;
 int VAR_9;

 VAR_9 = VAR_8->read_status(VAR_4, VAR_5);

 if (!VAR_9)
  FUNC_0(VAR_7, VAR_6->id == 0 ? VAR_2 : VAR_1, VAR_3,
    !!(*VAR_5 & VAR_0));

 return VAR_9;
}
