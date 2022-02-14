
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usbnet {int net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct usbnet*,int ) ;
 int FUNC_5 (struct usbnet*) ;
 int FUNC_6 (struct usbnet*) ;
 int FUNC_7 (struct usbnet*) ;

__attribute__((used)) static int FUNC_8(struct usbnet *VAR_2, u32 VAR_3)
{
 int VAR_4;

 if (!FUNC_3(VAR_2->net)) {

  FUNC_0(VAR_2->net, "autosuspend entering SUSPEND2\n");
  return FUNC_6(VAR_2);
 }

 if (!VAR_3) {

  FUNC_0(VAR_2->net, "autosuspend entering SUSPEND1\n");


  VAR_4 = FUNC_4(VAR_2,
   VAR_0);
  if (VAR_4 < 0) {
   FUNC_2(VAR_2->net, "error enabling PHY wakeup ints\n");
   return VAR_4;
  }

  FUNC_1(VAR_2->net, "entering SUSPEND1 mode\n");
  return FUNC_5(VAR_2);
 }


 VAR_4 = FUNC_4(VAR_2,
  VAR_1);
 if (VAR_4 < 0) {
  FUNC_2(VAR_2->net, "error enabling PHY wakeup ints\n");
  return VAR_4;
 }

 FUNC_0(VAR_2->net, "autosuspend entering SUSPEND3\n");
 return FUNC_7(VAR_2);
}
