
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0, s32 VAR_1)
{
 switch (VAR_1 & 0x30) {
 case 0x00:
  VAR_1 &= 0x0f;
  break;
 case 0x10:
  VAR_1 &= 0x0f;
  VAR_1 |= 0x30;
  break;
 case 0x20:
  VAR_1 &= 0x0f;
  VAR_1 |= 0x70;
  break;
 default:

  VAR_1 &= 0x0f;
  VAR_1 |= 0xf0;
  break;
 }
 FUNC_0(VAR_0, 0x00, VAR_1);
}
