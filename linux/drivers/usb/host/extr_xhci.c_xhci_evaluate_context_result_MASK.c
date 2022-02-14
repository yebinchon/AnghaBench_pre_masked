
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xhci_hcd {int dummy; } ;
struct usb_device {int dev; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int VAR_3 ;
 int FUNC_1 (struct xhci_hcd*,int ,char*) ;
 int FUNC_2 (struct xhci_hcd*,char*,int) ;
 int FUNC_3 (struct xhci_hcd*,char*) ;

__attribute__((used)) static int FUNC_4(struct xhci_hcd *VAR_4,
  struct usb_device *VAR_5, u32 *VAR_6)
{
 int VAR_7;

 switch (*VAR_6) {
 case 135:
 case 134:
  FUNC_3(VAR_4, "Timeout while waiting for evaluate context command\n");
  VAR_7 = -VAR_2;
  break;
 case 130:
  FUNC_0(&VAR_5->dev,
    "WARN: xHCI driver setup invalid evaluate context command.\n");
  VAR_7 = -VAR_0;
  break;
 case 129:
  FUNC_0(&VAR_5->dev,
   "WARN: slot not enabled for evaluate context command.\n");
  VAR_7 = -VAR_0;
  break;
 case 133:
  FUNC_0(&VAR_5->dev,
   "WARN: invalid context state for evaluate context command.\n");
  VAR_7 = -VAR_0;
  break;
 case 132:
  FUNC_0(&VAR_5->dev,
   "ERROR: Incompatible device for evaluate context command.\n");
  VAR_7 = -VAR_1;
  break;
 case 131:

  FUNC_0(&VAR_5->dev, "WARN: Max Exit Latency too large\n");
  VAR_7 = -VAR_0;
  break;
 case 128:
  FUNC_1(VAR_4, VAR_3,
    "Successful evaluate context command");
  VAR_7 = 0;
  break;
 default:
  FUNC_2(VAR_4, "ERROR: unexpected command completion code 0x%x.\n",
   *VAR_6);
  VAR_7 = -VAR_0;
  break;
 }
 return VAR_7;
}
