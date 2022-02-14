
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbnet {int net; } ;
struct urb {int* transfer_buffer; int actual_length; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct usbnet*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct usbnet *VAR_0, struct urb *VAR_1)
{
 u8 *VAR_2 = VAR_1->transfer_buffer;
 bool VAR_3, VAR_4;

 if (VAR_1->actual_length < 16)
  return;

 VAR_3 = !(VAR_2[1] == 0x20);
 VAR_4 = FUNC_1(VAR_0->net) != VAR_3;
 if (VAR_4) {
  FUNC_2(VAR_0, VAR_3, 0);
  FUNC_0(VAR_0->net, "Link Status is: %d\n", VAR_3);
 }
}
