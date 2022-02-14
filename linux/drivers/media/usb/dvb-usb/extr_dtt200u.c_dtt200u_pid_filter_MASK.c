
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dvb_usb_device {int data_mutex; struct dtt200u_state* priv; } ;
struct dvb_usb_adapter {struct dvb_usb_device* dev; } ;
struct dtt200u_state {int* data; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_usb_device*,int*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_adapter *VAR_1, int VAR_2, u16 VAR_3, int VAR_4)
{
 struct dvb_usb_device *VAR_5 = VAR_1->dev;
 struct dtt200u_state *VAR_6 = VAR_5->priv;
 int VAR_7;

 VAR_3 = VAR_4 ? VAR_3 : 0;

 FUNC_1(&VAR_5->data_mutex);
 VAR_6->data[0] = VAR_0;
 VAR_6->data[1] = VAR_2;
 VAR_6->data[2] = VAR_3 & 0xff;
 VAR_6->data[3] = (VAR_3 >> 8) & 0x1f;

 VAR_7 = FUNC_0(VAR_1->dev, VAR_6->data, 4);
 FUNC_2(&VAR_5->data_mutex);

 return VAR_7;
}
