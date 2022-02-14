
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct TYPE_9__ {int height; int width; scalar_t__ left; scalar_t__ top; } ;
struct v4l2_pix_format {int height; int width; int field; int pixelformat; } ;
struct TYPE_7__ {struct v4l2_pix_format pix; } ;
struct TYPE_11__ {TYPE_1__ fmt; } ;
struct TYPE_8__ {int frame_format; int active_lines; int active_pixels; } ;
struct vpfe_device {int std_index; TYPE_3__ crop; int bpp; TYPE_5__ fmt; TYPE_2__ std_info; } ;
struct TYPE_10__ {int std_id; int frame_format; int height; int width; } ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct vpfe_device*,TYPE_5__*,int *) ;
 int FUNC_2 (struct vpfe_device*) ;
 int FUNC_3 (struct vpfe_device*,char*) ;
 TYPE_4__* VAR_4 ;

__attribute__((used)) static int FUNC_4(struct vpfe_device *VAR_5,
        v4l2_std_id VAR_6)
{
 struct v4l2_pix_format *VAR_7 = &VAR_5->fmt.fmt.pix;
 int VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++) {
  if (VAR_4[VAR_8].std_id & VAR_6) {
   VAR_5->std_info.active_pixels =
     VAR_4[VAR_8].width;
   VAR_5->std_info.active_lines =
     VAR_4[VAR_8].height;
   VAR_5->std_info.frame_format =
     VAR_4[VAR_8].frame_format;
   VAR_5->std_index = VAR_8;

   break;
  }
 }

 if (VAR_8 == FUNC_0(VAR_4)) {
  FUNC_3(VAR_5, "standard not supported\n");
  return -VAR_0;
 }

 VAR_5->crop.top = VAR_5->crop.left = 0;
 VAR_5->crop.width = VAR_5->std_info.active_pixels;
 VAR_5->crop.height = VAR_5->std_info.active_lines;
 VAR_7->width = VAR_5->crop.width;
 VAR_7->height = VAR_5->crop.height;
 VAR_7->pixelformat = VAR_3;


 if (VAR_5->std_info.frame_format)
  VAR_7->field = VAR_1;
 else
  VAR_7->field = VAR_2;

 VAR_9 = FUNC_1(VAR_5, &VAR_5->fmt, &VAR_5->bpp);
 if (VAR_9)
  return VAR_9;


 VAR_5->crop.width = VAR_7->width;
 VAR_5->crop.height = VAR_7->height;

 return FUNC_2(VAR_5);
}
