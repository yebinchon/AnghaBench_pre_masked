
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sd {scalar_t__ sensor; TYPE_1__* blue_bal; TYPE_2__* red_bal; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_4__ {int val; } ;
struct TYPE_3__ {int val; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int*) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;

 if (VAR_2->sensor == VAR_0) {
  u8 VAR_3[] =
   {0xc1, 0x6e, 0x16, 0x00, 0x40, 0x00, 0x00, 0x10};


  VAR_3[3] = VAR_2->red_bal->val * 2;
  VAR_3[5] = VAR_2->blue_bal->val * 2;
  FUNC_0(VAR_1, VAR_3);
  return;
 }
 FUNC_1(VAR_1, 0x05, VAR_2->red_bal->val);

 FUNC_1(VAR_1, 0x06, VAR_2->blue_bal->val);
}
