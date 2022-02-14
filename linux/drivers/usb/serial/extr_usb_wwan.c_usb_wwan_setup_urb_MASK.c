
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {struct usb_serial* serial; } ;
struct usb_serial {int dev; } ;
struct urb {int dummy; } ;


 int VAR_0 ;
 struct urb* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct urb*,int ,int,char*,int,void (*) (struct urb*),void*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static struct urb *FUNC_3(struct usb_serial_port *VAR_1,
          int VAR_2,
          int VAR_3, void *VAR_4, char *VAR_5, int VAR_6,
          void (*VAR_7) (struct urb *))
{
 struct usb_serial *VAR_8 = VAR_1->serial;
 struct urb *VAR_9;

 VAR_9 = FUNC_0(0, VAR_0);
 if (!VAR_9)
  return ((void*)0);

 FUNC_1(VAR_9, VAR_8->dev,
     FUNC_2(VAR_8->dev, VAR_2) | VAR_3,
     VAR_5, VAR_6, VAR_7, VAR_4);

 return VAR_9;
}
