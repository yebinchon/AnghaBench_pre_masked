
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int numerator; int denominator; } ;
struct v4l2_frmivalenum {int index; TYPE_1__ discrete; int type; } ;
struct tw686x_video_channel {int video_standard; } ;
struct file {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 struct tw686x_video_channel* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
          struct v4l2_frmivalenum *VAR_4)
{
 struct tw686x_video_channel *VAR_5 = FUNC_2(VAR_2);
 int VAR_6 = FUNC_1(VAR_5->video_standard);
 int VAR_7 = FUNC_0(VAR_6, 2);

 if (VAR_4->index >= VAR_7)
  return -VAR_0;

 VAR_4->type = VAR_1;
 VAR_4->discrete.numerator = 1;
 if (VAR_4->index < (VAR_7 - 1))
  VAR_4->discrete.denominator = (VAR_4->index + 1) * 2;
 else
  VAR_4->discrete.denominator = VAR_6;
 return 0;
}
