
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt2x00_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rt2x00_dev*,int ,int) ;
 int FUNC_1 (struct rt2x00_dev*,int,int) ;
 int FUNC_2 (struct rt2x00_dev*,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct rt2x00_dev *VAR_2, bool VAR_3)
{
 u8 VAR_4;

 if (VAR_3)
  FUNC_0(VAR_2, VAR_1, 0x04);
 else
  FUNC_0(VAR_2, VAR_1, 0x02);

 FUNC_0(VAR_2, VAR_0, 0x06);

 VAR_4 = FUNC_1(VAR_2, 5, 17);
 VAR_4 |= 0x80;
 FUNC_2(VAR_2, 5, 17, VAR_4);

 if (VAR_3) {
  FUNC_2(VAR_2, 5, 18, 0xC1);
  FUNC_2(VAR_2, 5, 19, 0x20);
  FUNC_2(VAR_2, 5, 20, 0x02);
  VAR_4 = FUNC_1(VAR_2, 5, 3);
  VAR_4 &= (~0x3F);
  VAR_4 |= 0x3F;
  FUNC_2(VAR_2, 5, 3, VAR_4);
  VAR_4 = FUNC_1(VAR_2, 5, 4);
  VAR_4 &= (~0x3F);
  VAR_4 |= 0x3F;
  FUNC_2(VAR_2, 5, 4, VAR_4);
  FUNC_2(VAR_2, 5, 5, 0x31);
 } else {
  FUNC_2(VAR_2, 5, 18, 0xF1);
  FUNC_2(VAR_2, 5, 19, 0x18);
  FUNC_2(VAR_2, 5, 20, 0x02);
  VAR_4 = FUNC_1(VAR_2, 5, 3);
  VAR_4 &= (~0x3F);
  VAR_4 |= 0x34;
  FUNC_2(VAR_2, 5, 3, VAR_4);
  VAR_4 = FUNC_1(VAR_2, 5, 4);
  VAR_4 &= (~0x3F);
  VAR_4 |= 0x34;
  FUNC_2(VAR_2, 5, 4, VAR_4);
 }

 return 0;
}
