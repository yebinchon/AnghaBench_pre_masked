
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {int sensor; TYPE_1__* illum; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_2__ {int val; } ;




 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;

 switch (VAR_1->sensor) {
 case 129:
  FUNC_0(VAR_0, 0x02,
   VAR_1->illum->val ? 0x64 : 0x60);
  break;
 case 128:
  FUNC_0(VAR_0, 0x02,
   VAR_1->illum->val ? 0x77 : 0x74);



  break;
 }
}
