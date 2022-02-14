
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct vpe_q_data {int nplanes; int* bytesperline; int height; int flags; int c_rect; int width; struct vpe_fmt* fmt; } ;
struct vpe_port_data {int vb_part; int channel; } ;
struct vpe_fmt {struct vpdma_data_format** vpdma_fmt; scalar_t__ coplanar; } ;
struct vpe_ctx {int* mv_buf_dma; int desc_list; TYPE_2__* dev; struct vpe_q_data* q_data; int src_mv_buf_selector; TYPE_1__* dst_vb; } ;
struct vpdma_data_format {int dummy; } ;
struct vb2_buffer {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int vpdma; } ;
struct TYPE_3__ {struct vb2_buffer vb2_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 struct vpe_port_data* VAR_14 ;
 int FUNC_0 (struct vb2_buffer*,int) ;
 int FUNC_1 (int *,int ,int,int *,struct vpdma_data_format const*,int,int ,int ,int ,int) ;
 struct vpdma_data_format* VAR_15 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*,char*,int) ;

__attribute__((used)) static void FUNC_4(struct vpe_ctx *VAR_16, int VAR_17)
{
 struct vpe_q_data *VAR_18 = &VAR_16->q_data[VAR_4];
 const struct vpe_port_data *VAR_19 = &VAR_14[VAR_17];
 struct vb2_buffer *VAR_20 = &VAR_16->dst_vb->vb2_buf;
 struct vpe_fmt *VAR_21 = VAR_18->fmt;
 const struct vpdma_data_format *VAR_22;
 int VAR_23 = !VAR_16->src_mv_buf_selector;
 dma_addr_t VAR_24;
 u32 VAR_25 = 0;
 u32 VAR_26 = 0;

 if (VAR_17 == VAR_13) {
  VAR_22 = &VAR_15[VAR_8];
  VAR_24 = VAR_16->mv_buf_dma[VAR_23];
  VAR_18 = &VAR_16->q_data[VAR_7];
 } else {

  int VAR_27 = VAR_21->coplanar ? VAR_19->vb_part : 0;

  VAR_22 = VAR_21->vpdma_fmt[VAR_27];




  if (VAR_18->nplanes == 1 && VAR_27) {
   VAR_24 = FUNC_0(VAR_20, 0);

   VAR_26 = VAR_18->bytesperline[0] * VAR_18->height;
  } else {
   VAR_24 = FUNC_0(VAR_20, VAR_27);

   VAR_26 = 0;
  }
  if (!VAR_24) {
   FUNC_3(VAR_16->dev,
    "acquiring output buffer(%d) dma_addr failed\n",
    VAR_17);
   return;
  }

  VAR_24 += VAR_26;
 }

 if (VAR_18->flags & VAR_5)
  VAR_25 |= VAR_9;
 if (VAR_18->flags & VAR_6)
  VAR_25 |= VAR_10;

 FUNC_2(VAR_16->dev->vpdma, VAR_11,
      VAR_3, VAR_0);

 FUNC_1(&VAR_16->desc_list, VAR_18->width,
     VAR_18->bytesperline[VAR_12], &VAR_18->c_rect,
     VAR_22, VAR_24, VAR_2,
     VAR_1, VAR_19->channel, VAR_25);
}
