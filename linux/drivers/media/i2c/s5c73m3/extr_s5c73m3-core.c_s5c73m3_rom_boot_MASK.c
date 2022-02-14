
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct s5c73m3 {int isp_ready; struct v4l2_subdev sensor_sd; } ;


 int FUNC_0 (int const**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct s5c73m3*) ;
 int FUNC_3 (struct s5c73m3*,int,int,int) ;
 int FUNC_4 (struct s5c73m3*,int const,int const) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static int FUNC_7(struct s5c73m3 *VAR_0, bool VAR_1)
{
 static const u32 VAR_2[][2] = {
  { 0x3100010c, 0x0044 },
  { 0x31000108, 0x000d },
  { 0x31000304, 0x0001 },
  { 0x00010000, 0x5800 },
  { 0x00010002, 0x0002 },
  { 0x31000000, 0x0001 },
  { 0x30100014, 0x1b85 },
  { 0x30100010, 0x230c }
 };
 struct v4l2_subdev *VAR_3 = &VAR_0->sensor_sd;
 int VAR_4, VAR_5;


 VAR_5 = FUNC_4(VAR_0, 0x30000004, 0xffff);
 if (VAR_5 < 0)
  return VAR_5;
 FUNC_5(400, 450);


 VAR_5 = FUNC_3(VAR_0, 0x0c, 100, 4);
 if (VAR_5 < 0) {
  FUNC_6(VAR_3, "Booting failed: %d\n", VAR_5);
  return VAR_5;
 }

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++) {
  VAR_5 = FUNC_4(VAR_0, VAR_2[VAR_4][0], VAR_2[VAR_4][1]);
  if (VAR_5 < 0)
   return VAR_5;
 }
 FUNC_1(200);


 VAR_5 = FUNC_3(VAR_0, 0x230e, 1000, 150);
 if (VAR_5 < 0) {
  FUNC_6(VAR_3, "Binary read failed: %d\n", VAR_5);
  return VAR_5;
 }


 VAR_5 = FUNC_4(VAR_0, 0x30000004, 0xfffd);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_4(VAR_0, 0x301000a4, 0x0183);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_4(VAR_0, 0x30000004, 0xffff);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_0->isp_ready = 1;

 return FUNC_2(VAR_0);
}
