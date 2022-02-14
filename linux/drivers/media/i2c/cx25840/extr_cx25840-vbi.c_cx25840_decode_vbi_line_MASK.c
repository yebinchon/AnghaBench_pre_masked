
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_decode_vbi_line {int* p; int line; int type; int is_second_field; } ;
struct cx25840_state {scalar_t__ vbi_line_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,int*) ;
 int FUNC_1 (int) ;
 struct cx25840_state* FUNC_2 (struct v4l2_subdev*) ;

int FUNC_3(struct v4l2_subdev *VAR_4, struct v4l2_decode_vbi_line *VAR_5)
{
 struct cx25840_state *VAR_6 = FUNC_2(VAR_4);
 u8 *VAR_7 = VAR_5->p;
 int VAR_8, VAR_9, VAR_10, VAR_11 = 0;

 if (VAR_7[0] || VAR_7[1] != 0xff || VAR_7[2] != 0xff ||
   (VAR_7[3] != 0x55 && VAR_7[3] != 0x91)) {
  VAR_5->line = VAR_5->type = 0;
  return 0;
 }

 VAR_7 += 4;
 VAR_8 = VAR_7[-1];
 VAR_9 = VAR_7[0] & 0xf;
 VAR_10 = VAR_7[2] & 0x3f;
 VAR_10 += VAR_6->vbi_line_offset;
 VAR_7 += 4;

 switch (VAR_9) {
 case 1:
  VAR_9 = VAR_1;
  break;
 case 4:
  VAR_9 = VAR_3;
  break;
 case 6:
  VAR_9 = VAR_0;
  VAR_11 = !FUNC_1(VAR_7[0]) || !FUNC_1(VAR_7[1]);
  break;
 case 9:
  VAR_9 = VAR_2;
  if (FUNC_0(VAR_7, VAR_7) != 0)
   VAR_11 = 1;
  break;
 default:
  VAR_9 = 0;
  VAR_11 = 1;
  break;
 }

 VAR_5->type = VAR_11 ? 0 : VAR_9;
 VAR_5->line = VAR_11 ? 0 : VAR_10;
 VAR_5->is_second_field = VAR_11 ? 0 : (VAR_8 == 0x55);
 VAR_5->p = VAR_7;
 return 0;
}
