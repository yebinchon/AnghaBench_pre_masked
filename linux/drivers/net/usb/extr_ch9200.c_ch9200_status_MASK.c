
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int net; } ;
struct urb {int actual_length; unsigned char* transfer_buffer; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct usbnet*,int ) ;

__attribute__((used)) static void FUNC_3(struct usbnet *VAR_1, struct urb *VAR_2)
{
 int VAR_3;
 unsigned char *VAR_4;

 if (VAR_2->actual_length < 16)
  return;

 VAR_4 = VAR_2->transfer_buffer;
 VAR_3 = !!(VAR_4[0] & 0x01);

 if (VAR_3) {
  FUNC_1(VAR_1->net);
  FUNC_2(VAR_1, VAR_0);
 } else {
  FUNC_0(VAR_1->net);
 }
}
