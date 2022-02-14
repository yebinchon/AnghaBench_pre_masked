
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76_queue_buf {int len; scalar_t__ addr; } ;
struct mt76_queue {int buf_offset; int queued; int ndesc; int lock; int buf_size; int rx_page; } ;
struct mt76_dev {int dev; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,void*,int,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct mt76_dev*,struct mt76_queue*,struct mt76_queue_buf*,int,int ,void*,int *) ;
 int FUNC_4 (struct mt76_dev*,struct mt76_queue*) ;
 void* FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(struct mt76_dev *VAR_2, struct mt76_queue *VAR_3)
{
 dma_addr_t VAR_4;
 void *VAR_5;
 int VAR_6 = 0;
 int VAR_7 = FUNC_0(VAR_3->buf_size);
 int VAR_8 = VAR_3->buf_offset;
 int VAR_9;

 FUNC_7(&VAR_3->lock);

 while (VAR_3->queued < VAR_3->ndesc - 1) {
  struct mt76_queue_buf VAR_10;

  VAR_5 = FUNC_5(&VAR_3->rx_page, VAR_3->buf_size, VAR_1);
  if (!VAR_5)
   break;

  VAR_4 = FUNC_1(VAR_2->dev, VAR_5, VAR_7, VAR_0);
  if (FUNC_9(FUNC_2(VAR_2->dev, VAR_4))) {
   FUNC_6(VAR_5);
   break;
  }

  VAR_10.addr = VAR_4 + VAR_8;
  VAR_10.len = VAR_7 - VAR_8;
  VAR_9 = FUNC_3(VAR_2, VAR_3, &VAR_10, 1, 0, VAR_5, ((void*)0));
  VAR_6++;
 }

 if (VAR_6)
  FUNC_4(VAR_2, VAR_3);

 FUNC_8(&VAR_3->lock);

 return VAR_6;
}
