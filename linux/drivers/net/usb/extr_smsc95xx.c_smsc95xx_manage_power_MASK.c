
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct usbnet {TYPE_1__* intf; int net; scalar_t__* data; } ;
struct smsc95xx_priv {int features; } ;
struct TYPE_3__ {int needs_remote_wakeup; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct usbnet *VAR_1, int VAR_2)
{
 struct smsc95xx_priv *VAR_3 = (struct smsc95xx_priv *)(VAR_1->data[0]);

 VAR_1->intf->needs_remote_wakeup = VAR_2;

 if (VAR_3->features & VAR_0)
  return 0;


 FUNC_0(VAR_1->net, "hardware isn't capable of remote wakeup\n");

 if (VAR_2)
  FUNC_1(VAR_1->intf);
 else
  FUNC_2(VAR_1->intf);

 return 0;
}
