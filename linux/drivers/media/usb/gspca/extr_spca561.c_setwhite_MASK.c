
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ chip_revision; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;
typedef int __u8 ;
typedef int __u16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_1, s32 VAR_2, s32 VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_1;
 __u8 VAR_5, VAR_6;
 __u16 VAR_7;


 VAR_6 = 0x20 + VAR_2 * 3 / 8;
 VAR_5 = 0x90 - VAR_2 * 5 / 8;
 if (VAR_4->chip_revision == VAR_0) {
  VAR_7 = 0x8614;
 } else {
  VAR_7 = 0x8651;
  VAR_6 += VAR_3 - 0x20;
  VAR_5 += VAR_3 - 0x20;
  FUNC_0(VAR_1, 0x8652, VAR_3 + 0x20);
  FUNC_0(VAR_1, 0x8654, VAR_3 + 0x20);
 }
 FUNC_0(VAR_1, VAR_7, VAR_6);
 FUNC_0(VAR_1, VAR_7 + 2, VAR_5);
}
