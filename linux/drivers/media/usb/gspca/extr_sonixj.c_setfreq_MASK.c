
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sd {int sensor; TYPE_1__* freq; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_2__ {int val; } ;




 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;

 if (VAR_2->sensor == VAR_0) {
  u8 VAR_3;

  VAR_3 = 0xdf;
  switch (VAR_2->freq->val) {
  case 0:
   FUNC_0(VAR_1, 0x13, VAR_3 | 0x20);
   break;
  case 1:
   FUNC_0(VAR_1, 0x13, VAR_3);
   FUNC_0(VAR_1, 0x3b, 0x0a);
   break;
  case 2:
   FUNC_0(VAR_1, 0x13, VAR_3);
   FUNC_0(VAR_1, 0x3b, 0x02);
   break;
  }
 } else {
  u8 VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;


  switch (VAR_2->sensor) {
  case 129:
   VAR_4 = 0x08;
   VAR_6 = 0x01;
   break;
  case 128:
   VAR_4 = 0x11;
   VAR_6 = 0x81;
   break;
  }

  switch (VAR_2->freq->val) {
  case 0:
   break;
  case 1:
   VAR_4 |= 0x80;
   VAR_5 = 0xac;
   VAR_6 |= 0x04;
   break;
  case 2:
   VAR_4 |= 0x80;
   VAR_6 |= 0x04;
   break;
  }
  FUNC_0(VAR_1, 0x2a, VAR_4);
  FUNC_0(VAR_1, 0x2b, VAR_5);
  FUNC_0(VAR_1, 0x2d, VAR_6);
 }
}
