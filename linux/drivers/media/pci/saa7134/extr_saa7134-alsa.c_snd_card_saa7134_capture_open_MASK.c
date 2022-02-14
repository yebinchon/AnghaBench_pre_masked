
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; int private_free; TYPE_4__* private_data; } ;
struct TYPE_8__ {int input; int lock; scalar_t__ read_offset; scalar_t__ read_count; } ;
struct saa7134_dev {scalar_t__ ctl_mute; TYPE_2__ dmasound; TYPE_1__* input; } ;
struct TYPE_9__ {int mute_was_on; struct saa7134_dev* dev; } ;
typedef TYPE_3__ snd_card_saa7134_t ;
struct TYPE_10__ {struct snd_pcm_substream* substream; int lock; struct saa7134_dev* dev; } ;
typedef TYPE_4__ snd_card_saa7134_pcm_t ;
struct TYPE_7__ {int amux; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct saa7134_dev*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct snd_pcm_runtime*,int ) ;
 int FUNC_6 (struct snd_pcm_runtime*,int ,int ,int) ;
 TYPE_3__* FUNC_7 (struct snd_pcm_substream*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream * VAR_6)
{
 struct snd_pcm_runtime *VAR_7 = VAR_6->runtime;
 snd_card_saa7134_pcm_t *VAR_8;
 snd_card_saa7134_t *VAR_9 = FUNC_7(VAR_6);
 struct saa7134_dev *VAR_10;
 int VAR_11, VAR_12;

 if (!VAR_9) {
  FUNC_3("BUG: saa7134 can't find device struct. Can't proceed with open\n");
  return -VAR_0;
 }
 VAR_10 = VAR_9->dev;
 FUNC_1(&VAR_10->dmasound.lock);

 VAR_10->dmasound.read_count = 0;
 VAR_10->dmasound.read_offset = 0;

 VAR_11 = VAR_10->input->amux;
 if ((VAR_11 < 1) || (VAR_11 > 3))
  VAR_11 = 1;
 VAR_10->dmasound.input = VAR_11 - 1;

 FUNC_2(&VAR_10->dmasound.lock);

 VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_2);
 if (VAR_8 == ((void*)0))
  return -VAR_1;

 VAR_8->dev=VAR_9->dev;

 FUNC_8(&VAR_8->lock);

 VAR_8->substream = VAR_6;
 VAR_7->private_data = VAR_8;
 VAR_7->private_free = VAR_5;
 VAR_7->hw = VAR_4;

 if (VAR_10->ctl_mute != 0) {
  VAR_9->mute_was_on = 1;
  VAR_10->ctl_mute = 0;
  FUNC_4(VAR_10);
 }

 VAR_12 = FUNC_5(VAR_7,
      VAR_3);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_6(VAR_7, 0,
      VAR_3, 2);
 if (VAR_12 < 0)
  return VAR_12;

 return 0;
}
