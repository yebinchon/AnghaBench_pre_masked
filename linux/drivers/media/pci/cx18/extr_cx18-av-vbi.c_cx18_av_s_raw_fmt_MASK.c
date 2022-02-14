
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_vbi_format {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct cx18_av_state {int slicer_line_delay; } ;
struct cx18 {struct cx18_av_state av_state; } ;


 int FUNC_0 (struct cx18*) ;
 int FUNC_1 (struct cx18*,int,int) ;
 struct cx18* FUNC_2 (struct v4l2_subdev*) ;

int FUNC_3(struct v4l2_subdev *VAR_0, struct v4l2_vbi_format *VAR_1)
{
 struct cx18 *VAR_2 = FUNC_2(VAR_0);
 struct cx18_av_state *VAR_3 = &VAR_2->av_state;


 FUNC_0(VAR_2);


 FUNC_1(VAR_2, 0x47f, VAR_3->slicer_line_delay);
 FUNC_1(VAR_2, 0x404, 0x2e);
 return 0;
}
