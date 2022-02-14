
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {TYPE_2__* private_data; } ;
struct TYPE_3__ {scalar_t__ read_count; scalar_t__ read_offset; scalar_t__ bufsize; } ;
struct saa7134_dev {TYPE_1__ dmasound; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_4__ {struct saa7134_dev* dev; } ;
typedef TYPE_2__ snd_card_saa7134_pcm_t ;


 int FUNC_0 (struct snd_pcm_runtime*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t
FUNC_2(struct snd_pcm_substream * VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 snd_card_saa7134_pcm_t *VAR_2 = VAR_1->private_data;
 struct saa7134_dev *VAR_3=VAR_2->dev;

 if (VAR_3->dmasound.read_count) {
  VAR_3->dmasound.read_count -= FUNC_1(VAR_0);
  VAR_3->dmasound.read_offset += FUNC_1(VAR_0);
  if (VAR_3->dmasound.read_offset == VAR_3->dmasound.bufsize)
   VAR_3->dmasound.read_offset = 0;
 }

 return FUNC_0(VAR_1, VAR_3->dmasound.read_offset);
}
