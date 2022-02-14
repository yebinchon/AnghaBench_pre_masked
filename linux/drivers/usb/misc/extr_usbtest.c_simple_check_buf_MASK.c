
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct usbtest_dev {int dummy; } ;
struct urb {unsigned int actual_length; int pipe; int dev; scalar_t__* transfer_buffer; } ;


 int VAR_0 ;
 int FUNC_0 (struct usbtest_dev*,char*,unsigned int,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct usbtest_dev*,struct urb*) ;
 unsigned int FUNC_2 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct usbtest_dev *VAR_2, struct urb *VAR_3)
{
 unsigned VAR_4;
 u8 VAR_5;
 u8 *VAR_6 = VAR_3->transfer_buffer;
 unsigned VAR_7 = VAR_3->actual_length;
 unsigned VAR_8 = FUNC_2(VAR_3->dev, VAR_3->pipe);

 int VAR_9 = FUNC_1(VAR_2, VAR_3);
 if (VAR_9)
  return VAR_9;

 for (VAR_4 = 0; VAR_4 < VAR_7; VAR_4++, VAR_6++) {
  switch (VAR_1) {

  case 0:
   VAR_5 = 0;
   break;





  case 1:
   VAR_5 = (VAR_4 % VAR_8) % 63;
   break;

  default:
   VAR_5 = !*VAR_6;
   break;
  }
  if (*VAR_6 == VAR_5)
   continue;
  FUNC_0(VAR_2, "buf[%d] = %d (not %d)\n", VAR_4, *VAR_6, VAR_5);
  return -VAR_0;
 }
 return 0;
}
