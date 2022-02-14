
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sd {int sensor; TYPE_1__* gamma; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_2__ {int val; } ;


 int VAR_0 ;






 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int FUNC_0 (struct gspca_dev*,int,int*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_6;
 int VAR_8, VAR_9;
 u8 VAR_10[17];
 const u8 *VAR_11;
 static const u8 VAR_12[17] = {
  0x00, 0x14, 0x1c, 0x1c, 0x1c, 0x1c, 0x1b, 0x1a,
  0x18, 0x13, 0x10, 0x0e, 0x08, 0x07, 0x04, 0x02, 0x00
 };

 switch (VAR_7->sensor) {
 case 133:
  VAR_11 = VAR_2;
  break;
 case 131:
 case 130:
 case 129:
  VAR_11 = VAR_3;
  break;
 case 132:
  VAR_11 = VAR_4;
  break;
 case 128:
  VAR_11 = VAR_5;
  break;
 default:
  VAR_11 = VAR_1;
  break;
 }

 VAR_9 = VAR_7->gamma->val;
 for (VAR_8 = 0; VAR_8 < sizeof VAR_10; VAR_8++)
  VAR_10[VAR_8] = VAR_11[VAR_8]
   + VAR_12[VAR_8] * (VAR_9 - VAR_0) / 32;
 FUNC_0(VAR_6, 0x20, VAR_10, sizeof VAR_10);
}
