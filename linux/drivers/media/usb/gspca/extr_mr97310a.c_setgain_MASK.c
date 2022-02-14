
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {scalar_t__ cam_type; int sensor_type; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_2, s32 VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_2;
 u8 VAR_5;

 if (VAR_4->cam_type == VAR_0 && VAR_4->sensor_type == 1)
  FUNC_0(VAR_2, 0x0e, VAR_3);
 else if (VAR_4->cam_type == VAR_1 && VAR_4->sensor_type == 2)
  for (VAR_5 = 0x0a; VAR_5 < 0x11; VAR_5 += 2) {
   FUNC_0(VAR_2, VAR_5, VAR_3 >> 8);
   FUNC_0(VAR_2, VAR_5 + 1, VAR_3 & 0xff);
  }
 else
  FUNC_0(VAR_2, 0x10, VAR_3);
}
