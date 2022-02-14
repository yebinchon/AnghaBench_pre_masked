
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt2x00_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rt2x00_dev*,int) ;
 int FUNC_1 (struct rt2x00_dev*,int,int) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct rt2x00_dev *VAR_1,
           bool VAR_2, bool VAR_3)
{
 u8 VAR_4;

 VAR_4 = FUNC_0(VAR_1, 21);
 VAR_4 |= 0x1;
 FUNC_1(VAR_1, 21, VAR_4);
 FUNC_3(100, 200);

 if (VAR_2) {
  VAR_4 = FUNC_0(VAR_1, 4);
  FUNC_2(&VAR_4, VAR_0, 2 * VAR_3);
  FUNC_1(VAR_1, 4, VAR_4);
  FUNC_3(100, 200);
 }

 VAR_4 = FUNC_0(VAR_1, 21);
 VAR_4 &= (~0x1);
 FUNC_1(VAR_1, 21, VAR_4);
 FUNC_3(100, 200);
}
