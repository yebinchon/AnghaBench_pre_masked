
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_route {char* control; void* source; void* sink; } ;
struct gbaudio_module_info {int num_dapm_routes; struct snd_soc_dapm_route* dapm_routes; int dev; } ;
struct gb_audio_route {scalar_t__ control_id; int index; int destination_id; int source_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,void*,char*,void*) ;
 int FUNC_1 (int ,char*,int ,int ,scalar_t__,int ) ;
 int FUNC_2 (int ,struct snd_soc_dapm_route*) ;
 struct snd_soc_dapm_route* FUNC_3 (int ,size_t,int ) ;
 char* FUNC_4 (struct gbaudio_module_info*,scalar_t__,int ) ;
 void* FUNC_5 (struct gbaudio_module_info*,int ) ;

__attribute__((used)) static int FUNC_6(struct gbaudio_module_info *VAR_4,
           struct gb_audio_route *VAR_5)
{
 int VAR_6, VAR_7;
 struct snd_soc_dapm_route *VAR_8;
 struct gb_audio_route *VAR_9;
 size_t VAR_10;

 VAR_10 = sizeof(struct snd_soc_dapm_route) * VAR_4->num_dapm_routes;
 VAR_8 = FUNC_3(VAR_4->dev, VAR_10, VAR_3);
 if (!VAR_8)
  return -VAR_1;

 VAR_4->dapm_routes = VAR_8;
 VAR_9 = VAR_5;

 for (VAR_6 = 0; VAR_6 < VAR_4->num_dapm_routes; VAR_6++) {
  VAR_8->sink =
   FUNC_5(VAR_4, VAR_9->destination_id);
  if (!VAR_8->sink) {
   FUNC_1(VAR_4->dev, "%d:%d:%d:%d - Invalid sink\n",
    VAR_9->source_id, VAR_9->destination_id,
    VAR_9->control_id, VAR_9->index);
   VAR_7 = -VAR_0;
   goto error;
  }
  VAR_8->source =
   FUNC_5(VAR_4, VAR_9->source_id);
  if (!VAR_8->source) {
   FUNC_1(VAR_4->dev, "%d:%d:%d:%d - Invalid source\n",
    VAR_9->source_id, VAR_9->destination_id,
    VAR_9->control_id, VAR_9->index);
   VAR_7 = -VAR_0;
   goto error;
  }
  VAR_8->control =
   FUNC_4(VAR_4,
           VAR_9->control_id,
           VAR_9->index);
  if ((VAR_9->control_id != VAR_2) &&
      !VAR_8->control) {
   FUNC_1(VAR_4->dev, "%d:%d:%d:%d - Invalid control\n",
    VAR_9->source_id, VAR_9->destination_id,
    VAR_9->control_id, VAR_9->index);
   VAR_7 = -VAR_0;
   goto error;
  }
  FUNC_0(VAR_4->dev, "Route {%s, %s, %s}\n", VAR_8->sink,
   (VAR_8->control) ? VAR_8->control : "NULL",
   VAR_8->source);
  VAR_8++;
  VAR_9++;
 }

 return 0;

error:
 FUNC_2(VAR_4->dev, VAR_4->dapm_routes);
 return VAR_7;
}
