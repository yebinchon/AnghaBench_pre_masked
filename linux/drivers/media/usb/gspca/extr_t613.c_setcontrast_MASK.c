
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct gspca_dev*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0, s32 VAR_1)
{
 u16 VAR_2;

 if (VAR_1 < 7)
  VAR_2 = 0x8ea9 - VAR_1 * 0x200;
 else
  VAR_2 = 0x00a9 + (VAR_1 - 7) * 0x200;

 FUNC_0(VAR_0, VAR_2);
}
