
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt2x00_dev {int dummy; } ;
struct rf_channel {int channel; } ;


 int FUNC_0 (struct rt2x00_dev*,int,int) ;
 int FUNC_1 (struct rt2x00_dev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct rt2x00_dev *VAR_0,
         struct rf_channel *VAR_1)
{
 u8 VAR_2;

 VAR_2 = (VAR_1->channel > 14) ? 0x48 : 0x38;
 FUNC_1(VAR_0, 66, VAR_2);

 FUNC_0(VAR_0, 69, 0x12);

 if (VAR_1->channel <= 14) {
  FUNC_0(VAR_0, 70, 0x0a);
 } else {

  FUNC_0(VAR_0, 70, 0x00);
 }

 FUNC_0(VAR_0, 73, 0x10);

 if (VAR_1->channel > 14) {
  FUNC_0(VAR_0, 62, 0x1d);
  FUNC_0(VAR_0, 63, 0x1d);
  FUNC_0(VAR_0, 64, 0x1d);
 } else {
  FUNC_0(VAR_0, 62, 0x2d);
  FUNC_0(VAR_0, 63, 0x2d);
  FUNC_0(VAR_0, 64, 0x2d);
 }
}
