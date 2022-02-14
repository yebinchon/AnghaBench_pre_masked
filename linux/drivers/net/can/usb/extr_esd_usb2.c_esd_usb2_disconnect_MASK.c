
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct net_device {int dummy; } ;
struct esd_usb2 {int net_count; TYPE_1__** nets; } ;
struct TYPE_2__ {struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct esd_usb2*) ;
 int FUNC_3 (struct esd_usb2*) ;
 int FUNC_4 (struct net_device*) ;
 struct esd_usb2* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_3)
{
 struct esd_usb2 *VAR_4 = FUNC_5(VAR_3);
 struct net_device *VAR_5;
 int VAR_6;

 FUNC_0(&VAR_3->dev, &VAR_0);
 FUNC_0(&VAR_3->dev, &VAR_1);
 FUNC_0(&VAR_3->dev, &VAR_2);

 FUNC_6(VAR_3, ((void*)0));

 if (VAR_4) {
  for (VAR_6 = 0; VAR_6 < VAR_4->net_count; VAR_6++) {
   if (VAR_4->nets[VAR_6]) {
    VAR_5 = VAR_4->nets[VAR_6]->netdev;
    FUNC_4(VAR_5);
    FUNC_1(VAR_5);
   }
  }
  FUNC_3(VAR_4);
  FUNC_2(VAR_4);
 }
}
