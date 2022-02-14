
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_interface {int dev; } ;
struct req_t {int cmd; int i2c_addr; int addr; int mbox; int addr_len; int data_len; int* data; } ;
struct dvb_usb_device {int usb_mutex; struct usb_interface* intf; } ;
struct af9015_state {int* buf; int seq; } ;


 size_t VAR_0 ;

 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;

 size_t VAR_5 ;



 struct af9015_state* FUNC_0 (struct dvb_usb_device*) ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (struct dvb_usb_device*,int*,int,int*,int) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct dvb_usb_device *VAR_6, struct req_t *VAR_7)
{


 struct af9015_state *VAR_8 = FUNC_0(VAR_6);
 struct usb_interface *VAR_9 = VAR_6->intf;
 int VAR_10, VAR_11, VAR_12;
 u8 VAR_13 = 1;

 FUNC_4(&VAR_6->usb_mutex);

 VAR_8->buf[0] = VAR_7->cmd;
 VAR_8->buf[1] = VAR_8->seq++;
 VAR_8->buf[2] = VAR_7->i2c_addr << 1;
 VAR_8->buf[3] = VAR_7->addr >> 8;
 VAR_8->buf[4] = VAR_7->addr & 0xff;
 VAR_8->buf[5] = VAR_7->mbox;
 VAR_8->buf[6] = VAR_7->addr_len;
 VAR_8->buf[7] = VAR_7->data_len;

 switch (VAR_7->cmd) {
 case 134:
 case 132:
 case 131:
  VAR_13 = 0;
  break;
 case 133:
  VAR_13 = 0;
  VAR_8->buf[2] |= 0x01;

 case 130:
  VAR_8->buf[0] = VAR_4;
  break;
 case 129:
  if (((VAR_7->addr & 0xff00) == 0xff00) ||
      ((VAR_7->addr & 0xff00) == 0xae00))
   VAR_8->buf[0] = 128;
 case 128:
 case 136:
 case 135:
 case 137:
  break;
 default:
  FUNC_1(&VAR_9->dev, "unknown cmd %d\n", VAR_7->cmd);
  VAR_10 = -VAR_3;
  goto error;
 }


 if ((VAR_13 && (VAR_7->data_len > VAR_1 - 8)) ||
     (!VAR_13 && (VAR_7->data_len > VAR_1 - 2))) {
  FUNC_1(&VAR_9->dev, "too much data, cmd %u, len %u\n",
   VAR_7->cmd, VAR_7->data_len);
  VAR_10 = -VAR_2;
  goto error;
 }





 VAR_11 = 8;
 VAR_12 = 2;
 if (VAR_13) {
  VAR_11 += VAR_7->data_len;
  FUNC_3(&VAR_8->buf[8], VAR_7->data, VAR_7->data_len);
 } else {
  VAR_12 += VAR_7->data_len;
 }


 if (VAR_7->cmd == 135 || VAR_7->cmd == 131)
  VAR_12 = 0;

 VAR_10 = FUNC_2(VAR_6, VAR_8->buf, VAR_11,
       VAR_8->buf, VAR_12);
 if (VAR_10)
  goto error;


 if (VAR_12 && VAR_8->buf[1]) {
  FUNC_1(&VAR_9->dev, "cmd failed %u\n", VAR_8->buf[1]);
  VAR_10 = -VAR_3;
  goto error;
 }


 if (!VAR_13)
  FUNC_3(VAR_7->data, &VAR_8->buf[2], VAR_7->data_len);
error:
 FUNC_5(&VAR_6->usb_mutex);

 return VAR_10;
}
