
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct usb_req {int cmd; int* data; int data_len; int index; int value; } ;
struct dvb_usb_device {TYPE_1__* udev; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (TYPE_1__*,int,int,int ,int ,int*,int ) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int ,int ) ;
 int FUNC_4 (int*,int*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*,unsigned int,int,int,int ,int ,int*,int ,int ) ;
 unsigned int FUNC_7 (TYPE_1__*,int ) ;
 unsigned int FUNC_8 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_9(struct dvb_usb_device *VAR_8, struct usb_req *VAR_9)
{
 int VAR_10;
 unsigned int VAR_11;
 u8 VAR_12;
 u8 VAR_13;
 u16 VAR_14;
 u16 VAR_15;
 u8 *VAR_16;

 VAR_12 = VAR_9->cmd;
 VAR_14 = VAR_9->value;
 VAR_15 = VAR_9->index;

 switch (VAR_9->cmd) {
 case 131:
 case 133:
 case 129:
  VAR_13 = (VAR_7 | VAR_5);
  break;
 case 130:
 case 132:
 case 128:
  VAR_13 = (VAR_7 | VAR_6);
  break;
 default:
  FUNC_0(&VAR_8->udev->dev, "%s: unknown command=%02x\n",
    VAR_4, VAR_9->cmd);
  VAR_10 = -VAR_1;
  goto error;
 }

 VAR_16 = FUNC_3(VAR_9->data_len, VAR_3);
 if (!VAR_16) {
  VAR_10 = -VAR_2;
  goto error;
 }

 if (VAR_13 == (VAR_7 | VAR_6)) {

  FUNC_4(VAR_16, VAR_9->data, VAR_9->data_len);
  VAR_11 = FUNC_8(VAR_8->udev, 0);
 } else {

  VAR_11 = FUNC_7(VAR_8->udev, 0);
 }

 FUNC_5(1);

 VAR_10 = FUNC_6(VAR_8->udev, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15,
   VAR_16, VAR_9->data_len, VAR_0);

 FUNC_1(VAR_8->udev, VAR_12, VAR_13, VAR_14, VAR_15,
   VAR_16, VAR_9->data_len);

 if (VAR_10 < 0)
  FUNC_0(&VAR_8->udev->dev, "%s: usb_control_msg() failed=%d\n",
    VAR_4, VAR_10);
 else
  VAR_10 = 0;


 if (!VAR_10 && VAR_13 == (VAR_7 | VAR_5))
  FUNC_4(VAR_9->data, VAR_16, VAR_9->data_len);

 FUNC_2(VAR_16);
error:
 return VAR_10;
}
