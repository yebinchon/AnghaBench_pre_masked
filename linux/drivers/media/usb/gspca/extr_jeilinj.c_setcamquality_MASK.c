
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gspca_dev*,int*) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_3, s32 VAR_4)
{
 u8 VAR_5[][2] = {
  {0x71, 0x1E},
  {0x70, 0x06}
 };
 u8 VAR_6;


 VAR_6 = ((VAR_1 - VAR_4) * VAR_0)
  / (VAR_1 - VAR_2);
 VAR_5[0][1] += VAR_6;

 FUNC_0(VAR_3, VAR_5[0]);
 FUNC_0(VAR_3, VAR_5[1]);
}
