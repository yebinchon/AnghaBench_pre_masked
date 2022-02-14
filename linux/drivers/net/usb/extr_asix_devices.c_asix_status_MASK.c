
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int net; } ;
struct urb {int actual_length; struct ax88172_int_data* transfer_buffer; } ;
struct ax88172_int_data {int link; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct usbnet*,int,int) ;

__attribute__((used)) static void FUNC_3(struct usbnet *VAR_0, struct urb *VAR_1)
{
 struct ax88172_int_data *VAR_2;
 int VAR_3;

 if (VAR_1->actual_length < 8)
  return;

 VAR_2 = VAR_1->transfer_buffer;
 VAR_3 = VAR_2->link & 0x01;
 if (FUNC_1(VAR_0->net) != VAR_3) {
  FUNC_2(VAR_0, VAR_3, 1);
  FUNC_0(VAR_0->net, "Link Status is: %d\n", VAR_3);
 }
}
