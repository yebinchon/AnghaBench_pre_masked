
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef uintptr_t u32 ;
struct TYPE_13__ {int index; int vector; int cpu; int affinity_mask; } ;
struct TYPE_12__ {unsigned int type; void* info; } ;
struct TYPE_14__ {void* info; } ;
struct ionic_qcq {unsigned int flags; uintptr_t base_pa; uintptr_t total_size; TYPE_4__ intr; TYPE_1__ q; TYPE_5__ cq; void* base; } ;
struct ionic_lif {int netdev; TYPE_10__* ionic; } ;
struct ionic_dev {int intr_ctrl; } ;
struct device {int dummy; } ;
typedef uintptr_t dma_addr_t ;
struct TYPE_11__ {struct device* dev; struct ionic_dev idev; } ;


 uintptr_t FUNC_0 (uintptr_t,uintptr_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 uintptr_t VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (struct device*,char*,char const*,unsigned int,int) ;
 void* FUNC_4 (struct device*,int,int ) ;
 void* FUNC_5 (struct device*,uintptr_t,uintptr_t*,int ) ;
 int FUNC_6 (TYPE_10__*,int) ;
 int FUNC_7 (TYPE_5__*,TYPE_1__*) ;
 int FUNC_8 (struct ionic_lif*,TYPE_5__*,TYPE_4__*,unsigned int,unsigned int) ;
 int FUNC_9 (TYPE_5__*,void*,uintptr_t) ;
 int FUNC_10 (struct ionic_lif*,TYPE_4__*) ;
 int FUNC_11 (struct ionic_lif*,int) ;
 int FUNC_12 (int ,int,int ) ;
 int FUNC_13 (struct ionic_lif*,struct ionic_dev*,TYPE_1__*,unsigned int,char const*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_14 (TYPE_1__*,void*,uintptr_t) ;
 int FUNC_15 (TYPE_1__*,void*,uintptr_t) ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 (int ,char*,char const*,int) ;
 int FUNC_18 () ;

__attribute__((used)) static int FUNC_19(struct ionic_lif *VAR_7, unsigned int VAR_8,
      unsigned int VAR_9,
      const char *VAR_10, unsigned int VAR_11,
      unsigned int VAR_12, unsigned int VAR_13,
      unsigned int VAR_14,
      unsigned int VAR_15,
      unsigned int VAR_16, struct ionic_qcq **VAR_17)
{
 struct ionic_dev *VAR_18 = &VAR_7->ionic->idev;
 u32 VAR_19, VAR_20, VAR_21, VAR_22;
 struct device *VAR_23 = VAR_7->ionic->dev;
 void *VAR_24, *VAR_25, *VAR_26;
 dma_addr_t VAR_27 = 0;
 dma_addr_t VAR_28 = 0;
 dma_addr_t VAR_29 = 0;
 struct ionic_qcq *VAR_30;
 int VAR_31;

 *VAR_17 = ((void*)0);

 VAR_19 = VAR_12 * VAR_13;
 VAR_20 = VAR_12 * VAR_14;
 VAR_21 = VAR_12 * VAR_15;

 VAR_22 = FUNC_0(VAR_19, VAR_6) + FUNC_0(VAR_20, VAR_6);




 VAR_22 += VAR_6;
 if (VAR_11 & VAR_5) {
  VAR_22 += FUNC_0(VAR_21, VAR_6);
  VAR_22 += VAR_6;
 }

 VAR_30 = FUNC_4(VAR_23, sizeof(*VAR_30), VAR_1);
 if (!VAR_30) {
  FUNC_16(VAR_7->netdev, "Cannot allocate queue structure\n");
  VAR_31 = -VAR_0;
  goto err_out;
 }

 VAR_30->flags = VAR_11;

 VAR_30->q.info = FUNC_4(VAR_23, sizeof(*VAR_30->q.info) * VAR_12,
       VAR_1);
 if (!VAR_30->q.info) {
  FUNC_16(VAR_7->netdev, "Cannot allocate queue info\n");
  VAR_31 = -VAR_0;
  goto err_out;
 }

 VAR_30->q.type = VAR_8;

 VAR_31 = FUNC_13(VAR_7, VAR_18, &VAR_30->q, VAR_9, VAR_10, VAR_12,
      VAR_13, VAR_15, VAR_16);
 if (VAR_31) {
  FUNC_16(VAR_7->netdev, "Cannot initialize queue\n");
  goto err_out;
 }

 if (VAR_11 & VAR_4) {
  VAR_31 = FUNC_10(VAR_7, &VAR_30->intr);
  if (VAR_31) {
   FUNC_17(VAR_7->netdev, "no intr for %s: %d\n",
        VAR_10, VAR_31);
   goto err_out;
  }

  VAR_31 = FUNC_6(VAR_7->ionic, VAR_30->intr.index);
  if (VAR_31 < 0) {
   FUNC_17(VAR_7->netdev, "no vector for %s: %d\n",
        VAR_10, VAR_31);
   goto err_out_free_intr;
  }
  VAR_30->intr.vector = VAR_31;
  FUNC_12(VAR_18->intr_ctrl, VAR_30->intr.index,
           VAR_3);

  VAR_30->intr.cpu = VAR_30->intr.index % FUNC_18();
  if (FUNC_1(VAR_30->intr.cpu))
   FUNC_2(VAR_30->intr.cpu,
     &VAR_30->intr.affinity_mask);
 } else {
  VAR_30->intr.index = VAR_2;
 }

 VAR_30->cq.info = FUNC_4(VAR_23, sizeof(*VAR_30->cq.info) * VAR_12,
        VAR_1);
 if (!VAR_30->cq.info) {
  FUNC_16(VAR_7->netdev, "Cannot allocate completion queue info\n");
  VAR_31 = -VAR_0;
  goto err_out_free_intr;
 }

 VAR_31 = FUNC_8(VAR_7, &VAR_30->cq, &VAR_30->intr, VAR_12, VAR_14);
 if (VAR_31) {
  FUNC_16(VAR_7->netdev, "Cannot initialize completion queue\n");
  goto err_out_free_intr;
 }

 VAR_30->base = FUNC_5(VAR_23, VAR_22, &VAR_30->base_pa,
           VAR_1);
 if (!VAR_30->base) {
  FUNC_16(VAR_7->netdev, "Cannot allocate queue DMA memory\n");
  VAR_31 = -VAR_0;
  goto err_out_free_intr;
 }

 VAR_30->total_size = VAR_22;

 VAR_24 = VAR_30->base;
 VAR_29 = VAR_30->base_pa;

 VAR_25 = (void *)FUNC_0((uintptr_t)VAR_24 + VAR_19, VAR_6);
 VAR_27 = FUNC_0(VAR_29 + VAR_19, VAR_6);

 if (VAR_11 & VAR_5) {
  VAR_26 = (void *)FUNC_0((uintptr_t)VAR_25 + VAR_20,
     VAR_6);
  VAR_28 = FUNC_0(VAR_27 + VAR_20, VAR_6);
  FUNC_15(&VAR_30->q, VAR_26, VAR_28);
 }

 FUNC_14(&VAR_30->q, VAR_24, VAR_29);
 FUNC_9(&VAR_30->cq, VAR_25, VAR_27);
 FUNC_7(&VAR_30->cq, &VAR_30->q);

 *VAR_17 = VAR_30;

 return 0;

err_out_free_intr:
 FUNC_11(VAR_7, VAR_30->intr.index);
err_out:
 FUNC_3(VAR_23, "qcq alloc of %s%d failed %d\n", VAR_10, VAR_9, VAR_31);
 return VAR_31;
}
