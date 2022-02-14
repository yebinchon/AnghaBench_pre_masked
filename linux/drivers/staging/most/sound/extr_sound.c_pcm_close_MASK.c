
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct channel* private_data; } ;
struct channel {int id; int iface; int playback_task; TYPE_1__* cfg; } ;
struct TYPE_2__ {scalar_t__ direction; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_2)
{
 struct channel *VAR_3 = VAR_2->private_data;

 if (VAR_3->cfg->direction == VAR_0)
  FUNC_0(VAR_3->playback_task);
 FUNC_1(VAR_3->iface, VAR_3->id, &VAR_1);

 return 0;
}
