
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct s5c73m3 {struct v4l2_subdev sensor_sd; } ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct s5c73m3*,int ,int ) ;
 int FUNC_2 (struct s5c73m3*,int,int*) ;
 int FUNC_3 (struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_4(struct s5c73m3 *VAR_4)
{
 struct v4l2_subdev *VAR_5 = &VAR_4->sensor_sd;
 u16 VAR_6 = VAR_1;
 int VAR_7;
 int VAR_8 = 0;

 FUNC_3(VAR_5, "Updating F-ROM firmware.\n");
 do {
  if (VAR_6 == VAR_1) {
   VAR_7 = FUNC_1(VAR_4, VAR_0, 0);
   if (VAR_7 < 0)
    return VAR_7;
  }

  VAR_7 = FUNC_2(VAR_4, 0x00095906, &VAR_6);
  if (VAR_7 < 0)
   return VAR_7;
  switch (VAR_6) {
  case 129:
   FUNC_3(VAR_5, "Updating F-ROM firmware failed.\n");
   return -VAR_2;
  case 128:
   FUNC_3(VAR_5, "Updating F-ROM firmware finished.\n");
   return 0;
  }
  ++VAR_8;
  FUNC_0(20);
 } while (VAR_8 < 500);

 FUNC_3(VAR_5, "Updating F-ROM firmware timed-out.\n");
 return -VAR_3;
}
