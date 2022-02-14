
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vhci_hcd {int dummy; } ;
struct usb_hcd {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
typedef size_t __u32 ;
struct TYPE_6__ {TYPE_1__* vhci; } ;
struct TYPE_5__ {int pdev; } ;
struct TYPE_4__ {struct vhci_hcd* vhci_hcd_hs; struct vhci_hcd* vhci_hcd_ss; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct device*,char*,size_t) ;
 TYPE_3__* FUNC_1 (struct usb_hcd*) ;
 scalar_t__ FUNC_2 (char const*,int,size_t*) ;
 struct usb_hcd* FUNC_3 (int ) ;
 size_t FUNC_4 (size_t) ;
 size_t FUNC_5 (size_t) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (size_t*,size_t*) ;
 int FUNC_8 (struct vhci_hcd*,size_t) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_4, struct device_attribute *VAR_5,
       const char *VAR_6, size_t VAR_7)
{
 __u32 VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
 struct usb_hcd *VAR_11;
 struct vhci_hcd *VAR_12;
 int VAR_13;

 if (FUNC_2(VAR_6, 10, &VAR_8) < 0)
  return -VAR_1;

 VAR_9 = FUNC_4(VAR_8);
 VAR_10 = FUNC_5(VAR_8);

 if (!FUNC_7(&VAR_9, &VAR_10))
  return -VAR_1;

 VAR_11 = FUNC_3(VAR_3[VAR_9].pdev);
 if (VAR_11 == ((void*)0)) {
  FUNC_0(VAR_4, "port is not ready %u\n", VAR_8);
  return -VAR_0;
 }

 FUNC_6("rhport %d\n", VAR_10);

 if ((VAR_8 / VAR_2) % 2)
  VAR_12 = FUNC_1(VAR_11)->vhci->vhci_hcd_ss;
 else
  VAR_12 = FUNC_1(VAR_11)->vhci->vhci_hcd_hs;

 VAR_13 = FUNC_8(VAR_12, VAR_10);
 if (VAR_13 < 0)
  return -VAR_1;

 FUNC_6("Leave\n");

 return VAR_7;
}
