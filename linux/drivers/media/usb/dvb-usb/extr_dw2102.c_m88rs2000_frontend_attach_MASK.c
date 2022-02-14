
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dw2102_state {int* data; } ;
struct dvb_usb_device {int i2c_adap; int data_mutex; struct dw2102_state* priv; } ;
struct dvb_usb_adapter {TYPE_1__* fe_adap; struct dvb_usb_device* dev; } ;
struct TYPE_2__ {int * fe; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int *,int *,...) ;
 scalar_t__ FUNC_1 (struct dvb_usb_device*,int*,int,int*,int,int ) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(struct dvb_usb_adapter *VAR_5)
{
 struct dvb_usb_device *VAR_6 = VAR_5->dev;
 struct dw2102_state *VAR_7 = VAR_6->priv;

 FUNC_4(&VAR_6->data_mutex);

 VAR_7->data[0] = 0x51;

 if (FUNC_1(VAR_6, VAR_7->data, 1, VAR_7->data, 1, 0) < 0)
  FUNC_2("command 0x51 transfer failed.");

 FUNC_5(&VAR_6->data_mutex);

 VAR_5->fe_adap[0].fe = FUNC_0(VAR_2,
     &VAR_3,
     &VAR_6->i2c_adap);

 if (VAR_5->fe_adap[0].fe == ((void*)0))
  return -VAR_0;

 if (FUNC_0(VAR_4, VAR_5->fe_adap[0].fe,
    &VAR_1,
    &VAR_6->i2c_adap)) {
  FUNC_3("Attached RS2000/TS2020!");
  return 0;
 }

 FUNC_3("Failed to attach RS2000/TS2020!");
 return -VAR_0;
}
