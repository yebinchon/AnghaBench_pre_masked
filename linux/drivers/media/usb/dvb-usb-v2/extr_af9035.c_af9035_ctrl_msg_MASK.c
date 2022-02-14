
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_req {int wlen; int rlen; int mbox; int cmd; int* wbuf; int* rbuf; } ;
struct usb_interface {int dev; } ;
struct state {int* buf; int seq; } ;
struct dvb_usb_device {int usb_mutex; struct usb_interface* intf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int*,int) ;
 struct state* FUNC_1 (struct dvb_usb_device*) ;
 int FUNC_2 (int *,char*,scalar_t__,int) ;
 int FUNC_3 (int *,char*,scalar_t__,int,...) ;
 int FUNC_4 (struct dvb_usb_device*,int*,int,int*,int) ;
 int FUNC_5 (int*,int*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct dvb_usb_device *VAR_8, struct usb_req *VAR_9)
{




 struct state *VAR_10 = FUNC_1(VAR_8);
 struct usb_interface *VAR_11 = VAR_8->intf;
 int VAR_12, VAR_13, VAR_14;
 u16 VAR_15, VAR_16;

 FUNC_6(&VAR_8->usb_mutex);


 if (VAR_9->wlen > (VAR_1 - 4 - 2) ||
   VAR_9->rlen > (VAR_1 - 3 - 2)) {
  FUNC_3(&VAR_11->dev, "too much data wlen=%d rlen=%d\n",
   VAR_9->wlen, VAR_9->rlen);
  VAR_12 = -VAR_5;
  goto exit;
 }

 VAR_10->buf[0] = 4 + VAR_9->wlen + 2 - 1;
 VAR_10->buf[1] = VAR_9->mbox;
 VAR_10->buf[2] = VAR_9->cmd;
 VAR_10->buf[3] = VAR_10->seq++;
 FUNC_5(&VAR_10->buf[4], VAR_9->wbuf, VAR_9->wlen);

 VAR_13 = 4 + VAR_9->wlen + 2;
 VAR_14 = 3 + VAR_9->rlen + 2;


 VAR_15 = FUNC_0(VAR_10->buf, VAR_10->buf[0] - 1);
 VAR_10->buf[VAR_10->buf[0] - 1] = (VAR_15 >> 8);
 VAR_10->buf[VAR_10->buf[0] - 0] = (VAR_15 & 0xff);


 if (VAR_9->cmd == VAR_3)
  VAR_14 = 0;

 VAR_12 = FUNC_4(VAR_8,
   VAR_10->buf, VAR_13, VAR_10->buf, VAR_14);
 if (VAR_12)
  goto exit;


 if (VAR_9->cmd == VAR_3)
  goto exit;


 VAR_15 = FUNC_0(VAR_10->buf, VAR_14 - 2);
 VAR_16 = (VAR_10->buf[VAR_14 - 2] << 8) | VAR_10->buf[VAR_14 - 1];
 if (VAR_16 != VAR_15) {
  FUNC_3(&VAR_11->dev, "command=%02x checksum mismatch (%04x != %04x)\n",
   VAR_9->cmd, VAR_16, VAR_15);
  VAR_12 = -VAR_6;
  goto exit;
 }


 if (VAR_10->buf[2]) {

  if (VAR_9->cmd == VAR_4 || VAR_10->buf[2] == 1) {
   VAR_12 = 1;
   goto exit;
  }

  FUNC_2(&VAR_11->dev, "command=%02x failed fw error=%d\n",
   VAR_9->cmd, VAR_10->buf[2]);
  VAR_12 = -VAR_6;
  goto exit;
 }


 if (VAR_9->rlen)
  FUNC_5(VAR_9->rbuf, &VAR_10->buf[3], VAR_9->rlen);
exit:
 FUNC_7(&VAR_8->usb_mutex);
 return VAR_12;
}
