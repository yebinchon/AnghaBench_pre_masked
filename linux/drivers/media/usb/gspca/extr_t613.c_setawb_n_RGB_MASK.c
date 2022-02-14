
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct sd {size_t sensor; TYPE_4__* awb; TYPE_3__* blue_balance; TYPE_2__* red_balance; TYPE_1__* gain; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;
struct TYPE_10__ {int reg80; } ;
struct TYPE_9__ {int val; } ;
struct TYPE_8__ {int val; } ;
struct TYPE_7__ {int val; } ;
struct TYPE_6__ {int val; } ;


 int FUNC_0 (struct gspca_dev*,int*,int) ;
 TYPE_5__* VAR_0 ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;
 u8 VAR_3[8] = {
  0x87, 0x00, 0x88, 0x00, 0x89, 0x00, 0x80, 0x00 };
 s32 VAR_4, VAR_5, VAR_6;

 VAR_6 = VAR_2->gain->val;

 VAR_4 = VAR_6 + VAR_2->red_balance->val;
 if (VAR_4 > 0x40)
  VAR_4 = 0x40;
 else if (VAR_4 < 0x10)
  VAR_4 = 0x10;

 VAR_5 = VAR_6 + VAR_2->blue_balance->val;
 if (VAR_5 > 0x40)
  VAR_5 = 0x40;
 else if (VAR_5 < 0x10)
  VAR_5 = 0x10;

 VAR_3[1] = VAR_4;
 VAR_3[3] = VAR_5;
 VAR_3[5] = VAR_6;
 VAR_3[7] = VAR_0[VAR_2->sensor].reg80;
 if (!VAR_2->awb->val)
  VAR_3[7] &= ~0x04;

 FUNC_0(VAR_1, VAR_3, sizeof VAR_3);
}
