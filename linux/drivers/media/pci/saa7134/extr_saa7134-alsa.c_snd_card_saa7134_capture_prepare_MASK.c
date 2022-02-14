
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; int rate; int format; TYPE_7__* private_data; } ;
struct TYPE_12__ {int dma; } ;
struct TYPE_13__ {size_t input; int blksize; int rate; TYPE_4__ pt; } ;
struct saa7134_dev {TYPE_5__ dmasound; TYPE_3__* pci; } ;
struct TYPE_14__ {int * capture_ctl; struct saa7134_dev* dev; } ;
typedef TYPE_6__ snd_card_saa7134_t ;
struct TYPE_15__ {TYPE_2__* dev; } ;
typedef TYPE_7__ snd_card_saa7134_pcm_t ;
struct TYPE_11__ {int device; } ;
struct TYPE_9__ {struct snd_pcm_substream* substream; } ;
struct TYPE_10__ {TYPE_1__ dmasound; } ;


 size_t VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ,int,int,char) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 TYPE_6__* FUNC_10 (struct snd_pcm_substream*) ;
 int FUNC_11 (int ,int,int,int) ;

__attribute__((used)) static int FUNC_12(struct snd_pcm_substream * VAR_10)
{
 struct snd_pcm_runtime *VAR_11 = VAR_10->runtime;
 int VAR_12, VAR_13;
 u32 VAR_14, VAR_15;
 snd_card_saa7134_t *VAR_16 = FUNC_10(VAR_10);
 struct saa7134_dev *VAR_17;
 snd_card_saa7134_pcm_t *VAR_18 = VAR_11->private_data;

 VAR_18->dev->dmasound.substream = VAR_10;

 VAR_17 = VAR_16->dev;

 if (FUNC_9(VAR_11->format) == 8)
  VAR_14 = 0x00;
 else
  VAR_14 = 0x01;

 if (FUNC_8(VAR_11->format))
  VAR_13 = 1;
 else
  VAR_13 = 0;

 if (FUNC_7(VAR_11->format))
  VAR_12 = 1;
 else
  VAR_12 = 0;

 switch (VAR_17->pci->device) {
   case 129:
  if (1 == VAR_11->channels)
   VAR_14 |= (1 << 3);
  if (2 == VAR_11->channels)
   VAR_14 |= (3 << 3);
  if (VAR_13)
   VAR_14 |= 0x04;

  VAR_14 |= (VAR_0 == VAR_17->dmasound.input) ? 0xc0 : 0x80;
  FUNC_5(VAR_4, ((VAR_17->dmasound.blksize - 1) & 0x0000ff));
  FUNC_5(VAR_5, ((VAR_17->dmasound.blksize - 1) & 0x00ff00) >> 8);
  FUNC_5(VAR_6, ((VAR_17->dmasound.blksize - 1) & 0xff0000) >> 16);
  FUNC_5(VAR_3, VAR_14);

  break;
   case 130:
   case 128:
  if (1 == VAR_11->channels)
   VAR_14 |= (1 << 4);
  if (2 == VAR_11->channels)
   VAR_14 |= (2 << 4);
  if (!VAR_13)
   VAR_14 |= 0x04;
  FUNC_6(VAR_2, VAR_17->dmasound.blksize -1);
  FUNC_6(VAR_1, 0x543210 | (VAR_14 << 24));
  break;
 }

 FUNC_4("rec_start: afmt=%d ch=%d  =>  fmt=0x%x swap=%c\n",
  VAR_11->format, VAR_11->channels, VAR_14,
  VAR_12 ? 'b' : '-');

 VAR_15 = VAR_8 |
  VAR_9 |
  (VAR_17->dmasound.pt.dma >> 12);
 if (VAR_12)
  VAR_15 |= VAR_7;

 FUNC_6(FUNC_0(6),0);
 FUNC_6(FUNC_1(6),VAR_17->dmasound.blksize);
 FUNC_6(FUNC_3(6),0);
 FUNC_6(FUNC_2(6),VAR_15);

 VAR_17->dmasound.rate = VAR_11->rate;


 FUNC_11(VAR_16->capture_ctl[VAR_17->dmasound.input], 1, 1,
          1);

 return 0;

}
