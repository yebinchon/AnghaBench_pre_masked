
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vpdma_dtd {int start_addr; scalar_t__ client_attr1; scalar_t__ client_attr0; int max_width_height; int desc_write_addr; int pkt_ctl; scalar_t__ w1; int type_ctl_stride; } ;
struct TYPE_2__ {void* addr; int size; } ;
struct vpdma_desc_list {struct vpdma_dtd* next; TYPE_1__ buf; } ;
struct vpdma_data_format {int depth; scalar_t__ type; scalar_t__ data_type; } ;
struct v4l2_rect {int height; int top; int left; } ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int ,int,int,int) ;
 int FUNC_4 (scalar_t__,int,int,int,int,int,int) ;
 int FUNC_5 (struct vpdma_dtd*) ;

void FUNC_6(struct vpdma_desc_list *VAR_7, int VAR_8,
  int VAR_9, const struct v4l2_rect *VAR_10,
  const struct vpdma_data_format *VAR_11, dma_addr_t VAR_12,
  int VAR_13, int VAR_14, int VAR_15, u32 VAR_16)
{
 int VAR_17 = 0;
 int VAR_18 = 0;
 int VAR_19 = 1;
 int VAR_20, VAR_21;
 struct v4l2_rect VAR_22 = *VAR_10;
 int VAR_23 = VAR_11->depth;
 struct vpdma_dtd *VAR_24;

 VAR_20 = VAR_21 = VAR_15;

 if (VAR_11->type == VAR_3 &&
   VAR_11->data_type == VAR_0) {
  VAR_22.height >>= 1;
  VAR_22.top >>= 1;
  VAR_23 = 8;
 }

 VAR_12 += VAR_22.top * VAR_9 + (VAR_22.left * VAR_23 >> 3);

 VAR_24 = VAR_7->next;
 FUNC_0((void *)(VAR_24 + 1) > (VAR_7->buf.addr + VAR_7->buf.size));

 VAR_24->type_ctl_stride = FUNC_4(VAR_11->data_type,
     VAR_19,
     VAR_18,
     !!(VAR_16 & VAR_4),
     !!(VAR_16 & VAR_2),
     !!(VAR_16 & VAR_6),
     VAR_9);
 VAR_24->w1 = 0;
 VAR_24->start_addr = (u32) VAR_12;
 VAR_24->pkt_ctl = FUNC_3(!!(VAR_16 & VAR_5),
    VAR_1, VAR_20, VAR_17, VAR_21);
 VAR_24->desc_write_addr = FUNC_1(0, 0, 0, 0);
 VAR_24->max_width_height = FUNC_2(VAR_13, VAR_14);
 VAR_24->client_attr0 = 0;
 VAR_24->client_attr1 = 0;

 VAR_7->next = VAR_24 + 1;

 FUNC_5(VAR_24);
}
