
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* runtime; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_5__ {unsigned int blocks; unsigned int blksize; unsigned int bufsize; int * vaddr; int pt; int sglen; int sglist; } ;
struct saa7134_dev {TYPE_1__ dmasound; int pci; } ;
struct TYPE_7__ {struct saa7134_dev* dev; } ;
typedef TYPE_3__ snd_card_saa7134_t ;
struct TYPE_6__ {unsigned int dma_bytes; scalar_t__ dma_addr; int * dma_area; } ;


 int VAR_0 ;
 int FUNC_0 (struct saa7134_dev*) ;
 int FUNC_1 (struct saa7134_dev*) ;
 unsigned int FUNC_2 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct saa7134_dev*) ;
 int FUNC_5 (struct saa7134_dev*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *,int ,int ,int ) ;
 int FUNC_8 (int ,int *) ;
 TYPE_3__* FUNC_9 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream * VAR_1,
          struct snd_pcm_hw_params * VAR_2)
{
 snd_card_saa7134_t *VAR_3 = FUNC_9(VAR_1);
 struct saa7134_dev *VAR_4;
 unsigned int VAR_5, VAR_6;
 int VAR_7;

 VAR_5 = FUNC_2(VAR_2);
 VAR_6 = FUNC_3(VAR_2);

 if (VAR_5 < 0x100 || VAR_5 > 0x10000)
  return -VAR_0;
 if (VAR_6 < 4)
  return -VAR_0;
 if (VAR_5 * VAR_6 > 1024 * 1024)
  return -VAR_0;

 VAR_4 = VAR_3->dev;

 if (VAR_4->dmasound.blocks == VAR_6 &&
     VAR_4->dmasound.blksize == VAR_5)
  return 0;


 if (VAR_1->runtime->dma_area) {
  FUNC_8(VAR_4->pci, &VAR_4->dmasound.pt);
  FUNC_5(VAR_4);
  FUNC_0(VAR_4);
  VAR_1->runtime->dma_area = ((void*)0);
 }
 VAR_4->dmasound.blocks = VAR_6;
 VAR_4->dmasound.blksize = VAR_5;
 VAR_4->dmasound.bufsize = VAR_5 * VAR_6;

 VAR_7 = FUNC_1(VAR_4);
 if (0 != VAR_7) {
  VAR_4->dmasound.blocks = 0;
  VAR_4->dmasound.blksize = 0;
  VAR_4->dmasound.bufsize = 0;
  return VAR_7;
 }

 VAR_7 = FUNC_4(VAR_4);
 if (VAR_7) {
  FUNC_0(VAR_4);
  return VAR_7;
 }
 VAR_7 = FUNC_6(VAR_4->pci, &VAR_4->dmasound.pt);
 if (VAR_7) {
  FUNC_5(VAR_4);
  FUNC_0(VAR_4);
  return VAR_7;
 }
 VAR_7 = FUNC_7(VAR_4->pci, &VAR_4->dmasound.pt,
    VAR_4->dmasound.sglist, VAR_4->dmasound.sglen, 0);
 if (VAR_7) {
  FUNC_8(VAR_4->pci, &VAR_4->dmasound.pt);
  FUNC_5(VAR_4);
  FUNC_0(VAR_4);
  return VAR_7;
 }





 VAR_1->runtime->dma_area = VAR_4->dmasound.vaddr;
 VAR_1->runtime->dma_bytes = VAR_4->dmasound.bufsize;
 VAR_1->runtime->dma_addr = 0;

 return 0;

}
