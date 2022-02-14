
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_sliced_vbi_format {int** service_lines; } ;
struct i2c_client {int dummy; } ;
struct cx25840_state {int std; int vbi_regs_offset; } ;






 int VAR_0 ;
 int FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int,int) ;
 scalar_t__ FUNC_2 (struct cx25840_state*) ;
 struct cx25840_state* FUNC_3 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_4 (struct v4l2_subdev*) ;

int FUNC_5(struct v4l2_subdev *VAR_1, struct v4l2_sliced_vbi_format *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_4(VAR_1);
 struct cx25840_state *VAR_4 = FUNC_3(VAR_1);
 int VAR_5 = !(VAR_4->std & VAR_0);
 int VAR_6 = VAR_5 ? 1 : 0;
 int VAR_7, VAR_8;
 u8 VAR_9[24];

 for (VAR_8 = 0; VAR_8 <= 23; VAR_8++)
  VAR_9[VAR_8] = 0x00;


 FUNC_0(VAR_3);



 FUNC_1(VAR_3, 0x404, 0x32);
 FUNC_1(VAR_3, 0x406, 0x13);
 if (FUNC_2(VAR_4))
  FUNC_1(VAR_3, 0x54f, VAR_6);
 else
  FUNC_1(VAR_3, 0x47f, VAR_6);

 if (VAR_5) {
  for (VAR_7 = 0; VAR_7 <= 6; VAR_7++)
   VAR_2->service_lines[0][VAR_7] =
    VAR_2->service_lines[1][VAR_7] = 0;
 } else {
  for (VAR_7 = 0; VAR_7 <= 9; VAR_7++)
   VAR_2->service_lines[0][VAR_7] =
    VAR_2->service_lines[1][VAR_7] = 0;

  for (VAR_7 = 22; VAR_7 <= 23; VAR_7++)
   VAR_2->service_lines[0][VAR_7] =
    VAR_2->service_lines[1][VAR_7] = 0;
 }

 for (VAR_7 = 7; VAR_7 <= 23; VAR_7++) {
  for (VAR_8 = 0; VAR_8 <= 1; VAR_8++) {
   switch (VAR_2->service_lines[1-VAR_8][VAR_7]) {
   case 130:
    VAR_9[VAR_7] |= 1 << (4 * VAR_8);
    break;
   case 128:
    VAR_9[VAR_7] |= 4 << (4 * VAR_8);
    break;
   case 131:
    VAR_9[VAR_7] |= 6 << (4 * VAR_8);
    break;
   case 129:
    VAR_9[VAR_7] |= 9 << (4 * VAR_8);
    break;
   }
  }
 }

 if (VAR_5) {
  for (VAR_8 = 1, VAR_7 = VAR_4->vbi_regs_offset + 0x424;
       VAR_7 <= VAR_4->vbi_regs_offset + 0x434; VAR_7++, VAR_8++)
   FUNC_1(VAR_3, VAR_7, VAR_9[6 + VAR_8]);
 } else {
  for (VAR_8 = 1, VAR_7 = VAR_4->vbi_regs_offset + 0x424;
       VAR_7 <= VAR_4->vbi_regs_offset + 0x430; VAR_7++, VAR_8++)
   FUNC_1(VAR_3, VAR_7, VAR_9[9 + VAR_8]);
  for (VAR_7 = VAR_4->vbi_regs_offset + 0x431;
       VAR_7 <= VAR_4->vbi_regs_offset + 0x434; VAR_7++)
   FUNC_1(VAR_3, VAR_7, 0);
 }

 FUNC_1(VAR_3, VAR_4->vbi_regs_offset + 0x43c, 0x16);

 if (FUNC_2(VAR_4))
  FUNC_1(VAR_3, 0x428, VAR_5 ? 0x2a : 0x22);
 else
  FUNC_1(VAR_3, 0x474, VAR_5 ? 0x2a : 0x22);
 return 0;
}
