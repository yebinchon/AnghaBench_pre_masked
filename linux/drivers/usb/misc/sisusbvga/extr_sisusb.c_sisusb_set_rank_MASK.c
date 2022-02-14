
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sisusb_usb_data {int dummy; } ;


 int FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct sisusb_usb_data*,int ) ;

__attribute__((used)) static int FUNC_2(struct sisusb_usb_data *VAR_1, int *VAR_2,
  int VAR_3, u8 VAR_4, u8 VAR_5, const u8 VAR_6[][5], int VAR_7)
{
 int VAR_8 = 0, VAR_9;
 u8 VAR_10;

 *VAR_2 = 0;

 if ((VAR_4 == 2) && (VAR_6[VAR_3][0] == 2))
  return VAR_8;

 VAR_9 = VAR_6[VAR_3][3] / 2 * VAR_7 / 32;

 if ((VAR_9 * VAR_4) > 128)
  return VAR_8;

 VAR_10 = 0;
 while ((VAR_9 >>= 1) > 0)
  VAR_10 += 0x10;

 VAR_10 |= ((VAR_4 - 1) << 2);
 VAR_10 |= ((VAR_7 / 64) & 0x02);
 VAR_10 |= (VAR_5 & 0x01);

 VAR_8 = FUNC_0(VAR_0, 0x14, VAR_10);
 VAR_8 |= FUNC_1(VAR_1, 0);

 *VAR_2 = 1;

 return VAR_8;
}
