
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dma_blk; int read_count; int blksize; int blocks; int recording_on; int substream; int bufsize; } ;
struct saa7134_dev {int slock; TYPE_1__ dmasound; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct saa7134_dev *VAR_1,
      unsigned long VAR_2)
{
 int VAR_3, VAR_4 = 0;

 FUNC_7(&VAR_1->slock);
 if (VAR_0 == VAR_1->dmasound.dma_blk) {
  FUNC_2("irq: recording stopped\n");
  goto done;
 }
 if (0 != (VAR_2 & 0x0f000000))
  FUNC_2("irq: lost %ld\n", (VAR_2 >> 24) & 0x0f);
 if (0 == (VAR_2 & 0x10000000)) {

  if (0 == (VAR_1->dmasound.dma_blk & 0x01))
   VAR_4 = FUNC_0(6);
 } else {

  if (1 == (VAR_1->dmasound.dma_blk & 0x01))
   VAR_4 = FUNC_1(6);
 }
 if (0 == VAR_4) {
  FUNC_2("irq: field oops [%s]\n",
   (VAR_2 & 0x10000000) ? "even" : "odd");
  goto done;
 }

 if (VAR_1->dmasound.read_count >= VAR_1->dmasound.blksize * (VAR_1->dmasound.blocks-2)) {
  FUNC_2("irq: overrun [full=%d/%d] - Blocks in %d\n",
   VAR_1->dmasound.read_count,
   VAR_1->dmasound.bufsize, VAR_1->dmasound.blocks);
  FUNC_8(&VAR_1->slock);
  FUNC_6(VAR_1->dmasound.substream);
  return;
 }


 VAR_3 = (VAR_1->dmasound.dma_blk + 2) % VAR_1->dmasound.blocks;
 FUNC_3(VAR_4,VAR_3 * VAR_1->dmasound.blksize);
 FUNC_2("irq: ok, %s, next_blk=%d, addr=%x, blocks=%u, size=%u, read=%u\n",
  (VAR_2 & 0x10000000) ? "even" : "odd ", VAR_3,
   VAR_3 * VAR_1->dmasound.blksize, VAR_1->dmasound.blocks,
   VAR_1->dmasound.blksize, VAR_1->dmasound.read_count);


 VAR_1->dmasound.dma_blk = (VAR_1->dmasound.dma_blk + 1) % VAR_1->dmasound.blocks;
 VAR_1->dmasound.read_count += VAR_1->dmasound.blksize;

 VAR_1->dmasound.recording_on = VAR_4;

 if (VAR_1->dmasound.read_count >= FUNC_4(VAR_1->dmasound.substream)) {
  FUNC_8(&VAR_1->slock);
  FUNC_5(VAR_1->dmasound.substream);
  FUNC_7(&VAR_1->slock);
 }

 done:
 FUNC_8(&VAR_1->slock);

}
