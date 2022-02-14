
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pixelformat; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct most_video_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct v4l2_format*) ;

__attribute__((used)) static int FUNC_1(struct most_video_dev *VAR_3, unsigned int VAR_4,
      struct v4l2_format *VAR_5)
{
 if (VAR_5->fmt.pix.pixelformat != VAR_1)
  return -VAR_0;

 if (VAR_4 == VAR_2)
  return 0;

 FUNC_0(VAR_5);

 return 0;
}
