
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int * read_urbs; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct usb_serial_port*,int,int ) ;

int FUNC_3(struct usb_serial_port *VAR_0,
     gfp_t VAR_1)
{
 int VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0->read_urbs); ++VAR_3) {
  VAR_2 = FUNC_2(VAR_0, VAR_3, VAR_1);
  if (VAR_2)
   goto err;
 }

 return 0;
err:
 for (; VAR_3 >= 0; --VAR_3)
  FUNC_1(VAR_0->read_urbs[VAR_3]);

 return VAR_2;
}
