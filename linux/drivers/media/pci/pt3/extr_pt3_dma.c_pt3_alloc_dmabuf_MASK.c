
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xfer_desc {void* next_h; void* next_l; scalar_t__ size; void* addr_h; void* addr_l; } ;
struct pt3_board {int num_bufs; TYPE_2__* pdev; } ;
struct TYPE_5__ {struct pt3_board* priv; } ;
struct pt3_adapter {int num_bufs; TYPE_4__* desc_buf; TYPE_3__* buffer; int num_desc_bufs; TYPE_1__ dvb_adap; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_8__ {scalar_t__ b_addr; struct xfer_desc* descs; } ;
struct TYPE_7__ {scalar_t__ b_addr; void* data; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int *,int,scalar_t__*,int ) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct pt3_adapter*) ;
 int FUNC_4 (struct pt3_adapter*) ;
 void* FUNC_5 (scalar_t__) ;

int FUNC_6(struct pt3_adapter *VAR_7)
{
 struct pt3_board *VAR_8;
 void *VAR_9;
 int VAR_10, VAR_11;
 int VAR_12, VAR_13;
 int VAR_14;
 dma_addr_t VAR_15, VAR_16;
 struct xfer_desc *VAR_17;

 VAR_8 = VAR_7->dvb_adap.priv;
 VAR_7->num_bufs = 0;
 VAR_7->num_desc_bufs = 0;
 for (VAR_10 = 0; VAR_10 < VAR_8->num_bufs; VAR_10++) {
  VAR_9 = FUNC_1(&VAR_8->pdev->dev, VAR_0,
     &VAR_7->buffer[VAR_10].b_addr, VAR_5);
  if (VAR_9 == ((void*)0))
   goto failed;
  VAR_7->buffer[VAR_10].data = VAR_9;
  VAR_7->num_bufs++;
 }
 FUNC_4(VAR_7);


 VAR_12 = 0;
 VAR_13 = 0;
 VAR_14 =
  FUNC_0(VAR_7->num_bufs * VAR_1, VAR_3);
 for (VAR_10 = 0; VAR_10 < VAR_14; VAR_10++) {
  VAR_9 = FUNC_1(&VAR_8->pdev->dev, VAR_6,
     &VAR_16, VAR_5);
  if (VAR_9 == ((void*)0))
   goto failed;
  VAR_7->num_desc_bufs++;
  VAR_7->desc_buf[VAR_10].descs = VAR_9;
  VAR_7->desc_buf[VAR_10].b_addr = VAR_16;

  if (VAR_10 > 0) {
   VAR_17 = &VAR_7->desc_buf[VAR_10 - 1].descs[VAR_3 - 1];
   VAR_17->next_l = FUNC_2(VAR_16);
   VAR_17->next_h = FUNC_5(VAR_16);
  }
  for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
   VAR_15 = VAR_7->buffer[VAR_12].b_addr + VAR_13;
   VAR_17 = &VAR_7->desc_buf[VAR_10].descs[VAR_11];
   VAR_17->addr_l = FUNC_2(VAR_15);
   VAR_17->addr_h = FUNC_5(VAR_15);
   VAR_17->size = VAR_2;

   VAR_16 += sizeof(struct xfer_desc);
   VAR_17->next_l = FUNC_2(VAR_16);
   VAR_17->next_h = FUNC_5(VAR_16);

   VAR_13 += VAR_2;
   if (VAR_13 >= VAR_0) {
    VAR_13 -= VAR_0;
    VAR_12++;
    if (VAR_12 >= VAR_7->num_bufs) {
     VAR_16 = VAR_7->desc_buf[0].b_addr;
     VAR_17->next_l = FUNC_2(VAR_16);
     VAR_17->next_h = FUNC_5(VAR_16);
     return 0;
    }
   }
  }
 }
 return 0;

failed:
 FUNC_3(VAR_7);
 return -VAR_4;
}
