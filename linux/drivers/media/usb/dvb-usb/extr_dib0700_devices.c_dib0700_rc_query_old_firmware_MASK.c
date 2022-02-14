
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int protocol; } ;
struct TYPE_5__ {TYPE_1__ core; } ;
struct TYPE_6__ {TYPE_2__ rc; } ;
struct dvb_usb_device {int rc_dev; TYPE_3__ props; struct dib0700_state* priv; } ;
struct dib0700_state {int fw_version; scalar_t__* buf; } ;
typedef enum rc_proto { ____Placeholder_rc_proto } rc_proto ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct dvb_usb_device*,scalar_t__*,int,scalar_t__*,int) ;
 int FUNC_3 (struct dvb_usb_device*,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int,int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct dvb_usb_device *VAR_4)
{
 enum rc_proto VAR_5;
 u32 VAR_6;
 u8 VAR_7;
 int VAR_8;
 struct dib0700_state *VAR_9 = VAR_4->priv;

 if (VAR_9->fw_version >= 0x10200) {




  return 0;
 }

 VAR_9->buf[0] = VAR_3;
 VAR_9->buf[1] = 0;

 VAR_8 = FUNC_2(VAR_4, VAR_9->buf, 2, VAR_9->buf, 4);
 if (VAR_8 <= 0) {
  FUNC_4("RC Query Failed");
  return -VAR_0;
 }


 if (VAR_9->buf[0] == 0 && VAR_9->buf[1] == 0
     && VAR_9->buf[2] == 0 && VAR_9->buf[3] == 0)
  return 0;



 FUNC_3(VAR_4, ((void*)0));

 switch (VAR_4->props.rc.core.protocol) {
 case 128:

  if ((VAR_9->buf[3 - 2] == 0x00) && (VAR_9->buf[3 - 3] == 0x00) &&
      (VAR_9->buf[3] == 0xff)) {
   FUNC_6(VAR_4->rc_dev);
   return 0;
  }

  VAR_5 = VAR_1;
  VAR_6 = FUNC_0(VAR_9->buf[3 - 2], VAR_9->buf[3 - 3]);
  VAR_7 = 0;
  break;

 default:

  VAR_5 = VAR_2;
  VAR_6 = FUNC_1(VAR_9->buf[3 - 2], VAR_9->buf[3 - 3]);
  VAR_7 = VAR_9->buf[3 - 1];
  break;
 }

 FUNC_5(VAR_4->rc_dev, VAR_5, VAR_6, VAR_7);
 return 0;
}
