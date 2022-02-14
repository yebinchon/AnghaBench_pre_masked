
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vpif_channel_config_params {int width; int height; scalar_t__ frm_fmt; } ;
struct vpif_params {struct vpif_channel_config_params std_info; } ;
struct TYPE_6__ {int height; } ;
struct TYPE_7__ {TYPE_1__ bt; } ;
struct video_obj {scalar_t__ stdid; TYPE_2__ dv_timings; } ;
struct TYPE_8__ {int width; int height; int sizeimage; int field; int colorspace; int pixelformat; } ;
struct TYPE_9__ {TYPE_3__ pix; } ;
struct TYPE_10__ {TYPE_4__ fmt; } ;
struct common_obj {int height; int width; TYPE_5__ fmt; } ;
struct channel_obj {struct vpif_params vpifparams; struct video_obj video; struct common_obj* common; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ,char*,int,int) ;
 scalar_t__ FUNC_1 (struct channel_obj*) ;

__attribute__((used)) static int FUNC_2(struct channel_obj *VAR_8)
{
 struct common_obj *VAR_9 = &VAR_8->common[VAR_6];
 struct video_obj *VAR_10 = &VAR_8->video;
 struct vpif_params *VAR_11 = &VAR_8->vpifparams;
 struct vpif_channel_config_params *VAR_12 = &VAR_11->std_info;

 if (!VAR_10->stdid && !VAR_10->dv_timings.bt.height)
  return -VAR_0;

 if (VAR_10->stdid) {
  if (FUNC_1(VAR_8))
   return -VAR_0;
 }

 VAR_9->fmt.fmt.pix.pixelformat = VAR_5;
 VAR_9->fmt.fmt.pix.width = VAR_12->width;
 VAR_9->fmt.fmt.pix.height = VAR_12->height;
 FUNC_0(1, VAR_7, "Pixel details: Width = %d,Height = %d\n",
   VAR_9->fmt.fmt.pix.width, VAR_9->fmt.fmt.pix.height);


 VAR_9->height = VAR_12->height;
 VAR_9->width = VAR_12->width;
 VAR_9->fmt.fmt.pix.sizeimage = VAR_9->height * VAR_9->width * 2;

 if (VAR_10->stdid)
  VAR_9->fmt.fmt.pix.colorspace = VAR_2;
 else
  VAR_9->fmt.fmt.pix.colorspace = VAR_1;

 if (VAR_8->vpifparams.std_info.frm_fmt)
  VAR_9->fmt.fmt.pix.field = VAR_4;
 else
  VAR_9->fmt.fmt.pix.field = VAR_3;

 return 0;
}
