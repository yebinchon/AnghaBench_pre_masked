
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct gspca_dev {TYPE_1__* gain; } ;
struct TYPE_2__ {int val; } ;


 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0)
{
 u8 VAR_1, VAR_2;

 if (VAR_0->gain->val < 32) {
  VAR_1 = VAR_0->gain->val;
  VAR_2 = 0;
 } else {
  VAR_1 = 31;
  VAR_2 = VAR_0->gain->val - 31;
 }

 FUNC_0(VAR_0, 0xff, 0x03);
 FUNC_0(VAR_0, 0x10, VAR_1);
 FUNC_0(VAR_0, 0x12, VAR_2);


 FUNC_0(VAR_0, 0x11, 0x01);
}
