
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int channels_min; int channels_max; void* formats; void* rates; void* stream_name; } ;
struct TYPE_3__ {int channels_min; int channels_max; void* stream_name; void* formats; void* rates; } ;
struct snd_soc_dai_driver {int * ops; scalar_t__ id; TYPE_2__ capture; TYPE_1__ playback; void* name; } ;
struct sdw_cdns {int instance; } ;
typedef enum intel_pdi_type { ____Placeholder_intel_pdi_type } intel_pdi_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(struct sdw_cdns *VAR_10,
       struct snd_soc_dai_driver *VAR_11,
       enum intel_pdi_type VAR_12,
       u32 VAR_13, u32 VAR_14, u32 VAR_15, bool VAR_16)
{
 int VAR_17;

 if (VAR_13 == 0)
  return 0;


 for (VAR_17 = VAR_14; VAR_17 < (VAR_14 + VAR_13); VAR_17++) {
  VAR_11[VAR_17].name = FUNC_0(VAR_1, "SDW%d Pin%d",
      VAR_10->instance, VAR_17);
  if (!VAR_11[VAR_17].name)
   return -VAR_0;

  if (VAR_12 == VAR_2 || VAR_12 == VAR_4) {
   VAR_11[VAR_17].playback.stream_name =
    FUNC_0(VAR_1, "SDW%d Tx%d",
       VAR_10->instance, VAR_17);
   if (!VAR_11[VAR_17].playback.stream_name) {
    FUNC_1(VAR_11[VAR_17].name);
    return -VAR_0;
   }

   VAR_11[VAR_17].playback.channels_min = 1;
   VAR_11[VAR_17].playback.channels_max = VAR_15;
   VAR_11[VAR_17].playback.rates = VAR_7;
   VAR_11[VAR_17].playback.formats = VAR_6;
  }

  if (VAR_12 == VAR_2 || VAR_12 == VAR_3) {
   VAR_11[VAR_17].capture.stream_name =
    FUNC_0(VAR_1, "SDW%d Rx%d",
       VAR_10->instance, VAR_17);
   if (!VAR_11[VAR_17].capture.stream_name) {
    FUNC_1(VAR_11[VAR_17].name);
    FUNC_1(VAR_11[VAR_17].playback.stream_name);
    return -VAR_0;
   }

   VAR_11[VAR_17].capture.channels_min = 1;
   VAR_11[VAR_17].capture.channels_max = VAR_15;
   VAR_11[VAR_17].capture.rates = VAR_7;
   VAR_11[VAR_17].capture.formats = VAR_6;
  }

  VAR_11[VAR_17].id = VAR_5 + VAR_17;

  if (VAR_16)
   VAR_11[VAR_17].ops = &VAR_8;
  else
   VAR_11[VAR_17].ops = &VAR_9;
 }

 return 0;
}
