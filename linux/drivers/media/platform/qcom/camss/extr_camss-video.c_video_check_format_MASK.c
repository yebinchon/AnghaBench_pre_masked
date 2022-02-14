
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_pix_format_mplane {scalar_t__ pixelformat; scalar_t__ height; scalar_t__ width; scalar_t__ num_planes; scalar_t__ field; } ;
struct TYPE_6__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct TYPE_4__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct TYPE_5__ {TYPE_1__ fmt; } ;
struct camss_video {TYPE_2__ active_fmt; } ;


 int VAR_0 ;
 int FUNC_0 (struct camss_video*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_1(struct camss_video *VAR_1)
{
 struct v4l2_pix_format_mplane *VAR_2 = &VAR_1->active_fmt.fmt.pix_mp;
 struct v4l2_format VAR_3;
 struct v4l2_pix_format_mplane *VAR_4 = &VAR_3.fmt.pix_mp;
 int VAR_5;

 VAR_4->pixelformat = VAR_2->pixelformat;
 VAR_5 = FUNC_0(VAR_1, &VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_2->pixelformat != VAR_4->pixelformat ||
     VAR_2->height != VAR_4->height ||
     VAR_2->width != VAR_4->width ||
     VAR_2->num_planes != VAR_4->num_planes ||
     VAR_2->field != VAR_3.fmt.pix_mp.field)
  return -VAR_0;

 return 0;
}
