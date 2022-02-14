
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_pix_format_mplane {TYPE_1__* plane_fmt; int pixelformat; } ;
struct TYPE_4__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {scalar_t__ type; TYPE_2__ fmt; } ;
struct imgu_fmt {int fourcc; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int reserved; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct imgu_fmt* FUNC_0 (struct v4l2_format*,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_5, void *VAR_6, struct v4l2_format *VAR_7)
{
 struct v4l2_pix_format_mplane *VAR_8 = &VAR_7->fmt.pix_mp;
 const struct imgu_fmt *VAR_9;

 if (VAR_7->type == VAR_1)
  VAR_9 = FUNC_0(VAR_7, VAR_3);
 else if (VAR_7->type == VAR_2)
  VAR_9 = FUNC_0(VAR_7, VAR_4);
 else
  return -VAR_0;

 VAR_8->pixelformat = VAR_9->fourcc;

 FUNC_1(VAR_8->plane_fmt[0].reserved, 0,
        sizeof(VAR_8->plane_fmt[0].reserved));

 return 0;
}
