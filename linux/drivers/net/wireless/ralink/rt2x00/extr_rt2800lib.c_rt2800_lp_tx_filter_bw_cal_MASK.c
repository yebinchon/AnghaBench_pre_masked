
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt2x00_dev {int dummy; } ;


 int FUNC_0 (struct rt2x00_dev*,int) ;
 int FUNC_1 (struct rt2x00_dev*,int ,int) ;
 int FUNC_2 (struct rt2x00_dev*,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static char FUNC_4(struct rt2x00_dev *VAR_0)
{
 unsigned int VAR_1;
 u8 VAR_2;
 char VAR_3;

 FUNC_1(VAR_0, 0, 0x82);

 VAR_1 = 0;
 do {
  FUNC_3(500, 2000);
  VAR_2 = FUNC_2(VAR_0, 159);
  if (VAR_2 == 0x02 || VAR_1 == 20)
   break;

  VAR_1++;
 } while (VAR_1 < 20);

 VAR_2 = FUNC_0(VAR_0, 0x39);
 VAR_3 = VAR_2 & 0x7F;
 if (VAR_3 >= 0x40)
  VAR_3 -= 128;

 return VAR_3;
}
