
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ width; scalar_t__ height; int pixelformat; } ;
struct TYPE_11__ {TYPE_4__ pix; } ;
struct v4l2_format {TYPE_5__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_8__ {scalar_t__ width; scalar_t__ height; } ;
struct TYPE_7__ {scalar_t__ inhibit_htables; } ;
struct TYPE_9__ {TYPE_2__ roi; TYPE_1__ compression; } ;
struct camera_data {scalar_t__ width; scalar_t__ height; int num_frames; TYPE_6__* buffers; TYPE_3__ params; int pixelformat; } ;
struct TYPE_12__ {scalar_t__ status; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct camera_data*) ;
 int FUNC_2 (struct file*,void*,struct v4l2_format*) ;
 int FUNC_3 (struct camera_data*,int) ;
 struct camera_data* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_2, void *VAR_3,
     struct v4l2_format *VAR_4)
{
 struct camera_data *VAR_5 = FUNC_4(VAR_2);
 int VAR_6, VAR_7;

 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4);
 if(VAR_6 != 0)
  return VAR_6;

 VAR_5->pixelformat = VAR_4->fmt.pix.pixelformat;



 VAR_5->params.compression.inhibit_htables = 0;





 FUNC_0("Requested width = %d, height = %d\n",
     VAR_4->fmt.pix.width, VAR_4->fmt.pix.height);
 if (VAR_4->fmt.pix.width != VAR_5->width ||
     VAR_4->fmt.pix.height != VAR_5->height) {
  VAR_5->width = VAR_4->fmt.pix.width;
  VAR_5->height = VAR_4->fmt.pix.height;
  VAR_5->params.roi.width = VAR_4->fmt.pix.width;
  VAR_5->params.roi.height = VAR_4->fmt.pix.height;
  FUNC_1(VAR_5);
 }

 for (VAR_7 = 0; VAR_7 < VAR_5->num_frames; ++VAR_7) {
  if (VAR_5->buffers[VAR_7].status == VAR_1)
   if ((VAR_6 = FUNC_3(VAR_5, VAR_7)) < 0)
    return VAR_6;

  VAR_5->buffers[VAR_7].status = VAR_0;
 }

 return 0;
}
