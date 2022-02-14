
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ field; scalar_t__ colorspace; int pixelformat; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct deinterlace_fmt {int types; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct deinterlace_fmt* FUNC_0 (struct v4l2_format*) ;
 int FUNC_1 (struct v4l2_format*,struct deinterlace_fmt*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_5, void *VAR_6,
      struct v4l2_format *VAR_7)
{
 struct deinterlace_fmt *VAR_8;

 VAR_8 = FUNC_0(VAR_7);
 if (!VAR_8 || !(VAR_8->types & VAR_0))
  VAR_7->fmt.pix.pixelformat = VAR_4;

 if (!VAR_7->fmt.pix.colorspace)
  VAR_7->fmt.pix.colorspace = VAR_1;

 if (VAR_7->fmt.pix.field != VAR_3 &&
     VAR_7->fmt.pix.field != VAR_2)
  VAR_7->fmt.pix.field = VAR_3;

 return FUNC_1(VAR_7, VAR_8);
}
