
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
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int *,int,int *,...) ;
 scalar_t__ FUNC_1 (struct dvb_usb_device*,int*,int,int*,int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(struct dvb_usb_adapter *VAR_5)
{
 struct dvb_usb_device *VAR_6 = VAR_5->dev;
 struct dw2102_state *VAR_7 = VAR_6->priv;

 FUNC_5(&VAR_6->data_mutex);

 VAR_7->data[0] = 0xe;
 VAR_7->data[1] = 0x87;
 VAR_7->data[2] = 0x0;

 if (FUNC_1(VAR_6, VAR_7->data, 3, VAR_7->data, 1, 0) < 0)
  FUNC_2("command 0x0e transfer failed.");

 VAR_7->data[0] = 0xe;
 VAR_7->data[1] = 0x86;
 VAR_7->data[2] = 1;

 if (FUNC_1(VAR_6, VAR_7->data, 3, VAR_7->data, 1, 0) < 0)
  FUNC_2("command 0x0e transfer failed.");

 VAR_7->data[0] = 0xe;
 VAR_7->data[1] = 0x80;
 VAR_7->data[2] = 0;

 if (FUNC_1(VAR_6, VAR_7->data, 3, VAR_7->data, 1, 0) < 0)
  FUNC_2("command 0x0e transfer failed.");

 FUNC_4(50);

 VAR_7->data[0] = 0xe;
 VAR_7->data[1] = 0x80;
 VAR_7->data[2] = 1;

 if (FUNC_1(VAR_6, VAR_7->data, 3, VAR_7->data, 1, 0) < 0)
  FUNC_2("command 0x0e transfer failed.");

 VAR_7->data[0] = 0x51;

 if (FUNC_1(VAR_6, VAR_7->data, 1, VAR_7->data, 1, 0) < 0)
  FUNC_2("command 0x51 transfer failed.");

 FUNC_6(&VAR_6->data_mutex);

 VAR_5->fe_adap[0].fe = FUNC_0(VAR_1, &VAR_2,
     VAR_6->i2c_adap, ((void*)0));
 if (VAR_5->fe_adap[0].fe != ((void*)0)) {
  if (FUNC_0(VAR_3, VAR_5->fe_adap[0].fe, 0x60,
     &VAR_6->i2c_adap, &VAR_4)) {
   FUNC_3("Attached TDA18271HD/CXD2820R!");
   return 0;
  }
 }

 FUNC_3("Failed to attach TDA18271HD/CXD2820R!");
 return -VAR_0;
}
