
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct v4l2_subdev_frame_size_enum {scalar_t__ max_width; scalar_t__ max_height; scalar_t__ min_width; scalar_t__ min_height; scalar_t__ index; int which; int code; scalar_t__ pad; } ;
struct TYPE_6__ {scalar_t__ width; scalar_t__ height; int colorspace; int field; int pixelformat; } ;
struct TYPE_7__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct cal_fmt {int code; int fourcc; } ;
struct TYPE_8__ {scalar_t__ width; scalar_t__ height; int colorspace; int field; } ;
struct TYPE_9__ {TYPE_3__ pix; } ;
struct TYPE_10__ {TYPE_4__ fmt; } ;
struct cal_ctx {TYPE_5__ v_fmt; int sensor; struct cal_fmt** active_fmt; } ;


 int VAR_0 ;
 int FUNC_0 (struct cal_ctx*,struct cal_fmt const*,struct v4l2_format*) ;
 int FUNC_1 (int,struct cal_ctx*,char*,int ) ;
 int VAR_1 ;
 struct cal_fmt* FUNC_2 (struct cal_ctx*,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int ,int *,struct v4l2_subdev_frame_size_enum*) ;
 struct cal_ctx* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_3, void *VAR_4,
          struct v4l2_format *VAR_5)
{
 struct cal_ctx *VAR_6 = FUNC_4(VAR_3);
 const struct cal_fmt *VAR_7;
 struct v4l2_subdev_frame_size_enum VAR_8;
 int VAR_9, VAR_10;

 VAR_7 = FUNC_2(VAR_6, VAR_5->fmt.pix.pixelformat);
 if (!VAR_7) {
  FUNC_1(3, VAR_6, "Fourcc format (0x%08x) not found.\n",
   VAR_5->fmt.pix.pixelformat);


  VAR_7 = VAR_6->active_fmt[0];
  VAR_5->fmt.pix.pixelformat = VAR_7->fourcc;
 }

 VAR_5->fmt.pix.field = VAR_6->v_fmt.fmt.pix.field;


 VAR_9 = 0;
 VAR_10 = 0;
 VAR_8.pad = 0;
 VAR_8.code = VAR_7->code;
 VAR_8.which = VAR_0;
 for (VAR_8.index = 0; ; VAR_8.index++) {
  VAR_9 = FUNC_3(VAR_6->sensor, VAR_2, VAR_1,
           ((void*)0), &VAR_8);
  if (VAR_9)
   break;

  if ((VAR_5->fmt.pix.width == VAR_8.max_width) &&
      (VAR_5->fmt.pix.height == VAR_8.max_height)) {
   VAR_10 = 1;
   break;
  } else if ((VAR_5->fmt.pix.width >= VAR_8.min_width) &&
    (VAR_5->fmt.pix.width <= VAR_8.max_width) &&
    (VAR_5->fmt.pix.height >= VAR_8.min_height) &&
    (VAR_5->fmt.pix.height <= VAR_8.max_height)) {
   VAR_10 = 1;
   break;
  }
 }

 if (!VAR_10) {

  VAR_5->fmt.pix.width = VAR_6->v_fmt.fmt.pix.width;
  VAR_5->fmt.pix.height = VAR_6->v_fmt.fmt.pix.height;
 }





 VAR_5->fmt.pix.colorspace = VAR_6->v_fmt.fmt.pix.colorspace;
 return FUNC_0(VAR_6, VAR_7, VAR_5);
}
