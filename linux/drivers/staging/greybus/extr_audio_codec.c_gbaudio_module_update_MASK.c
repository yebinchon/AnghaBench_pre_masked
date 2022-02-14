
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {scalar_t__ id; int name; int sname; } ;
struct gbaudio_module_info {int dev; } ;
struct gbaudio_codec_info {int lock; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,...) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct gbaudio_module_info*,int) ;
 int FUNC_3 (struct gbaudio_module_info*,int) ;
 int FUNC_4 (struct gbaudio_codec_info*,struct gbaudio_module_info*,int) ;
 int FUNC_5 (struct gbaudio_codec_info*,struct gbaudio_module_info*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (int ,char*,char*,int*,char*) ;

int FUNC_9(struct gbaudio_codec_info *VAR_4,
     struct snd_soc_dapm_widget *VAR_5,
     struct gbaudio_module_info *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9;
 char VAR_10[VAR_1], VAR_11[VAR_1];

 FUNC_0(VAR_6->dev, "%s:Module update %s sequence\n", VAR_5->name,
  VAR_7 ? "Enable" : "Disable");

 if ((VAR_5->id != VAR_2) && (VAR_5->id != VAR_3)) {
  FUNC_0(VAR_4->dev, "No action required for %s\n", VAR_5->name);
  return 0;
 }


 VAR_9 = FUNC_8(VAR_5->sname, "%s %d %s", VAR_10, &VAR_8, VAR_11);
 if (VAR_9 < 3) {
  FUNC_1(VAR_4->dev, "Error while parsing dai_id for %s\n",
   VAR_5->name);
  return -VAR_0;
 }

 FUNC_6(&VAR_4->lock);
 if (VAR_5->id == VAR_2) {
  if (VAR_7)
   VAR_9 = FUNC_5(VAR_4, VAR_6, VAR_8);
  else
   VAR_9 = FUNC_3(VAR_6, VAR_8);
 } else if (VAR_5->id == VAR_3) {
  if (VAR_7)
   VAR_9 = FUNC_4(VAR_4, VAR_6, VAR_8);
  else
   VAR_9 = FUNC_2(VAR_6, VAR_8);
 }

 FUNC_7(&VAR_4->lock);

 return VAR_9;
}
