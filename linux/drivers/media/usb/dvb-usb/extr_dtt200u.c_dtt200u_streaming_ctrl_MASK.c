
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_device {int data_mutex; struct dtt200u_state* priv; } ;
struct dvb_usb_adapter {struct dvb_usb_device* dev; } ;
struct dtt200u_state {int* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dvb_usb_device*,int*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_adapter *VAR_2, int VAR_3)
{
 struct dvb_usb_device *VAR_4 = VAR_2->dev;
 struct dtt200u_state *VAR_5 = VAR_4->priv;
 int VAR_6;

 FUNC_1(&VAR_4->data_mutex);
 VAR_5->data[0] = VAR_1;
 VAR_5->data[1] = VAR_3;

 VAR_6 = FUNC_0(VAR_2->dev, VAR_5->data, 2);
 if (VAR_6 < 0)
  goto ret;

 if (VAR_3)
  goto ret;

 VAR_5->data[0] = VAR_0;
 VAR_6 = FUNC_0(VAR_2->dev, VAR_5->data, 1);

ret:
 FUNC_2(&VAR_4->data_mutex);

 return VAR_6;
}
