
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_port {int dev; } ;


 int FUNC_0 (int *,char*,int ,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usb_port*,struct usb_port*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct usb_port *VAR_1, struct usb_port *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3 == 0) {
  FUNC_0(&VAR_1->dev, "peered to %s\n", FUNC_1(&VAR_2->dev));
 } else {
  FUNC_0(&VAR_1->dev, "failed to peer to %s (%d)\n",
    FUNC_1(&VAR_2->dev), VAR_3);
  FUNC_3("usb: port power management may be unreliable\n");
  VAR_0 = 1;
 }
}
