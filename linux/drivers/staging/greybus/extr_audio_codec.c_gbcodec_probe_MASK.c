
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_codec {int dev; } ;
struct gbaudio_codec_info {struct snd_soc_codec* codec; int dai_list; int lock; int module_list; int dev; } ;
struct gbaudio_codec_dai {int list; int id; } ;
struct TYPE_3__ {int id; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;
 void* FUNC_3 (int ,int,int ) ;
 TYPE_1__* VAR_2 ;
 struct gbaudio_codec_info* VAR_3 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct snd_soc_codec*,struct gbaudio_codec_info*) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_codec *VAR_4)
{
 int VAR_5;
 struct gbaudio_codec_info *VAR_6;
 struct gbaudio_codec_dai *VAR_7;

 VAR_6 = FUNC_3(VAR_4->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->dev = VAR_4->dev;
 FUNC_1(&VAR_6->module_list);
 FUNC_5(&VAR_6->lock);
 FUNC_1(&VAR_6->dai_list);


 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  VAR_7 = FUNC_3(VAR_4->dev, sizeof(*VAR_7), VAR_1);
  if (!VAR_7)
   return -VAR_0;
  VAR_7->id = VAR_2[VAR_5].id;
  FUNC_4(&VAR_7->list, &VAR_6->dai_list);
 }

 VAR_6->codec = VAR_4;
 FUNC_6(VAR_4, VAR_6);
 VAR_3 = VAR_6;

 FUNC_2(VAR_4->dev, 1);
 return 0;
}
