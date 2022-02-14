
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ if_type; } ;
struct vpif_channel_config_params {int capture_format; scalar_t__ hd_sd; int stdid; int width; int height; scalar_t__ frm_fmt; int dv_timings; } ;
struct TYPE_7__ {int hpitch; scalar_t__ storage_mode; } ;
struct TYPE_6__ {int data_sz; } ;
struct vpif_params {TYPE_3__ iface; struct vpif_channel_config_params std_info; TYPE_2__ video_params; TYPE_1__ params; } ;
struct video_obj {int stdid; int dv_timings; } ;
struct v4l2_pix_format {int width; int height; scalar_t__ field; scalar_t__ pixelformat; int sizeimage; int bytesperline; int colorspace; } ;
struct TYPE_9__ {struct v4l2_pix_format pix; } ;
struct TYPE_10__ {int type; TYPE_4__ fmt; } ;
struct common_obj {int width; int height; TYPE_5__ fmt; } ;
struct channel_obj {struct vpif_params vpifparams; struct video_obj video; struct common_obj* common; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct vpif_channel_config_params*,struct vpif_channel_config_params const*,int) ;
 int FUNC_2 (struct vpif_channel_config_params*,int ,int) ;
 struct vpif_channel_config_params* VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int,int ,char*) ;

__attribute__((used)) static int FUNC_4(struct channel_obj *VAR_16)
{
 struct common_obj *VAR_17 = &VAR_16->common[VAR_12];
 struct vpif_params *VAR_18 = &VAR_16->vpifparams;
 const struct vpif_channel_config_params *VAR_19;
 struct vpif_channel_config_params *VAR_20 = &VAR_18->std_info;
 struct video_obj *VAR_21 = &VAR_16->video;
 int VAR_22;
 struct v4l2_pix_format *VAR_23 = &VAR_17->fmt.fmt.pix;

 FUNC_3(2, VAR_13, "vpif_update_std_info\n");





 if (VAR_23->width && VAR_23->height) {
  if (VAR_23->field == VAR_4 ||
      VAR_23->field == VAR_6)
   VAR_23->field = VAR_6;

  VAR_18->iface.if_type = VAR_10;
  if (VAR_23->pixelformat == VAR_9 ||
      VAR_23->pixelformat == VAR_8)
   VAR_18->iface.if_type = VAR_11;

  if (VAR_23->pixelformat == VAR_9)
   VAR_18->params.data_sz = 1;





  if (VAR_18->iface.if_type == VAR_11) {
   FUNC_2(VAR_20, 0, sizeof(struct vpif_channel_config_params));
   VAR_18->std_info.capture_format = 1;
   return 0;
  }
 }

 for (VAR_22 = 0; VAR_22 < VAR_15; VAR_22++) {
  VAR_19 = &VAR_14[VAR_22];
  if (VAR_19->hd_sd == 0) {
   FUNC_3(2, VAR_13, "SD format\n");
   if (VAR_19->stdid & VAR_21->stdid) {
    FUNC_1(VAR_20, VAR_19, sizeof(*VAR_19));
    break;
   }
  } else {
   FUNC_3(2, VAR_13, "HD format\n");
   if (!FUNC_0(&VAR_19->dv_timings, &VAR_21->dv_timings,
    sizeof(VAR_21->dv_timings))) {
    FUNC_1(VAR_20, VAR_19, sizeof(*VAR_19));
    break;
   }
  }
 }


 if (VAR_22 == VAR_15)
  return -VAR_0;

 VAR_17->fmt.fmt.pix.width = VAR_20->width;
 VAR_17->width = VAR_20->width;
 VAR_17->fmt.fmt.pix.height = VAR_20->height;
 VAR_17->height = VAR_20->height;
 VAR_17->fmt.fmt.pix.sizeimage = VAR_17->height * VAR_17->width * 2;
 VAR_17->fmt.fmt.pix.bytesperline = VAR_20->width;
 VAR_18->video_params.hpitch = VAR_20->width;
 VAR_18->video_params.storage_mode = VAR_20->frm_fmt;

 if (VAR_21->stdid)
  VAR_17->fmt.fmt.pix.colorspace = VAR_3;
 else
  VAR_17->fmt.fmt.pix.colorspace = VAR_2;

 if (VAR_16->vpifparams.std_info.frm_fmt)
  VAR_17->fmt.fmt.pix.field = VAR_6;
 else
  VAR_17->fmt.fmt.pix.field = VAR_5;

 if (VAR_16->vpifparams.iface.if_type == VAR_11)
  VAR_17->fmt.fmt.pix.pixelformat = VAR_8;
 else
  VAR_17->fmt.fmt.pix.pixelformat = VAR_7;

 VAR_17->fmt.type = VAR_1;

 return 0;
}
