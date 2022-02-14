
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int addr; scalar_t__ dma_addr; } ;
struct vpdma_desc_list {int next; int type; TYPE_1__ buf; } ;
struct vpdma_data {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 scalar_t__ FUNC_2 (struct vpdma_data*,int) ;
 int FUNC_3 (struct vpdma_data*,int ,int) ;

int FUNC_4(struct vpdma_data *VAR_5,
   struct vpdma_desc_list *VAR_6, int VAR_7)
{
 int VAR_8;
 unsigned long VAR_9;

 if (FUNC_2(VAR_5, VAR_7))
  return -VAR_0;


 VAR_8 = (VAR_6->next - VAR_6->buf.addr) >> 4;

 FUNC_0(&VAR_5->lock, VAR_9);
 FUNC_3(VAR_5, VAR_1, (u32) VAR_6->buf.dma_addr);

 FUNC_3(VAR_5, VAR_2,
   (VAR_7 << VAR_3) |
   (VAR_6->type << VAR_4) |
   VAR_8);
 FUNC_1(&VAR_5->lock, VAR_9);

 return 0;
}
