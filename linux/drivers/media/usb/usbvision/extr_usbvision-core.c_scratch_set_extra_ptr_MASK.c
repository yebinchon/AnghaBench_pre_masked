
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_usbvision {int scratch_read_ptr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct usb_usbvision *VAR_2, int *VAR_3,
      int VAR_4)
{
 *VAR_3 = (VAR_2->scratch_read_ptr + VAR_4) % VAR_1;

 FUNC_0(VAR_0, "ptr=%d\n", *VAR_3);
}
