
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kobj; } ;
struct usb_port {scalar_t__ location; int is_superspeed; TYPE_1__ dev; struct usb_port* peer; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,char*,char*,char*,char*,char*,char*,char*) ;
 int FUNC_5 (int *,int *,char*) ;
 int FUNC_6 (int *,char*) ;

__attribute__((used)) static int FUNC_7(struct usb_port *VAR_1, struct usb_port *VAR_2)
{
 struct usb_port *VAR_3, *VAR_4;
 int VAR_5;

 if (VAR_1->peer == VAR_2 && VAR_2->peer == VAR_1)
  return 0;

 if (VAR_1->peer || VAR_2->peer) {
  struct usb_port *VAR_6 = VAR_1->peer;
  struct usb_port *VAR_7 = VAR_2->peer;
  char *VAR_8;

  if (VAR_1->location && VAR_1->location == VAR_2->location)
   VAR_8 = "location";
  else
   VAR_8 = "default";

  FUNC_4("usb: failed to peer %s and %s by %s (%s:%s) (%s:%s)\n",
   FUNC_1(&VAR_1->dev), FUNC_1(&VAR_2->dev), VAR_8,
   FUNC_1(&VAR_1->dev),
   VAR_6 ? FUNC_1(&VAR_6->dev) : "none",
   FUNC_1(&VAR_2->dev),
   VAR_7 ? FUNC_1(&VAR_7->dev) : "none");
  return -VAR_0;
 }

 VAR_5 = FUNC_5(&VAR_1->dev.kobj, &VAR_2->dev.kobj, "peer");
 if (VAR_5)
  return VAR_5;
 VAR_5 = FUNC_5(&VAR_2->dev.kobj, &VAR_1->dev.kobj, "peer");
 if (VAR_5) {
  FUNC_6(&VAR_1->dev.kobj, "peer");
  return VAR_5;
 }






 if (VAR_1->is_superspeed) {
  VAR_3 = VAR_1;
  FUNC_0(VAR_2->is_superspeed);
  VAR_4 = VAR_2;
 } else {
  VAR_3 = VAR_2;
  FUNC_0(!VAR_2->is_superspeed);
  VAR_4 = VAR_1;
 }
 FUNC_2(&VAR_4->dev);

 VAR_1->peer = VAR_2;
 VAR_2->peer = VAR_1;
 FUNC_2(&VAR_3->dev);
 FUNC_3(&VAR_4->dev);

 return 0;
}
