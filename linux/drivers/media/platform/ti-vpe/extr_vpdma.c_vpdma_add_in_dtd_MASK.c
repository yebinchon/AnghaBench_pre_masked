
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct vpdma_dtd {int start_addr; scalar_t__ client_attr1; scalar_t__ client_attr0; int start_h_v; int frame_width_height; int pkt_ctl; int xfer_length_height; int type_ctl_stride; } ;
struct TYPE_3__ {void* addr; int size; } ;
struct vpdma_desc_list {struct vpdma_dtd* next; TYPE_1__ buf; } ;
struct vpdma_data_format {int depth; scalar_t__ type; scalar_t__ data_type; } ;
struct v4l2_rect {int height; int top; int left; int width; } ;
typedef enum vpdma_channel { ____Placeholder_vpdma_channel } vpdma_channel ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {int num; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 TYPE_2__* VAR_7 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int ,int,int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (scalar_t__,int,int,int,int,int,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct vpdma_dtd*) ;

void FUNC_7(struct vpdma_desc_list *VAR_8, int VAR_9,
  int VAR_10, const struct v4l2_rect *VAR_11,
  const struct vpdma_data_format *VAR_12, dma_addr_t VAR_13,
  enum vpdma_channel VAR_14, int VAR_15, u32 VAR_16, int VAR_17,
  int VAR_18, int VAR_19, int VAR_20)
{
 int VAR_21 = 0;
 int VAR_22 = 1;
 int VAR_23 = VAR_12->depth;
 int VAR_24, VAR_25;
 struct v4l2_rect VAR_26 = *VAR_11;
 struct vpdma_dtd *VAR_27;

 VAR_24 = VAR_25 = VAR_7[VAR_14].num;

 if (VAR_12->type == VAR_3 &&
   VAR_12->data_type == VAR_0) {
  VAR_26.height >>= 1;
  VAR_26.top >>= 1;
  VAR_23 = 8;
 }

 VAR_13 += VAR_26.top * VAR_10 + (VAR_26.left * VAR_23 >> 3);

 VAR_27 = VAR_8->next;
 FUNC_0((void *)(VAR_27 + 1) > (VAR_8->buf.addr + VAR_8->buf.size));

 VAR_27->type_ctl_stride = FUNC_4(VAR_12->data_type,
     VAR_22,
     VAR_15,
     !!(VAR_16 & VAR_4),
     !!(VAR_16 & VAR_2),
     !!(VAR_16 & VAR_6),
     VAR_10);

 VAR_27->xfer_length_height = FUNC_5(VAR_26.width,
     VAR_26.height);
 VAR_27->start_addr = (u32) VAR_13;
 VAR_27->pkt_ctl = FUNC_2(!!(VAR_16 & VAR_5),
    VAR_1, VAR_24, VAR_21, VAR_25);
 VAR_27->frame_width_height = FUNC_1(VAR_17,
     VAR_18);
 VAR_27->start_h_v = FUNC_3(VAR_19, VAR_20);
 VAR_27->client_attr0 = 0;
 VAR_27->client_attr1 = 0;

 VAR_8->next = VAR_27 + 1;

 FUNC_6(VAR_27);
}
