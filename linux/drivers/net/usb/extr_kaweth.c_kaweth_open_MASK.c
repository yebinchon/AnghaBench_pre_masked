
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct kaweth_device {int opened; TYPE_3__* intf; int rx_urb; TYPE_1__* irq_urb; int intbufferhandle; int intbuffer; int dev; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int transfer_flags; int transfer_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int VAR_4 ;
 int FUNC_1 (struct kaweth_device*) ;
 int FUNC_2 (struct kaweth_device*,int ) ;
 struct kaweth_device* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_1__*,int ,int ,int ,int ,int ,struct kaweth_device*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_5)
{
 struct kaweth_device *VAR_6 = FUNC_3(VAR_5);
 int VAR_7;

 VAR_7 = FUNC_5(VAR_6->intf);
 if (VAR_7) {
  FUNC_0(&VAR_6->intf->dev, "Interface cannot be resumed.\n");
  return -VAR_0;
 }
 VAR_7 = FUNC_2(VAR_6, VAR_1);
 if (VAR_7)
  goto err_out;

 FUNC_7(
  VAR_6->irq_urb,
  VAR_6->dev,
  FUNC_9(VAR_6->dev, 3),
  VAR_6->intbuffer,
  VAR_2,
  VAR_4,
  VAR_6,
  250);
 VAR_6->irq_urb->transfer_dma = VAR_6->intbufferhandle;
 VAR_6->irq_urb->transfer_flags |= VAR_3;

 VAR_7 = FUNC_10(VAR_6->irq_urb, VAR_1);
 if (VAR_7) {
  FUNC_8(VAR_6->rx_urb);
  goto err_out;
 }
 VAR_6->opened = 1;

 FUNC_4(VAR_5);

 FUNC_1(VAR_6);
 return 0;

err_out:
 FUNC_6(VAR_6->intf);
 return -VAR_0;
}
