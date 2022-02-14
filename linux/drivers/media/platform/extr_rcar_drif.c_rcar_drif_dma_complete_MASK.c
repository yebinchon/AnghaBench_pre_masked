
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u32 ;
struct rcar_drif_sdr {size_t produced; int num_cur_ch; unsigned int hwbuf_size; TYPE_1__* fmt; int dma_lock; int vb_queue; } ;
struct rcar_drif_hwbuf {int status; int addr; } ;
struct TYPE_8__ {int timestamp; } ;
struct TYPE_7__ {size_t sequence; TYPE_3__ vb2_buf; int field; } ;
struct rcar_drif_frame_buf {TYPE_2__ vb; } ;
struct rcar_drif {scalar_t__ num; struct rcar_drif_hwbuf* buf; struct rcar_drif_sdr* sdr; } ;
struct TYPE_6__ {int buffersize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,int ,unsigned int) ;
 int FUNC_2 (struct rcar_drif_hwbuf**,int) ;
 int FUNC_3 (struct rcar_drif_hwbuf**) ;
 scalar_t__ FUNC_4 (struct rcar_drif_hwbuf**) ;
 int FUNC_5 (struct rcar_drif*,size_t) ;
 struct rcar_drif_frame_buf* FUNC_6 (struct rcar_drif_sdr*) ;
 int FUNC_7 (struct rcar_drif_sdr*,char*,scalar_t__,size_t) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct rcar_drif_hwbuf* FUNC_10 (struct rcar_drif_sdr*,scalar_t__,size_t) ;
 int FUNC_11 (TYPE_3__*,int ) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (TYPE_3__*,int ) ;
 int FUNC_14 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static void FUNC_15(void *VAR_7)
{
 struct rcar_drif *VAR_8 = VAR_7;
 struct rcar_drif_sdr *VAR_9 = VAR_8->sdr;
 struct rcar_drif_hwbuf *VAR_10[VAR_2];
 struct rcar_drif_frame_buf *VAR_11;
 bool VAR_12 = 0;
 u32 VAR_13, VAR_14;
 unsigned int VAR_15;

 FUNC_8(&VAR_9->dma_lock);


 if (!FUNC_12(&VAR_9->vb_queue)) {
  FUNC_9(&VAR_9->dma_lock);
  return;
 }

 VAR_13 = VAR_9->produced % VAR_3;
 FUNC_5(VAR_8, VAR_13);

 if (VAR_9->num_cur_ch == VAR_2) {
  VAR_10[0] = VAR_8->num ? FUNC_10(VAR_9, VAR_8->num, VAR_13) :
    &VAR_8->buf[VAR_13];
  VAR_10[1] = VAR_8->num ? &VAR_8->buf[VAR_13] :
    FUNC_10(VAR_9, VAR_8->num, VAR_13);


  if (!FUNC_3(VAR_10)) {
   FUNC_9(&VAR_9->dma_lock);
   return;
  }


  FUNC_2(VAR_10, VAR_0);

  if (FUNC_4(VAR_10)) {
   VAR_12 = 1;

   FUNC_2(VAR_10, VAR_1);
  }
 } else {
  VAR_10[0] = &VAR_8->buf[VAR_13];
  if (VAR_10[0]->status & VAR_1) {
   VAR_12 = 1;

   VAR_10[0]->status &= ~VAR_1;
  }
 }


 VAR_14 = VAR_9->produced++;
 FUNC_9(&VAR_9->dma_lock);

 FUNC_7(VAR_9, "ch%u: prod %u\n", VAR_8->num, VAR_14);


 VAR_11 = FUNC_6(VAR_9);
 if (!VAR_11)
  return;

 for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++)
  FUNC_1(FUNC_13(&VAR_11->vb.vb2_buf, 0) +
         VAR_15 * VAR_9->hwbuf_size, VAR_10[VAR_15]->addr, VAR_9->hwbuf_size);

 VAR_11->vb.field = VAR_4;
 VAR_11->vb.sequence = VAR_14;
 VAR_11->vb.vb2_buf.timestamp = FUNC_0();
 FUNC_14(&VAR_11->vb.vb2_buf, 0, VAR_9->fmt->buffersize);


 FUNC_11(&VAR_11->vb.vb2_buf,
   VAR_12 ? VAR_6 : VAR_5);
}
