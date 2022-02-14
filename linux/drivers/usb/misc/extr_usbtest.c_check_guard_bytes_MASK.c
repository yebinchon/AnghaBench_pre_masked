
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct usbtest_dev {int dummy; } ;
struct urb {scalar_t__* transfer_buffer; } ;


 int VAR_0 ;
 int FUNC_0 (struct usbtest_dev*,char*,unsigned int,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__* FUNC_1 (scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct usbtest_dev *VAR_2, struct urb *VAR_3)
{
 u8 *VAR_4 = VAR_3->transfer_buffer;
 u8 *VAR_5 = VAR_4 - FUNC_1(VAR_4);
 unsigned VAR_6;

 for (VAR_6 = 0; VAR_5 < VAR_4; VAR_6++, VAR_5++) {
  if (*VAR_5 != VAR_1) {
   FUNC_0(VAR_2, "guard byte[%d] %d (not %d)\n",
    VAR_6, *VAR_5, VAR_1);
   return -VAR_0;
  }
 }
 return 0;
}
