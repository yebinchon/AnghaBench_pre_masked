
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct snd_pcm_runtime {scalar_t__ buffer_size; scalar_t__ dma_bytes; int dma_area; scalar_t__ period_size; } ;
struct go7007_snd {scalar_t__ hw_ptr; scalar_t__ avail; scalar_t__ w_idx; TYPE_1__* substream; scalar_t__ capturing; int lock; } ;
struct go7007 {struct go7007_snd* snd_context; } ;
struct TYPE_2__ {struct snd_pcm_runtime* runtime; } ;


 int FUNC_0 (struct snd_pcm_runtime*,int) ;
 int FUNC_1 (int,int *,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct go7007 *VAR_0, u8 *VAR_1, int VAR_2)
{
 struct go7007_snd *VAR_3 = VAR_0->snd_context;
 struct snd_pcm_runtime *VAR_4 = VAR_3->substream->runtime;
 int VAR_5 = FUNC_0(VAR_4, VAR_2);
 unsigned long VAR_6;

 FUNC_3(&VAR_3->lock, VAR_6);
 VAR_3->hw_ptr += VAR_5;
 if (VAR_3->hw_ptr >= VAR_4->buffer_size)
  VAR_3->hw_ptr -= VAR_4->buffer_size;
 VAR_3->avail += VAR_5;
 FUNC_4(&VAR_3->lock, VAR_6);
 if (VAR_3->w_idx + VAR_2 > VAR_4->dma_bytes) {
  int VAR_7 = VAR_4->dma_bytes - VAR_3->w_idx;

  FUNC_1(VAR_4->dma_area + VAR_3->w_idx, VAR_1, VAR_7);
  VAR_2 -= VAR_7;
  VAR_1 += VAR_7;
  VAR_3->w_idx = 0;
 }
 FUNC_1(VAR_4->dma_area + VAR_3->w_idx, VAR_1, VAR_2);
 VAR_3->w_idx += VAR_2;
 FUNC_3(&VAR_3->lock, VAR_6);
 if (VAR_3->avail < VAR_4->period_size) {
  FUNC_4(&VAR_3->lock, VAR_6);
  return;
 }
 VAR_3->avail -= VAR_4->period_size;
 FUNC_4(&VAR_3->lock, VAR_6);
 if (VAR_3->capturing)
  FUNC_2(VAR_3->substream);
}
