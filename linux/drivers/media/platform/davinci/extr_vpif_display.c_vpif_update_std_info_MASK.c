
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpif_channel_config_params {scalar_t__ hd_sd; int stdid; } ;
struct vpif_params {struct vpif_channel_config_params std_info; } ;
struct video_obj {int stdid; } ;
struct channel_obj {struct vpif_params vpifparams; struct video_obj video; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vpif_channel_config_params*,struct vpif_channel_config_params const*,int) ;
 struct vpif_channel_config_params* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ,char*) ;

__attribute__((used)) static int FUNC_2(struct channel_obj *VAR_4)
{
 struct video_obj *VAR_5 = &VAR_4->video;
 struct vpif_params *VAR_6 = &VAR_4->vpifparams;
 struct vpif_channel_config_params *VAR_7 = &VAR_6->std_info;
 const struct vpif_channel_config_params *VAR_8;

 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_8 = &VAR_2[VAR_9];
  if (VAR_8->hd_sd == 0) {
   FUNC_1(2, VAR_1, "SD format\n");
   if (VAR_8->stdid & VAR_5->stdid) {
    FUNC_0(VAR_7, VAR_8, sizeof(*VAR_8));
    break;
   }
  }
 }

 if (VAR_9 == VAR_3) {
  FUNC_1(1, VAR_1, "Format not found\n");
  return -VAR_0;
 }

 return 0;
}
