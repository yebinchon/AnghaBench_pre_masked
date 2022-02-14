
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_sliced_vbi_format {int** service_lines; } ;
struct cx18_av_state {int std; int slicer_line_delay; } ;
struct cx18 {struct cx18_av_state av_state; } ;






 int VAR_0 ;
 int FUNC_0 (struct cx18*) ;
 int FUNC_1 (struct cx18*,int,int) ;
 struct cx18* FUNC_2 (struct v4l2_subdev*) ;

int FUNC_3(struct v4l2_subdev *VAR_1, struct v4l2_sliced_vbi_format *VAR_2)
{
 struct cx18 *VAR_3 = FUNC_2(VAR_1);
 struct cx18_av_state *VAR_4 = &VAR_3->av_state;
 int VAR_5 = !(VAR_4->std & VAR_0);
 int VAR_6, VAR_7;
 u8 VAR_8[24];

 for (VAR_7 = 0; VAR_7 <= 23; VAR_7++)
  VAR_8[VAR_7] = 0x00;


 FUNC_0(VAR_3);


 FUNC_1(VAR_3, 0x404, 0x32);
 FUNC_1(VAR_3, 0x406, 0x13);
 FUNC_1(VAR_3, 0x47f, VAR_4->slicer_line_delay);


 if (VAR_5) {
  for (VAR_6 = 0; VAR_6 <= 6; VAR_6++)
   VAR_2->service_lines[0][VAR_6] =
    VAR_2->service_lines[1][VAR_6] = 0;
 } else {
  for (VAR_6 = 0; VAR_6 <= 9; VAR_6++)
   VAR_2->service_lines[0][VAR_6] =
    VAR_2->service_lines[1][VAR_6] = 0;

  for (VAR_6 = 22; VAR_6 <= 23; VAR_6++)
   VAR_2->service_lines[0][VAR_6] =
    VAR_2->service_lines[1][VAR_6] = 0;
 }


 for (VAR_6 = 7; VAR_6 <= 23; VAR_6++) {
  for (VAR_7 = 0; VAR_7 <= 1; VAR_7++) {
   switch (VAR_2->service_lines[1-VAR_7][VAR_6]) {
   case 130:
    VAR_8[VAR_6] |= 1 << (4 * VAR_7);
    break;
   case 128:
    VAR_8[VAR_6] |= 4 << (4 * VAR_7);
    break;
   case 131:
    VAR_8[VAR_6] |= 6 << (4 * VAR_7);
    break;
   case 129:
    VAR_8[VAR_6] |= 9 << (4 * VAR_7);
    break;
   }
  }
 }

 if (VAR_5) {
  for (VAR_7 = 1, VAR_6 = 0x424; VAR_6 <= 0x434; VAR_6++, VAR_7++)
   FUNC_1(VAR_3, VAR_6, VAR_8[6 + VAR_7]);
 } else {
  for (VAR_7 = 1, VAR_6 = 0x424; VAR_6 <= 0x430; VAR_6++, VAR_7++)
   FUNC_1(VAR_3, VAR_6, VAR_8[9 + VAR_7]);
  for (VAR_6 = 0x431; VAR_6 <= 0x434; VAR_6++)
   FUNC_1(VAR_3, VAR_6, 0);
 }

 FUNC_1(VAR_3, 0x43c, 0x16);

 FUNC_1(VAR_3, 0x474, VAR_5 ? 38 : 26);
 return 0;
}
