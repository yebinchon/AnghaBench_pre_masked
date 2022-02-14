
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct sdw_intel_link_res {scalar_t__ arg; TYPE_1__* ops; } ;
struct sdw_intel {struct sdw_intel_link_res* res; } ;
struct TYPE_2__ {int (* config_stream ) (scalar_t__,struct snd_pcm_substream*,struct snd_soc_dai*,struct snd_pcm_hw_params*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,struct snd_pcm_substream*,struct snd_soc_dai*,struct snd_pcm_hw_params*,int) ;

__attribute__((used)) static int FUNC_1(struct sdw_intel *VAR_1,
          struct snd_pcm_substream *VAR_2,
          struct snd_soc_dai *VAR_3,
          struct snd_pcm_hw_params *VAR_4, int VAR_5)
{
 struct sdw_intel_link_res *VAR_6 = VAR_1->res;

 if (VAR_6->ops && VAR_6->ops->config_stream && VAR_6->arg)
  return VAR_6->ops->config_stream(VAR_6->arg,
    VAR_2, VAR_3, VAR_4, VAR_5);

 return -VAR_0;
}
