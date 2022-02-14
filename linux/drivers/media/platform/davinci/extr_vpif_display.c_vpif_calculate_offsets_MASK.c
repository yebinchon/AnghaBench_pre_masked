
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
struct channel_obj {struct vpif_params vpifparams; struct video_obj video; struct common_obj* common; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;

__attribute__((used)) static void FUNC_0(struct channel_obj *VAR_6)
{
 struct common_obj *VAR_7 = &VAR_6->common[VAR_5];
 struct vpif_params *VAR_8 = &VAR_6->vpifparams;
 enum v4l2_field VAR_9 = VAR_7->fmt.fmt.pix.field;
 struct video_obj *VAR_10 = &VAR_6->video;
 unsigned int VAR_11, VAR_12;

 if (VAR_0 == VAR_7->fmt.fmt.pix.field) {
  if (VAR_6->vpifparams.std_info.frm_fmt)
   VAR_10->buf_field = VAR_2;
  else
   VAR_10->buf_field = VAR_1;
 } else {
  VAR_10->buf_field = VAR_7->fmt.fmt.pix.field;
 }

 VAR_12 = VAR_7->fmt.fmt.pix.sizeimage;

 VAR_11 = VAR_7->fmt.fmt.pix.bytesperline;
 if ((VAR_2 == VAR_10->buf_field) ||
     (VAR_1 == VAR_10->buf_field)) {
  VAR_7->ytop_off = 0;
  VAR_7->ybtm_off = VAR_11;
  VAR_7->ctop_off = VAR_12 / 2;
  VAR_7->cbtm_off = VAR_12 / 2 + VAR_11;
 } else if (VAR_4 == VAR_10->buf_field) {
  VAR_7->ytop_off = 0;
  VAR_7->ybtm_off = VAR_12 / 4;
  VAR_7->ctop_off = VAR_12 / 2;
  VAR_7->cbtm_off = VAR_7->ctop_off + VAR_12 / 4;
 } else if (VAR_3 == VAR_10->buf_field) {
  VAR_7->ybtm_off = 0;
  VAR_7->ytop_off = VAR_12 / 4;
  VAR_7->cbtm_off = VAR_12 / 2;
  VAR_7->ctop_off = VAR_7->cbtm_off + VAR_12 / 4;
 }

 if ((VAR_2 == VAR_10->buf_field) ||
     (VAR_1 == VAR_10->buf_field)) {
  VAR_8->video_params.storage_mode = 1;
 } else {
  VAR_8->video_params.storage_mode = 0;
 }

 if (VAR_6->vpifparams.std_info.frm_fmt == 1) {
  VAR_8->video_params.hpitch =
      VAR_7->fmt.fmt.pix.bytesperline;
 } else {
  if ((VAR_9 == VAR_0) ||
   (VAR_9 == VAR_1))
   VAR_8->video_params.hpitch =
       VAR_7->fmt.fmt.pix.bytesperline * 2;
  else
   VAR_8->video_params.hpitch =
       VAR_7->fmt.fmt.pix.bytesperline;
 }

 VAR_6->vpifparams.video_params.stdid = VAR_6->vpifparams.std_info.stdid;
}
