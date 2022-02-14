
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct flexcop_usb {int tmp_buffer_length; int* tmp_buffer; int fc_dev; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int*,int) ;
 int FUNC_2 (int*,int*,int) ;

__attribute__((used)) static void FUNC_3(struct flexcop_usb *VAR_0,
 u8 *VAR_1, int VAR_2)
{
 u8 *VAR_3;
 int VAR_4;

 FUNC_0("tmp_buffer_length=%d, buffer_length=%d\n",
  VAR_0->tmp_buffer_length, VAR_2);

 if (VAR_0->tmp_buffer_length > 0) {
  FUNC_2(VAR_0->tmp_buffer+VAR_0->tmp_buffer_length, VAR_1,
    VAR_2);
  VAR_0->tmp_buffer_length += VAR_2;
  VAR_3 = VAR_0->tmp_buffer;
  VAR_4 = VAR_0->tmp_buffer_length;
 } else {
  VAR_3=VAR_1;
  VAR_4=VAR_2;
 }

 while (VAR_4 >= 190) {
  if (*VAR_3 == 0xff) {
   switch (*(VAR_3+1) & 0x03) {
   case 0x01:
    if (*(VAR_3+2) == 0x47)
     FUNC_1(
       VAR_0->fc_dev, VAR_3+2, 1);
    else
     FUNC_0("not ts packet %*ph\n", 4, VAR_3+2);
    VAR_3 += 190;
    VAR_4 -= 190;
    break;
   default:
    FUNC_0("wrong packet type\n");
    VAR_4 = 0;
    break;
   }
  } else {
   FUNC_0("wrong header\n");
   VAR_4 = 0;
  }
 }

 if (VAR_4>0)
  FUNC_2(VAR_0->tmp_buffer, VAR_3, VAR_4);
 VAR_0->tmp_buffer_length = VAR_4;
}
