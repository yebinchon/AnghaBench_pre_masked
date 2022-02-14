
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fmtdesc {size_t index; int pixelformat; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int fourcc; scalar_t__ planar; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5,
     struct v4l2_fmtdesc *VAR_6)
{
 if (VAR_3 > 0) {
  FUNC_0("V4L2_BUF_TYPE_VIDEO_OVERLAY: no_overlay\n");
  return -VAR_0;
 }

 if ((VAR_6->index >= VAR_1) || VAR_2[VAR_6->index].planar)
  return -VAR_0;

 VAR_6->pixelformat = VAR_2[VAR_6->index].fourcc;

 return 0;
}
