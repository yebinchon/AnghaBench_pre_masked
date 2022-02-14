
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct s5c73m3 {struct v4l2_subdev sensor_sd; } ;


 int FUNC_0 (struct s5c73m3*) ;
 int FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct s5c73m3*) ;
 int FUNC_3 (struct s5c73m3*,int,int,int) ;
 int FUNC_4 (struct s5c73m3*,int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static int FUNC_7(struct s5c73m3 *VAR_1, bool VAR_2)
{
 struct v4l2_subdev *VAR_3 = &VAR_1->sensor_sd;
 int VAR_4;


 VAR_4 = FUNC_4(VAR_1, 0x30000004, 0xffff);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_5(400, 500);


 VAR_4 = FUNC_3(VAR_1, 0x0c, 100, 3);
 if (VAR_4 < 0) {
  FUNC_6(VAR_3, "booting failed: %d\n", VAR_4);
  return VAR_4;
 }


 VAR_4 = FUNC_4(VAR_1, 0x30100014, 0x2146);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_4(VAR_1, 0x30100010, 0x210c);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_5(200, 250);


 VAR_4 = FUNC_3(VAR_1, 0x210d, 100, 300);
 if (VAR_4 < 0)
  FUNC_6(VAR_3, "SPI not ready: %d\n", VAR_4);


 if (VAR_2)
  FUNC_1(VAR_3);


 VAR_4 = FUNC_4(VAR_1, 0x30000004, 0xfffd);
 if (VAR_4 < 0)
  return VAR_4;


 VAR_4 = FUNC_4(VAR_1, 0x301000a4, 0x0183);
 if (VAR_4 < 0)
  return VAR_4;


 VAR_4 = FUNC_4(VAR_1, 0x30000004, 0xffff);
 if (VAR_4 < 0 || !VAR_2)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 if (VAR_2 && VAR_0) {
  VAR_4 = FUNC_0(VAR_1);
  VAR_0 = 0;
 }

 return VAR_4;
}
