
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int dummy; } ;
struct net_device {int name; } ;
struct hfa384x {int usb_work; int usb_flags; TYPE_1__* wlandev; } ;
typedef int gfp_t ;
struct TYPE_2__ {struct net_device* netdev; int hwremoved; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,char*,int ) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_7(struct hfa384x *VAR_3, struct urb *VAR_4, gfp_t VAR_5)
{
 struct net_device *VAR_6 = VAR_3->wlandev->netdev;
 int VAR_7;

 VAR_7 = -VAR_0;
 if (FUNC_1(VAR_6)) {
  if (!VAR_3->wlandev->hwremoved &&
      !FUNC_5(VAR_2, &VAR_3->usb_flags)) {
   VAR_7 = FUNC_6(VAR_4, VAR_5);


   if (VAR_7 == -VAR_1) {
    FUNC_0(VAR_3->wlandev->netdev,
         "%s tx pipe stalled: requesting reset\n",
         VAR_6->name);
    FUNC_4(VAR_2, &VAR_3->usb_flags);
    FUNC_3(&VAR_3->usb_work);
   } else if (VAR_7 == 0) {
    FUNC_2(VAR_6);
   }
  }
 }

 return VAR_7;
}
