
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ena_com_aenq {int q_depth; int head; int phase; struct ena_aenq_handlers* aenq_handlers; int dma_addr; int entries; } ;
struct ena_com_dev {scalar_t__ reg_bar; struct ena_com_aenq aenq; int dmadev; } ;
struct ena_aenq_handlers {int dummy; } ;
struct ena_admin_aenq_entry {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,int ,int *,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct ena_com_dev *VAR_10,
       struct ena_aenq_handlers *VAR_11)
{
 struct ena_com_aenq *VAR_12 = &VAR_10->aenq;
 u32 VAR_13, VAR_14, VAR_15;
 u16 VAR_16;

 VAR_10->aenq.q_depth = VAR_1;
 VAR_16 = FUNC_0(VAR_1);
 VAR_12->entries = FUNC_3(VAR_10->dmadev, VAR_16, &VAR_12->dma_addr,
        VAR_9);

 if (!VAR_12->entries) {
  FUNC_4("memory allocation failed\n");
  return -VAR_8;
 }

 VAR_12->head = VAR_12->q_depth;
 VAR_12->phase = 1;

 VAR_13 = FUNC_2(VAR_12->dma_addr);
 VAR_14 = FUNC_1(VAR_12->dma_addr);

 FUNC_6(VAR_13, VAR_10->reg_bar + VAR_3);
 FUNC_6(VAR_14, VAR_10->reg_bar + VAR_2);

 VAR_15 = 0;
 VAR_15 |= VAR_10->aenq.q_depth & VAR_4;
 VAR_15 |= (sizeof(struct ena_admin_aenq_entry)
        << VAR_6) &
       VAR_5;
 FUNC_6(VAR_15, VAR_10->reg_bar + VAR_7);

 if (FUNC_5(!VAR_11)) {
  FUNC_4("aenq handlers pointer is NULL\n");
  return -VAR_0;
 }

 VAR_12->aenq_handlers = VAR_11;

 return 0;
}
