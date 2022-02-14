
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int height; int width; int pixelformat; } ;
struct TYPE_3__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct em28xx_v4l2 {int vb_vidq; } ;
struct em28xx {struct em28xx_v4l2* v4l2; } ;


 int VAR_0 ;
 int FUNC_0 (struct em28xx*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 struct em28xx* FUNC_2 (struct file*) ;
 int FUNC_3 (struct file*,void*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, void *VAR_2,
    struct v4l2_format *VAR_3)
{
 struct em28xx *VAR_4 = FUNC_2(VAR_1);
 struct em28xx_v4l2 *VAR_5 = VAR_4->v4l2;

 if (FUNC_1(&VAR_5->vb_vidq))
  return -VAR_0;

 FUNC_3(VAR_1, VAR_2, VAR_3);

 return FUNC_0(VAR_4, VAR_3->fmt.pix.pixelformat,
    VAR_3->fmt.pix.width, VAR_3->fmt.pix.height);
}
