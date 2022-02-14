
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct channel* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {scalar_t__ channels_max; scalar_t__ channels_min; } ;
struct channel {TYPE_1__ pcm_hardware; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 scalar_t__ FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct snd_pcm_substream*,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_1,
    struct snd_pcm_hw_params *VAR_2)
{
 struct channel *VAR_3 = VAR_1->private_data;

 if ((FUNC_1(VAR_2) > VAR_3->pcm_hardware.channels_max) ||
     (FUNC_1(VAR_2) < VAR_3->pcm_hardware.channels_min)) {
  FUNC_2("Requested number of channels not supported.\n");
  return -VAR_0;
 }
 return FUNC_3(VAR_1,
      FUNC_0(VAR_2));
}
