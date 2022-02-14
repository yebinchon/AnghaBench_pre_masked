
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct peak_usb_device {TYPE_1__* adapter; int * next_siblings; int cmd_buf; int state; struct peak_usb_device* prev_siblings; struct net_device* netdev; } ;
struct net_device {int name; } ;
struct TYPE_2__ {int (* dev_free ) (struct peak_usb_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (struct peak_usb_device*) ;
 int FUNC_5 (struct net_device*) ;
 struct peak_usb_device* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_8(struct usb_interface *VAR_2)
{
 struct peak_usb_device *VAR_3;
 struct peak_usb_device *VAR_4;


 for (VAR_3 = FUNC_6(VAR_2); VAR_3; VAR_3 = VAR_4) {
  struct net_device *VAR_5 = VAR_3->netdev;
  char VAR_6[VAR_0];

  VAR_4 = VAR_3->prev_siblings;
  VAR_3->state &= ~VAR_1;
  FUNC_3(VAR_6, VAR_5->name, VAR_0);

  FUNC_5(VAR_5);

  FUNC_2(VAR_3->cmd_buf);
  VAR_3->next_siblings = ((void*)0);
  if (VAR_3->adapter->dev_free)
   VAR_3->adapter->dev_free(VAR_3);

  FUNC_1(VAR_5);
  FUNC_0(&VAR_2->dev, "%s removed\n", VAR_6);
 }

 FUNC_7(VAR_2, ((void*)0));
}
