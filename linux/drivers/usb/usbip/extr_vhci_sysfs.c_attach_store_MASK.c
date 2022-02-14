
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vhci_hcd {struct vhci* vhci; } ;
struct TYPE_8__ {scalar_t__ status; int sockfd; void* tcp_tx; void* tcp_rx; int lock; struct socket* tcp_socket; } ;
struct vhci_device {size_t devid; size_t speed; TYPE_4__ ud; } ;
struct vhci {int lock; TYPE_2__* vhci_hcd_hs; TYPE_1__* vhci_hcd_ss; } ;
struct usb_hcd {int dummy; } ;
struct socket {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
typedef size_t __u32 ;
struct TYPE_7__ {int pdev; } ;
struct TYPE_6__ {struct vhci_device* vdev; } ;
struct TYPE_5__ {struct vhci_device* vdev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct device*,char*,size_t) ;
 int FUNC_1 (struct device*,char*,size_t,size_t,int) ;
 struct vhci_hcd* FUNC_2 (struct usb_hcd*) ;
 void* FUNC_3 (int ,TYPE_4__*,char*) ;
 struct usb_hcd* FUNC_4 (int ) ;
 size_t FUNC_5 (size_t) ;
 size_t FUNC_6 (size_t) ;
 int FUNC_7 (struct vhci_device*,size_t) ;
 struct socket* FUNC_8 (int,int*) ;
 int FUNC_9 (struct socket*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (char const*,char*,size_t*,int*,size_t*,size_t*) ;
 int FUNC_15 (size_t) ;
 int FUNC_16 (char*,int,size_t,size_t) ;
 int FUNC_17 (size_t*,size_t*,size_t) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* VAR_8 ;

__attribute__((used)) static ssize_t FUNC_18(struct device *VAR_9, struct device_attribute *VAR_10,
       const char *VAR_11, size_t VAR_12)
{
 struct socket *VAR_13;
 int VAR_14 = 0;
 __u32 VAR_15 = 0, VAR_16 = 0, VAR_17 = 0, VAR_18 = 0, VAR_19 = 0;
 struct usb_hcd *VAR_20;
 struct vhci_hcd *VAR_21;
 struct vhci_device *VAR_22;
 struct vhci *VAR_23;
 int VAR_24;
 unsigned long VAR_25;







 if (FUNC_14(VAR_11, "%u %u %u %u", &VAR_15, &VAR_14, &VAR_18, &VAR_19) != 4)
  return -VAR_2;
 VAR_16 = FUNC_5(VAR_15);
 VAR_17 = FUNC_6(VAR_15);

 FUNC_16("port(%u) pdev(%d) rhport(%u)\n",
        VAR_15, VAR_16, VAR_17);
 FUNC_16("sockfd(%u) devid(%u) speed(%u)\n",
        VAR_14, VAR_18, VAR_19);


 if (!FUNC_17(&VAR_16, &VAR_17, VAR_19))
  return -VAR_2;

 VAR_20 = FUNC_4(VAR_8[VAR_16].pdev);
 if (VAR_20 == ((void*)0)) {
  FUNC_0(VAR_9, "port %d is not ready\n", VAR_15);
  return -VAR_0;
 }

 VAR_21 = FUNC_2(VAR_20);
 VAR_23 = VAR_21->vhci;

 if (VAR_19 == VAR_3)
  VAR_22 = &VAR_23->vhci_hcd_ss->vdev[VAR_17];
 else
  VAR_22 = &VAR_23->vhci_hcd_hs->vdev[VAR_17];


 VAR_13 = FUNC_8(VAR_14, &VAR_24);
 if (!VAR_13)
  return -VAR_2;




 FUNC_11(&VAR_23->lock, VAR_25);
 FUNC_10(&VAR_22->ud.lock);

 if (VAR_22->ud.status != VAR_5) {

  FUNC_12(&VAR_22->ud.lock);
  FUNC_13(&VAR_23->lock, VAR_25);

  FUNC_9(VAR_13);

  FUNC_0(VAR_9, "port %d already used\n", VAR_17);




  return -VAR_1;
 }

 FUNC_1(VAR_9, "pdev(%u) rhport(%u) sockfd(%d)\n",
   VAR_16, VAR_17, VAR_14);
 FUNC_1(VAR_9, "devid(%u) speed(%u) speed_str(%s)\n",
   VAR_18, VAR_19, FUNC_15(VAR_19));

 VAR_22->devid = VAR_18;
 VAR_22->speed = VAR_19;
 VAR_22->ud.sockfd = VAR_14;
 VAR_22->ud.tcp_socket = VAR_13;
 VAR_22->ud.status = VAR_4;

 FUNC_12(&VAR_22->ud.lock);
 FUNC_13(&VAR_23->lock, VAR_25);


 VAR_22->ud.tcp_rx = FUNC_3(VAR_6, &VAR_22->ud, "vhci_rx");
 VAR_22->ud.tcp_tx = FUNC_3(VAR_7, &VAR_22->ud, "vhci_tx");

 FUNC_7(VAR_22, VAR_19);

 return VAR_12;
}
