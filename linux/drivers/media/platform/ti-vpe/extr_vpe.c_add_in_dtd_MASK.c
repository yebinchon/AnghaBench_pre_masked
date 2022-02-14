
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int width; int height; } ;
struct vpe_q_data {int nplanes; int* bytesperline; int height; int flags; int width; TYPE_2__ c_rect; struct vpe_fmt* fmt; } ;
struct vpe_port_data {size_t vb_index; int vb_part; int channel; } ;
struct vpe_fmt {scalar_t__ fourcc; struct vpdma_data_format** vpdma_fmt; scalar_t__ coplanar; } ;
struct vpe_ctx {int src_mv_buf_selector; int* mv_buf_dma; int sequence; int desc_list; int dev; TYPE_1__** src_vbs; struct vpe_q_data* q_data; } ;
struct vpdma_data_format {int depth; } ;
struct vb2_v4l2_buffer {int field; } ;
struct vb2_buffer {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {struct vb2_buffer vb2_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 struct vpe_port_data* VAR_11 ;
 struct vb2_v4l2_buffer* FUNC_0 (struct vb2_buffer*) ;
 int FUNC_1 (struct vb2_buffer*,int) ;
 int FUNC_2 (int *,int,int,TYPE_2__*,struct vpdma_data_format const*,int,int ,int,int,int,int,int ,int ) ;
 struct vpdma_data_format* VAR_12 ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static void FUNC_4(struct vpe_ctx *VAR_13, int VAR_14)
{
 struct vpe_q_data *VAR_15 = &VAR_13->q_data[VAR_3];
 const struct vpe_port_data *VAR_16 = &VAR_11[VAR_14];
 struct vb2_buffer *VAR_17 = &VAR_13->src_vbs[VAR_16->vb_index]->vb2_buf;
 struct vb2_v4l2_buffer *VAR_18 = FUNC_0(VAR_17);
 struct vpe_fmt *VAR_19 = VAR_15->fmt;
 const struct vpdma_data_format *VAR_20;
 int VAR_21 = VAR_13->src_mv_buf_selector;
 int VAR_22 = VAR_18->field == VAR_4;
 int VAR_23, VAR_24;
 dma_addr_t VAR_25;
 u32 VAR_26 = 0;
 u32 VAR_27 = 0;

 if (VAR_14 == VAR_10) {
  VAR_20 = &VAR_12[VAR_6];
  VAR_25 = VAR_13->mv_buf_dma[VAR_21];
 } else {

  int VAR_28 = VAR_19->coplanar ? VAR_16->vb_part : 0;

  VAR_20 = VAR_19->vpdma_fmt[VAR_28];




  if (VAR_15->nplanes == 1 && VAR_28) {
   VAR_25 = FUNC_1(VAR_17, 0);

   VAR_27 = VAR_15->bytesperline[0] * VAR_15->height;
  } else {
   VAR_25 = FUNC_1(VAR_17, VAR_28);

   VAR_27 = 0;
  }
  if (!VAR_25) {
   FUNC_3(VAR_13->dev,
    "acquiring output buffer(%d) dma_addr failed\n",
    VAR_14);
   return;
  }

  VAR_25 += VAR_27;

  if (VAR_15->flags & VAR_1) {





   VAR_22 = (VAR_16->vb_index + (VAR_13->sequence % 2)) % 2;

   if (VAR_22) {




    int VAR_29 = VAR_15->height / 2;
    int VAR_30 = VAR_19->fourcc == VAR_5 ?
      1 : (VAR_20->depth >> 3);
    if (VAR_28)
     VAR_29 /= 2;
    VAR_25 += VAR_15->width * VAR_29 * VAR_30;
   }
  }
 }

 if (VAR_15->flags & VAR_0)
  VAR_26 |= VAR_7;
 if (VAR_15->flags & VAR_2)
  VAR_26 |= VAR_8;

 VAR_23 = VAR_15->c_rect.width;
 VAR_24 = VAR_15->c_rect.height;

 if (VAR_16->vb_part && VAR_19->fourcc == VAR_5)
  VAR_24 /= 2;

 FUNC_2(&VAR_13->desc_list, VAR_15->width,
    VAR_15->bytesperline[VAR_9], &VAR_15->c_rect,
  VAR_20, VAR_25, VAR_16->channel, VAR_22, VAR_26, VAR_23,
  VAR_24, 0, 0);
}
