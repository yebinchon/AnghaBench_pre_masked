
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct gspca_dev*,int*) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0, s32 VAR_1)
{
 u8 VAR_2[][2] = {
  {0x71, 0x80},
  {0x70, 0x07}
 };

 VAR_2[0][1] |= VAR_1 >> 1;

 FUNC_0(VAR_0, VAR_2[0]);
 FUNC_0(VAR_0, VAR_2[1]);
}
