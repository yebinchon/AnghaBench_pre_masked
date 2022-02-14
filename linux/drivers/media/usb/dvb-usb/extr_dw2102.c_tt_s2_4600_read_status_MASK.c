
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dw2102_state {int (* fe_read_status ) (struct dvb_frontend*,int*) ;int last_lock; } ;
struct dvb_usb_adapter {TYPE_2__* dev; } ;
struct dvb_frontend {TYPE_1__* dvb; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;
struct TYPE_4__ {scalar_t__ priv; } ;
struct TYPE_3__ {scalar_t__ priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_frontend*,int*) ;
 int FUNC_1 (struct dvb_usb_adapter*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1,
      enum fe_status *VAR_2)
{
 struct dvb_usb_adapter *VAR_3 =
  (struct dvb_usb_adapter *)(VAR_1->dvb->priv);
 struct dw2102_state *VAR_4 = (struct dw2102_state *)VAR_3->dev->priv;
 int VAR_5;

 VAR_5 = VAR_4->fe_read_status(VAR_1, VAR_2);


 if ((*VAR_2 & VAR_0) && (!VAR_4->last_lock))
  FUNC_1(VAR_3, 1);

 VAR_4->last_lock = (*VAR_2 & VAR_0) ? 1 : 0;
 return VAR_5;
}
