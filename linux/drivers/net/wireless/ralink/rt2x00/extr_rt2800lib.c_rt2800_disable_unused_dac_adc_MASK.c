
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rt2x00_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rt2x00_dev*,int) ;
 int FUNC_1 (struct rt2x00_dev*,int,int) ;
 int FUNC_2 (struct rt2x00_dev*,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct rt2x00_dev *VAR_3)
{
 u16 VAR_4;
 u8 VAR_5;

 VAR_5 = FUNC_0(VAR_3, 138);
 VAR_4 = FUNC_2(VAR_3, VAR_0);
 if (FUNC_3(VAR_4, VAR_2) == 1)
  VAR_5 |= 0x20;
 if (FUNC_3(VAR_4, VAR_1) == 1)
  VAR_5 &= ~0x02;
 FUNC_1(VAR_3, 138, VAR_5);
}
