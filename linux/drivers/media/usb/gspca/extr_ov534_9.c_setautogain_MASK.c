
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (struct gspca_dev*,int) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_0, s32 VAR_1)
{
 u8 VAR_2;


 VAR_2 = FUNC_0(VAR_0, 0x13);
 FUNC_1(VAR_0, 0xff, 0x00);
 if (VAR_1)
  VAR_2 |= 0x05;
 else
  VAR_2 &= 0xfa;
 FUNC_1(VAR_0, 0x13, VAR_2);
}
