
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sd {int sensor; int ag_cnt; int gspca_dev; } ;
struct gspca_dev {TYPE_1__* autogain; } ;
struct TYPE_2__ {scalar_t__ val; } ;


 int VAR_0 ;


 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;

 switch (VAR_2->sensor) {
 case 129:
 case 128: {
  u8 VAR_3;

  if (VAR_2->sensor == 129)
   VAR_3 = 0xc0;
  else
   VAR_3 = 0xa0;
  if (VAR_1->autogain->val)
   VAR_3 |= 0x03;
  FUNC_0(&VAR_2->gspca_dev, 0x13, VAR_3);
  return;
     }
 }
 if (VAR_1->autogain->val)
  VAR_2->ag_cnt = VAR_0;
 else
  VAR_2->ag_cnt = -1;
}
