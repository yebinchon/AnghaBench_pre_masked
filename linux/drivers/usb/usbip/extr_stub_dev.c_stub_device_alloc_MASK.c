
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_device {int devnum; int dev; TYPE_1__* bus; } ;
struct TYPE_5__ {int unusable; int reset; int shutdown; } ;
struct TYPE_6__ {int sockfd; TYPE_2__ eh_ops; int * tcp_socket; int lock; int status; int side; } ;
struct stub_device {int devid; TYPE_3__ ud; int tx_waitq; int priv_lock; int unlink_tx; int unlink_free; int priv_free; int priv_tx; int priv_init; int udev; } ;
struct TYPE_4__ {int busnum; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 struct stub_device* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct usb_device*) ;
 int FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static struct stub_device *FUNC_7(struct usb_device *VAR_6)
{
 struct stub_device *VAR_7;
 int VAR_8 = VAR_6->bus->busnum;
 int VAR_9 = VAR_6->devnum;

 FUNC_1(&VAR_6->dev, "allocating stub device");


 VAR_7 = FUNC_3(sizeof(struct stub_device), VAR_0);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->udev = FUNC_5(VAR_6);






 VAR_7->devid = (VAR_8 << 16) | VAR_9;
 VAR_7->ud.side = VAR_2;
 VAR_7->ud.status = VAR_1;
 FUNC_4(&VAR_7->ud.lock);
 VAR_7->ud.tcp_socket = ((void*)0);
 VAR_7->ud.sockfd = -1;

 FUNC_0(&VAR_7->priv_init);
 FUNC_0(&VAR_7->priv_tx);
 FUNC_0(&VAR_7->priv_free);
 FUNC_0(&VAR_7->unlink_free);
 FUNC_0(&VAR_7->unlink_tx);
 FUNC_4(&VAR_7->priv_lock);

 FUNC_2(&VAR_7->tx_waitq);

 VAR_7->ud.eh_ops.shutdown = VAR_5;
 VAR_7->ud.eh_ops.reset = VAR_3;
 VAR_7->ud.eh_ops.unusable = VAR_4;

 FUNC_6(&VAR_7->ud);

 FUNC_1(&VAR_6->dev, "register new device\n");

 return VAR_7;
}
