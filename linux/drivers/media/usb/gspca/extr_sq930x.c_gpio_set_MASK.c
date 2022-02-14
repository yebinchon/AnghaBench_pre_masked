
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gspca_dev {int dummy; } ;
struct sd {int* gpio; struct gspca_dev gspca_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct sd *VAR_1, u16 VAR_2, u16 VAR_3)
{
 struct gspca_dev *VAR_4 = &VAR_1->gspca_dev;

 if (VAR_3 & 0x00ff) {
  VAR_1->gpio[0] &= ~VAR_3;
  VAR_1->gpio[0] |= VAR_2;
  FUNC_0(VAR_4, 0x0100 | VAR_0,
   ~VAR_1->gpio[0] << 8);
 }
 VAR_3 >>= 8;
 VAR_2 >>= 8;
 if (VAR_3) {
  VAR_1->gpio[1] &= ~VAR_3;
  VAR_1->gpio[1] |= VAR_2;
  FUNC_0(VAR_4, 0x0300 | VAR_0,
   ~VAR_1->gpio[1] << 8);
 }
}
