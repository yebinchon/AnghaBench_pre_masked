
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usblp {int used; int mut; int rwait; int wwait; scalar_t__ present; int dev; } ;
struct usb_interface {int dev; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_interface*,int *) ;
 struct usblp* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct usb_interface*,int *) ;
 int VAR_0 ;
 int FUNC_7 (struct usblp*) ;
 int VAR_1 ;
 int FUNC_8 (struct usblp*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct usb_interface *VAR_2)
{
 struct usblp *VAR_3 = FUNC_5(VAR_2);

 FUNC_4(VAR_2, &VAR_0);

 if (!VAR_3 || !VAR_3->dev) {
  FUNC_1(&VAR_2->dev, "bogus disconnect\n");
  FUNC_0();
 }

 FUNC_2(&VAR_1);
 FUNC_2(&VAR_3->mut);
 VAR_3->present = 0;
 FUNC_9(&VAR_3->wwait);
 FUNC_9(&VAR_3->rwait);
 FUNC_6(VAR_2, ((void*)0));

 FUNC_8(VAR_3);
 FUNC_3(&VAR_3->mut);

 if (!VAR_3->used)
  FUNC_7(VAR_3);
 FUNC_3(&VAR_1);
}
