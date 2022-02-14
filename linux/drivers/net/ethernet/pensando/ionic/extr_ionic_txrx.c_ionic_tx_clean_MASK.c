
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int len; } ;
struct ionic_txq_sg_elem {int len; int addr; } ;
struct ionic_txq_sg_desc {struct ionic_txq_sg_elem* elems; } ;
struct ionic_txq_desc {int len; int cmd; } ;
struct ionic_tx_stats {int clean; } ;
struct ionic_queue {int wake; TYPE_2__* lif; } ;
struct ionic_desc_info {struct ionic_txq_desc* desc; struct ionic_txq_sg_desc* sg_desc; } ;
struct ionic_cq_info {int dummy; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int netdev; TYPE_1__* ionic; } ;
struct TYPE_3__ {struct device* dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct device*,int ,int ,int ) ;
 int FUNC_4 (struct device*,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct ionic_queue*) ;
 struct ionic_tx_stats* FUNC_10 (struct ionic_queue*) ;
 int FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(struct ionic_queue *VAR_3, struct ionic_desc_info *VAR_4,
      struct ionic_cq_info *VAR_5, void *VAR_6)
{
 struct ionic_txq_sg_desc *VAR_7 = VAR_4->sg_desc;
 struct ionic_txq_sg_elem *VAR_8 = VAR_7->elems;
 struct ionic_tx_stats *VAR_9 = FUNC_10(VAR_3);
 struct ionic_txq_desc *VAR_10 = VAR_4->desc;
 struct device *VAR_11 = VAR_3->lif->ionic->dev;
 u8 VAR_12, VAR_13, VAR_14;
 u16 VAR_15;
 unsigned int VAR_16;
 u64 VAR_17;

 FUNC_1(FUNC_6(VAR_10->cmd),
       &VAR_12, &VAR_13, &VAR_14, &VAR_17);




 if (VAR_12 != VAR_2 ||
     VAR_13 & VAR_1)
  FUNC_4(VAR_11, (dma_addr_t)VAR_17,
     FUNC_5(VAR_10->len), VAR_0);
 else
  FUNC_3(VAR_11, (dma_addr_t)VAR_17,
          FUNC_5(VAR_10->len), VAR_0);

 for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++, VAR_8++)
  FUNC_3(VAR_11, (dma_addr_t)FUNC_6(VAR_8->addr),
          FUNC_5(VAR_8->len), VAR_0);

 if (VAR_6) {
  struct sk_buff *VAR_18 = VAR_6;
  u32 VAR_19 = VAR_18->len;

  VAR_15 = FUNC_11(VAR_18);
  if (FUNC_12(FUNC_0(VAR_3->lif->netdev,
            VAR_15))) {
   FUNC_8(VAR_3->lif->netdev, VAR_15);
   VAR_3->wake++;
  }
  FUNC_2(VAR_18);
  VAR_9->clean++;
  FUNC_7(FUNC_9(VAR_3), 1, VAR_19);
 }
}
