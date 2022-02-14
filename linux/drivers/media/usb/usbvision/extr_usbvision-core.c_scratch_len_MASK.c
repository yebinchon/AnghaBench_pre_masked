
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_usbvision {int scratch_write_ptr; int scratch_read_ptr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1(struct usb_usbvision *VAR_2)
{
 int VAR_3 = VAR_2->scratch_write_ptr - VAR_2->scratch_read_ptr;

 if (VAR_3 < 0)
  VAR_3 += VAR_1;
 FUNC_0(VAR_0, "scratch_len() = %d\n", VAR_3);

 return VAR_3;
}
