
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usbnet {int net; scalar_t__* data; } ;
struct smsc95xx_priv {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct usbnet*,int ) ;
 int FUNC_5 (struct usbnet*) ;
 int FUNC_6 (struct usbnet*) ;
 int FUNC_7 (struct usbnet*) ;

__attribute__((used)) static int FUNC_8(struct usbnet *VAR_4, u32 VAR_5)
{
 struct smsc95xx_priv *VAR_6 = (struct smsc95xx_priv *)(VAR_4->data[0]);
 int VAR_7;

 if (!FUNC_3(VAR_4->net)) {

  FUNC_0(VAR_4->net, "autosuspend entering SUSPEND2\n");
  return FUNC_6(VAR_4);
 }

 if (!VAR_5) {




  if (!(VAR_6->features & VAR_1)) {
   FUNC_2(VAR_4->net, "EDPD not supported\n");
   return -VAR_0;
  }

  FUNC_0(VAR_4->net, "autosuspend entering SUSPEND1\n");


  VAR_7 = FUNC_4(VAR_4,
   VAR_2);
  if (VAR_7 < 0) {
   FUNC_2(VAR_4->net, "error enabling PHY wakeup ints\n");
   return VAR_7;
  }

  FUNC_1(VAR_4->net, "entering SUSPEND1 mode\n");
  return FUNC_5(VAR_4);
 }


 VAR_7 = FUNC_4(VAR_4,
  VAR_3);
 if (VAR_7 < 0) {
  FUNC_2(VAR_4->net, "error enabling PHY wakeup ints\n");
  return VAR_7;
 }

 FUNC_0(VAR_4->net, "autosuspend entering SUSPEND3\n");
 return FUNC_7(VAR_4);
}
