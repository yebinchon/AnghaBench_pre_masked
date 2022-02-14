
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_sliced_vbi_format {int** service_lines; int service_set; } ;
struct i2c_client {int dummy; } ;
struct cx25840_state {int std; int vbi_regs_offset; } ;






 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int) ;
 int FUNC_1 (int**,int ,int) ;
 struct cx25840_state* FUNC_2 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;

int FUNC_4(struct v4l2_subdev *VAR_1, struct v4l2_sliced_vbi_format *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_3(VAR_1);
 struct cx25840_state *VAR_4 = FUNC_2(VAR_1);
 static const u16 VAR_5[] = {
  0, 130, 0,
  0, 128, 0,
  131,
  0, 0, 129, 0, 0,
  0, 0, 0, 0
 };
 int VAR_6 = !(VAR_4->std & VAR_0);
 int VAR_7;

 FUNC_1(VAR_2->service_lines, 0, sizeof(VAR_2->service_lines));
 VAR_2->service_set = 0;


 if ((FUNC_0(VAR_3, 0x404) & 0x10) == 0)
  return 0;

 if (VAR_6) {
  for (VAR_7 = 7; VAR_7 <= 23; VAR_7++) {
   u8 VAR_8 = FUNC_0(VAR_3,
     VAR_4->vbi_regs_offset + 0x424 + VAR_7 - 7);

   VAR_2->service_lines[0][VAR_7] = VAR_5[VAR_8 >> 4];
   VAR_2->service_lines[1][VAR_7] = VAR_5[VAR_8 & 0xf];
   VAR_2->service_set |= VAR_2->service_lines[0][VAR_7] |
          VAR_2->service_lines[1][VAR_7];
  }
 } else {
  for (VAR_7 = 10; VAR_7 <= 21; VAR_7++) {
   u8 VAR_9 = FUNC_0(VAR_3,
    VAR_4->vbi_regs_offset + 0x424 + VAR_7 - 10);

   VAR_2->service_lines[0][VAR_7] = VAR_5[VAR_9 >> 4];
   VAR_2->service_lines[1][VAR_7] = VAR_5[VAR_9 & 0xf];
   VAR_2->service_set |= VAR_2->service_lines[0][VAR_7] |
          VAR_2->service_lines[1][VAR_7];
  }
 }
 return 0;
}
