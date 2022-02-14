
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_msg {int len; int addr; int buf; } ;
struct friio_priv {TYPE_1__* i2c_client_demod; } ;
struct dvb_usb_device {int udev; } ;
struct TYPE_2__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct friio_priv* FUNC_0 (struct dvb_usb_device*) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int,int ) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (int ,int ,int ,int ,int,int,int*,int,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct dvb_usb_device *VAR_5, struct i2c_msg *VAR_6)
{
 u8 *VAR_7;
 int VAR_8;
 struct friio_priv *VAR_9;

 VAR_9 = FUNC_0(VAR_5);

 if (VAR_6->len < 1)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_6->len + 1, VAR_2);
 if (!VAR_7)
  return -VAR_1;
 VAR_7[0] = VAR_6->addr << 1;
 FUNC_3(VAR_7 + 1, VAR_6->buf, VAR_6->len);

 VAR_8 = FUNC_4(VAR_5->udev, FUNC_5(VAR_5->udev, 0),
     VAR_3, VAR_4,
     VAR_9->i2c_client_demod->addr << (8 + 1),
     0xFE, VAR_7, VAR_6->len + 1, 2000);
 FUNC_1(VAR_7);
 return VAR_8;
}
