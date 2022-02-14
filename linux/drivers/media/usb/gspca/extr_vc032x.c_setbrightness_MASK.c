
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct gspca_dev*,int,int*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0, s32 VAR_1)
{
 u8 VAR_2;

 VAR_2 = VAR_1;
 if (VAR_2 >= 0x80)
  VAR_2 &= 0x7f;
 else
  VAR_2 = 0xff ^ VAR_2;
 FUNC_0(VAR_0, 0x98, &VAR_2, 1);
}
