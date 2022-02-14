
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct rc_dev {struct dvb_usb_device* priv; } ;
struct TYPE_4__ {int protocol; } ;
struct TYPE_5__ {TYPE_1__ core; } ;
struct TYPE_6__ {TYPE_2__ rc; } ;
struct dvb_usb_device {int usb_mutex; TYPE_3__ props; struct dib0700_state* priv; } ;
struct dib0700_state {int* buf; int fw_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct dvb_usb_device*,int*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct rc_dev *VAR_6, u64 *VAR_7)
{
 struct dvb_usb_device *VAR_8 = VAR_6->priv;
 struct dib0700_state *VAR_9 = VAR_8->priv;
 int VAR_10, VAR_11;

 if (FUNC_2(&VAR_8->usb_mutex) < 0) {
  FUNC_1("could not acquire lock");
  return -VAR_0;
 }

 VAR_9->buf[0] = VAR_5;
 VAR_9->buf[1] = 0;
 VAR_9->buf[2] = 0;


 if (*VAR_7 & VAR_3) {
  VAR_10 = 1;
  *VAR_7 = VAR_3;
 } else if (*VAR_7 & VAR_2) {
  VAR_10 = 0;
  *VAR_7 = VAR_2;
 } else if (*VAR_7 & VAR_4) {
  if (VAR_9->fw_version < 0x10200) {
   VAR_11 = -VAR_1;
   goto out;
  }
  VAR_10 = 2;
  *VAR_7 = VAR_4;
 } else {
  VAR_11 = -VAR_1;
  goto out;
 }

 VAR_9->buf[1] = VAR_10;

 VAR_11 = FUNC_0(VAR_8, VAR_9->buf, 3);
 if (VAR_11 < 0) {
  FUNC_1("ir protocol setup failed");
  goto out;
 }

 VAR_8->props.rc.core.protocol = *VAR_7;

out:
 FUNC_3(&VAR_8->usb_mutex);
 return VAR_11;
}
