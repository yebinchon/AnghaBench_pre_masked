
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int frm_fmt; int stdid; } ;
struct TYPE_9__ {int storage_mode; int hpitch; int stdid; } ;
struct vpif_params {TYPE_5__ std_info; TYPE_4__ video_params; } ;
struct video_obj {scalar_t__ buf_field; } ;
struct TYPE_6__ {int field; unsigned int sizeimage; unsigned int bytesperline; } ;
struct TYPE_7__ {TYPE_1__ pix; } ;
struct TYPE_8__ {TYPE_2__ fmt; } ;
struct common_obj {unsigned int ytop_off; unsigned int ybtm_off; unsigned int ctop_off; unsigned int cbtm_off; TYPE_3__ fmt; } ;
struct channel_obj {struct vpif_params vpifparams; struct common_obj* common; struct video_obj video; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ,char*) ;

__attribute__((used)) static void FUNC_1(struct channel_obj *VAR_7)
{
 unsigned int VAR_8, VAR_9;
 struct video_obj *VAR_10 = &(VAR_7->video);
 struct vpif_params *VAR_11 = &VAR_7->vpifparams;
 struct common_obj *VAR_12 = &VAR_7->common[VAR_5];
 enum v4l2_field VAR_13 = VAR_12->fmt.fmt.pix.field;

 FUNC_0(2, VAR_6, "vpif_calculate_offsets\n");

 if (VAR_0 == VAR_13) {
  if (VAR_11->std_info.frm_fmt)
   VAR_10->buf_field = VAR_2;
  else
   VAR_10->buf_field = VAR_1;
 } else
  VAR_10->buf_field = VAR_12->fmt.fmt.pix.field;

 VAR_9 = VAR_12->fmt.fmt.pix.sizeimage;

 VAR_8 = VAR_12->fmt.fmt.pix.bytesperline;

 if ((VAR_2 == VAR_10->buf_field) ||
     (VAR_1 == VAR_10->buf_field)) {

  VAR_12->ytop_off = 0;
  VAR_12->ybtm_off = VAR_8;
  VAR_12->ctop_off = VAR_9 / 2;
  VAR_12->cbtm_off = VAR_9 / 2 + VAR_8;
 } else if (VAR_4 == VAR_10->buf_field) {

  VAR_12->ytop_off = 0;
  VAR_12->ybtm_off = VAR_9 / 4;
  VAR_12->ctop_off = VAR_9 / 2;
  VAR_12->cbtm_off = VAR_12->ctop_off + VAR_9 / 4;
 } else if (VAR_3 == VAR_10->buf_field) {

  VAR_12->ybtm_off = 0;
  VAR_12->ytop_off = VAR_9 / 4;
  VAR_12->cbtm_off = VAR_9 / 2;
  VAR_12->ctop_off = VAR_12->cbtm_off + VAR_9 / 4;
 }
 if ((VAR_2 == VAR_10->buf_field) ||
     (VAR_1 == VAR_10->buf_field))
  VAR_11->video_params.storage_mode = 1;
 else
  VAR_11->video_params.storage_mode = 0;

 if (1 == VAR_11->std_info.frm_fmt)
  VAR_11->video_params.hpitch =
      VAR_12->fmt.fmt.pix.bytesperline;
 else {
  if ((VAR_13 == VAR_0)
      || (VAR_13 == VAR_1))
   VAR_11->video_params.hpitch =
       VAR_12->fmt.fmt.pix.bytesperline * 2;
  else
   VAR_11->video_params.hpitch =
       VAR_12->fmt.fmt.pix.bytesperline;
 }

 VAR_7->vpifparams.video_params.stdid = VAR_11->std_info.stdid;
}
