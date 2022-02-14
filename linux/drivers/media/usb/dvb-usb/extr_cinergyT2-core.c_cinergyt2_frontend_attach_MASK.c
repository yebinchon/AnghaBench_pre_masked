
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_usb_device {int data_mutex; struct cinergyt2_state* priv; } ;
struct dvb_usb_adapter {struct dvb_usb_device* dev; TYPE_1__* fe_adap; } ;
struct cinergyt2_state {int * data; } ;
struct TYPE_2__ {int fe; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_usb_device*) ;
 struct dvb_usb_device* VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct dvb_usb_device*,int *,int,int *,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_adapter *VAR_2)
{
 struct dvb_usb_device *VAR_3 = VAR_2->dev;
 struct cinergyt2_state *VAR_4 = VAR_3->priv;
 int VAR_5;

 VAR_2->fe_adap[0].fe = FUNC_0(VAR_2->dev);

 FUNC_3(&VAR_3->data_mutex);
 VAR_4->data[0] = VAR_0;

 VAR_5 = FUNC_2(VAR_3, VAR_4->data, 1, VAR_4->data, 3, 0);
 if (VAR_5 < 0) {
  FUNC_1("cinergyt2_power_ctrl() Failed to retrieve sleep state info\n");
 }
 FUNC_4(&VAR_3->data_mutex);


 VAR_1 = VAR_2->dev;

 return VAR_5;
}
