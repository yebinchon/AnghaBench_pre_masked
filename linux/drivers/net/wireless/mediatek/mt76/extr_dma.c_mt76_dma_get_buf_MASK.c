
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt76_queue_entry {int * buf; } ;
struct mt76_queue {int buf_size; struct mt76_desc* desc; struct mt76_queue_entry* entry; } ;
struct mt76_dev {int dev; } ;
struct mt76_desc {int info; int ctrl; int buf0; } ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,void*,int,int ) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static void *
FUNC_5(struct mt76_dev *VAR_3, struct mt76_queue *VAR_4, int VAR_5,
   int *VAR_6, u32 *VAR_7, bool *VAR_8)
{
 struct mt76_queue_entry *VAR_9 = &VAR_4->entry[VAR_5];
 struct mt76_desc *VAR_10 = &VAR_4->desc[VAR_5];
 dma_addr_t VAR_11;
 void *VAR_12 = VAR_9->buf;
 int VAR_13 = FUNC_2(VAR_4->buf_size);

 VAR_11 = FUNC_4(FUNC_1(VAR_10->buf0));
 if (VAR_6) {
  u32 VAR_14 = FUNC_4(FUNC_1(VAR_10->ctrl));
  *VAR_6 = FUNC_0(VAR_2, VAR_14);
  *VAR_8 = !(VAR_14 & VAR_1);
 }

 if (VAR_7)
  *VAR_7 = FUNC_4(VAR_10->info);

 FUNC_3(VAR_3->dev, VAR_11, VAR_13, VAR_0);
 VAR_9->buf = ((void*)0);

 return VAR_12;
}
