
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (struct gspca_dev*,int*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0, s32 VAR_1)
{
 u8 VAR_2[8] =
  {0x62, 0x07, 0x63, 0x03, 0x64, 0x00, 0x60, 0x09};

 if (VAR_1)
  VAR_2[3] = 0x01;

 FUNC_0(VAR_0, VAR_2, sizeof VAR_2);
}
