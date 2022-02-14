
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sd {scalar_t__ sensor; } ;
struct gspca_dev {TYPE_1__* exposure; } ;
struct TYPE_2__ {int val; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;

 if (VAR_2->sensor == VAR_0) {
  u8 VAR_3[] =
   {0xa1, 0x6e, 0x1a, 0x00, 0x40, 0x00, 0x00, 0x10};

  VAR_3[3] = VAR_1->exposure->val >> 8;
  FUNC_0(VAR_1, VAR_3);
  FUNC_1(6);
  VAR_3[2] = 0x1b;
  VAR_3[3] = VAR_1->exposure->val;
  FUNC_0(VAR_1, VAR_3);
 }
}
