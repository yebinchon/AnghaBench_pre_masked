
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sd {int sensor; TYPE_1__* brightness; } ;
struct gspca_dev {int dummy; } ;
typedef int __u8 ;
struct TYPE_4__ {int sensor_addr; } ;
struct TYPE_3__ {int val; } ;






 int FUNC_0 (struct gspca_dev*,int*) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;

 switch (VAR_2->sensor) {
 case 131:
 case 130: {
  __u8 VAR_3[] =
   {0xa0, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x10};


  VAR_3[1] = VAR_0[VAR_2->sensor].sensor_addr;
  VAR_3[3] = VAR_2->brightness->val;
  FUNC_0(VAR_1, VAR_3);
  break;
 }
 case 129:
 case 128: {
  __u8 VAR_4[] =
   {0xb0, 0x40, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x16};
  __u8 VAR_5[] =
   {0xa0, 0x40, 0x11, 0x01, 0x00, 0x00, 0x00, 0x16};


  if (VAR_2->sensor == 129) {
   VAR_4[2] = 7;
   VAR_5[2] = 0x13;
  }

  if (VAR_2->brightness->val < 127) {

   VAR_4[3] = 0x01;

   VAR_4[4] = 127 - VAR_2->brightness->val;
  } else
   VAR_4[4] = VAR_2->brightness->val - 127;

  FUNC_0(VAR_1, VAR_4);
  FUNC_0(VAR_1, VAR_5);
  break;
 }
 default:
  break;
 }
}
