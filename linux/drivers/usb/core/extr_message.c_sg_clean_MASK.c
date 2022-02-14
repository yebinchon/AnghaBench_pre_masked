
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_sg_request {size_t entries; int * dev; int * urbs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct usb_sg_request *VAR_0)
{
 if (VAR_0->urbs) {
  while (VAR_0->entries--)
   FUNC_1(VAR_0->urbs[VAR_0->entries]);
  FUNC_0(VAR_0->urbs);
  VAR_0->urbs = ((void*)0);
 }
 VAR_0->dev = ((void*)0);
}
