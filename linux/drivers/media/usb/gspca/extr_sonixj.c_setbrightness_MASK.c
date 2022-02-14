
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sd {int sensor; void* exposure; TYPE_1__* brightness; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_2__ {int val; } ;
 void* FUNC_0 (struct gspca_dev*,unsigned int) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;
 unsigned int VAR_2;
 int VAR_3 = VAR_1->brightness->val;
 u8 VAR_4;

 VAR_4 = (VAR_3 - 0x80) >> 2;
 switch (VAR_1->sensor) {
 case 135:
  if (VAR_4 > 0x1f)
   VAR_4 = 0;
  break;
 case 133:
  VAR_2 = VAR_3 << 12;
  if (VAR_2 > 0x002dc6c0)
   VAR_2 = 0x002dc6c0;
  else if (VAR_2 < 0x02a0)
   VAR_2 = 0x02a0;
  VAR_1->exposure = FUNC_0(VAR_0, VAR_2);
  break;
 case 132:
 case 130:
  VAR_2 = VAR_3 << 4;
  VAR_1->exposure = FUNC_0(VAR_0, VAR_2);
  break;
 case 131:
  VAR_2 = VAR_3 << 2;
  VAR_1->exposure = FUNC_0(VAR_0, VAR_2);
  break;
 case 134:
  VAR_2 = VAR_3;
  VAR_1->exposure = FUNC_0(VAR_0, VAR_2);
  return;
 case 129:
  VAR_2 = VAR_3 << 2;
  VAR_1->exposure = FUNC_0(VAR_0, VAR_2);
  return;
 case 128:
  VAR_2 = VAR_3 << 2;
  VAR_1->exposure = FUNC_0(VAR_0, VAR_2);
  return;
 }

 FUNC_1(VAR_0, 0x96, VAR_4);
}
