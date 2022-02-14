
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct gs_usb {int rx_submitted; scalar_t__* canch; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct gs_usb*) ;
 struct gs_usb* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_6(struct usb_interface *VAR_1)
{
 unsigned VAR_2;
 struct gs_usb *VAR_3 = FUNC_3(VAR_1);
 FUNC_5(VAR_1, ((void*)0));

 if (!VAR_3) {
  FUNC_0(&VAR_1->dev, "Disconnect (nodata)\n");
  return;
 }

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (VAR_3->canch[VAR_2])
   FUNC_1(VAR_3->canch[VAR_2]);

 FUNC_4(&VAR_3->rx_submitted);
 FUNC_2(VAR_3);
}
