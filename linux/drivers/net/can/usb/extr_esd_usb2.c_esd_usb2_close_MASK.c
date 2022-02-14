
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_10__ {int state; } ;
struct esd_usb2_net_priv {TYPE_5__ can; int usb2; int index; } ;
struct TYPE_8__ {int baud; scalar_t__ rsvd; int net; } ;
struct TYPE_7__ {int len; int cmd; } ;
struct TYPE_6__ {scalar_t__* mask; int option; int net; } ;
struct TYPE_9__ {TYPE_3__ setbaud; TYPE_2__ hdr; TYPE_1__ filter; } ;
struct esd_usb2_msg {TYPE_4__ msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,struct esd_usb2_msg*) ;
 int FUNC_3 (struct esd_usb2_msg*) ;
 struct esd_usb2_msg* FUNC_4 (int,int ) ;
 int FUNC_5 (struct net_device*,char*) ;
 struct esd_usb2_net_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_8)
{
 struct esd_usb2_net_priv *VAR_9 = FUNC_6(VAR_8);
 struct esd_usb2_msg *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_7);
 if (!VAR_10)
  return -VAR_3;


 VAR_10->msg.hdr.cmd = VAR_1;
 VAR_10->msg.hdr.len = 2 + VAR_5;
 VAR_10->msg.filter.net = VAR_9->index;
 VAR_10->msg.filter.option = VAR_4;
 for (VAR_11 = 0; VAR_11 <= VAR_5; VAR_11++)
  VAR_10->msg.filter.mask[VAR_11] = 0;
 if (FUNC_2(VAR_9->usb2, VAR_10) < 0)
  FUNC_5(VAR_8, "sending idadd message failed\n");


 VAR_10->msg.hdr.len = 2;
 VAR_10->msg.hdr.cmd = VAR_2;
 VAR_10->msg.setbaud.net = VAR_9->index;
 VAR_10->msg.setbaud.rsvd = 0;
 VAR_10->msg.setbaud.baud = FUNC_1(VAR_6);
 if (FUNC_2(VAR_9->usb2, VAR_10) < 0)
  FUNC_5(VAR_8, "sending setbaud message failed\n");

 VAR_9->can.state = VAR_0;

 FUNC_7(VAR_8);

 FUNC_0(VAR_8);

 FUNC_3(VAR_10);

 return 0;
}
