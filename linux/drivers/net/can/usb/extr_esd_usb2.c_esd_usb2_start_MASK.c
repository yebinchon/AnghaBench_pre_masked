
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_8__ {int state; } ;
struct esd_usb2_net_priv {TYPE_4__ can; int index; struct net_device* netdev; struct esd_usb2* usb2; } ;
struct TYPE_6__ {void** mask; int option; int net; } ;
struct TYPE_5__ {int len; int cmd; } ;
struct TYPE_7__ {TYPE_2__ filter; TYPE_1__ hdr; } ;
struct esd_usb2_msg {TYPE_3__ msg; } ;
struct esd_usb2 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct esd_usb2*,struct esd_usb2_msg*) ;
 int FUNC_2 (struct esd_usb2*) ;
 int FUNC_3 (struct esd_usb2_msg*) ;
 struct esd_usb2_msg* FUNC_4 (int,int ) ;
 int FUNC_5 (struct net_device*,char*,int) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct esd_usb2_net_priv *VAR_7)
{
 struct esd_usb2 *VAR_8 = VAR_7->usb2;
 struct net_device *VAR_9 = VAR_7->netdev;
 struct esd_usb2_msg *VAR_10;
 int VAR_11, VAR_12;

 VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_6);
 if (!VAR_10) {
  VAR_11 = -VAR_3;
  goto out;
 }
 VAR_10->msg.hdr.cmd = VAR_1;
 VAR_10->msg.hdr.len = 2 + VAR_5;
 VAR_10->msg.filter.net = VAR_7->index;
 VAR_10->msg.filter.option = VAR_4;
 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++)
  VAR_10->msg.filter.mask[VAR_12] = FUNC_0(0xffffffff);

 VAR_10->msg.filter.mask[VAR_5] = FUNC_0(0x00000001);

 VAR_11 = FUNC_1(VAR_8, VAR_10);
 if (VAR_11)
  goto out;

 VAR_11 = FUNC_2(VAR_8);
 if (VAR_11)
  goto out;

 VAR_7->can.state = VAR_0;

out:
 if (VAR_11 == -VAR_2)
  FUNC_6(VAR_9);
 if (VAR_11)
  FUNC_5(VAR_9, "couldn't start device: %d\n", VAR_11);

 FUNC_3(VAR_10);
 return VAR_11;
}
