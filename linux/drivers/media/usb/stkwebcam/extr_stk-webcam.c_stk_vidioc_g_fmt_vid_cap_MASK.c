
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_pix_format {int width; int height; scalar_t__ pixelformat; int bytesperline; int sizeimage; int colorspace; int field; } ;
struct TYPE_5__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct TYPE_6__ {scalar_t__ mode; scalar_t__ palette; } ;
struct stk_camera {TYPE_2__ vsettings; } ;
struct file {int dummy; } ;
struct TYPE_7__ {scalar_t__ m; int w; int h; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 TYPE_3__* VAR_4 ;
 struct stk_camera* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_5,
  void *VAR_6, struct v4l2_format *VAR_7)
{
 struct v4l2_pix_format *VAR_8 = &VAR_7->fmt.pix;
 struct stk_camera *VAR_9 = FUNC_2(VAR_5);
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_4) &&
   VAR_4[VAR_10].m != VAR_9->vsettings.mode; VAR_10++)
  ;
 if (VAR_10 == FUNC_0(VAR_4)) {
  FUNC_1("ERROR: mode invalid\n");
  return -VAR_0;
 }
 VAR_8->width = VAR_4[VAR_10].w;
 VAR_8->height = VAR_4[VAR_10].h;
 VAR_8->field = VAR_2;
 VAR_8->colorspace = VAR_1;
 VAR_8->pixelformat = VAR_9->vsettings.palette;
 if (VAR_9->vsettings.palette == VAR_3)
  VAR_8->bytesperline = VAR_8->width;
 else
  VAR_8->bytesperline = 2 * VAR_8->width;
 VAR_8->sizeimage = VAR_8->bytesperline
    * VAR_8->height;
 return 0;
}
