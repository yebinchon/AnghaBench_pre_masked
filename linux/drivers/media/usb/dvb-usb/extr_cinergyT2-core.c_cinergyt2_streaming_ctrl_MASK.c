
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_device {int data_mutex; struct cinergyt2_state* priv; } ;
struct dvb_usb_adapter {struct dvb_usb_device* dev; } ;
struct cinergyt2_state {int* data; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_usb_device*,int*,int,int*,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_adapter *VAR_1, int VAR_2)
{
 struct dvb_usb_device *VAR_3 = VAR_1->dev;
 struct cinergyt2_state *VAR_4 = VAR_3->priv;
 int VAR_5;

 FUNC_1(&VAR_3->data_mutex);
 VAR_4->data[0] = VAR_0;
 VAR_4->data[1] = VAR_2 ? 1 : 0;

 VAR_5 = FUNC_0(VAR_3, VAR_4->data, 2, VAR_4->data, 64, 0);
 FUNC_2(&VAR_3->data_mutex);

 return VAR_5;
}
