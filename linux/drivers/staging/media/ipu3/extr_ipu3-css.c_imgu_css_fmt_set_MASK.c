
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_rect {int dummy; } ;
struct v4l2_pix_format_mplane {int dummy; } ;
struct imgu_css_pipe {struct v4l2_rect* rect; int * queue; } ;
struct imgu_css {struct imgu_css_pipe* pipes; } ;
typedef int rect_data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct imgu_css*,struct v4l2_pix_format_mplane**,struct v4l2_rect**,unsigned int) ;
 scalar_t__ FUNC_2 (int *,struct v4l2_pix_format_mplane*,int ) ;
 int FUNC_3 (struct v4l2_rect*,int ,int) ;

int FUNC_4(struct imgu_css *VAR_3,
       struct v4l2_pix_format_mplane *VAR_4[VAR_1],
       struct v4l2_rect *VAR_5[VAR_2],
       unsigned int VAR_6)
{
 struct v4l2_rect VAR_7[VAR_2];
 struct v4l2_rect *VAR_8[VAR_2];
 int VAR_9, VAR_10;
 struct imgu_css_pipe *VAR_11 = &VAR_3->pipes[VAR_6];

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  if (VAR_5[VAR_9])
   VAR_7[VAR_9] = *VAR_5[VAR_9];
  else
   FUNC_3(&VAR_7[VAR_9], 0, sizeof(VAR_7[VAR_9]));
  VAR_8[VAR_9] = &VAR_7[VAR_9];
 }
 VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_8, VAR_6);
 if (VAR_10 < 0)
  return VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
  if (FUNC_2(&VAR_11->queue[VAR_9], VAR_4[VAR_9],
     FUNC_0(VAR_9)))
   return -VAR_0;
 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  VAR_11->rect[VAR_9] = VAR_7[VAR_9];
  if (VAR_5[VAR_9])
   *VAR_5[VAR_9] = VAR_7[VAR_9];
 }

 return 0;
}
