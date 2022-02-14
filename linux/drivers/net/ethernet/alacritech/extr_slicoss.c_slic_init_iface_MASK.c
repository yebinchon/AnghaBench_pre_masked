
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct slic_shmem {int isr_paddr; } ;
struct TYPE_3__ {int pending; } ;
struct slic_device {int napi; int netdev; TYPE_2__* pdev; int link_lock; int speed; int duplex; TYPE_1__ upr_list; struct slic_shmem shmem; } ;
struct TYPE_4__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,int ,int ,int ,struct slic_device*) ;
 int FUNC_7 (struct slic_device*) ;
 int FUNC_8 (struct slic_device*) ;
 int FUNC_9 (struct slic_device*) ;
 int FUNC_10 (struct slic_device*) ;
 int FUNC_11 (struct slic_device*) ;
 int FUNC_12 (struct slic_device*) ;
 int FUNC_13 (struct slic_device*) ;
 int FUNC_14 (struct slic_device*) ;
 int FUNC_15 (struct slic_device*) ;
 int FUNC_16 (struct slic_device*) ;
 int FUNC_17 (struct slic_device*) ;
 int VAR_10 ;
 int FUNC_18 (struct slic_device*) ;
 int FUNC_19 (struct slic_device*) ;
 int FUNC_20 (struct slic_device*) ;
 int FUNC_21 (struct slic_device*) ;
 int FUNC_22 (struct slic_device*,int ,int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;

__attribute__((used)) static int FUNC_25(struct slic_device *VAR_11)
{
 struct slic_shmem *VAR_12 = &VAR_11->shmem;
 int VAR_13;

 VAR_11->upr_list.pending = 0;

 VAR_13 = FUNC_15(VAR_11);
 if (VAR_13) {
  FUNC_4(VAR_11->netdev, "failed to init shared memory\n");
  return VAR_13;
 }

 VAR_13 = FUNC_18(VAR_11);
 if (VAR_13) {
  FUNC_4(VAR_11->netdev, "failed to load firmware\n");
  goto free_sm;
 }

 VAR_13 = FUNC_19(VAR_11);
 if (VAR_13) {
  FUNC_4(VAR_11->netdev,
      "failed to load firmware for receive sequencer\n");
  goto free_sm;
 }

 FUNC_22(VAR_11, VAR_5, VAR_3);
 FUNC_8(VAR_11);
 FUNC_1(1);

 VAR_13 = FUNC_14(VAR_11);
 if (VAR_13) {
  FUNC_4(VAR_11->netdev, "failed to init rx queue: %u\n", VAR_13);
  goto free_sm;
 }

 VAR_13 = FUNC_17(VAR_11);
 if (VAR_13) {
  FUNC_4(VAR_11->netdev, "failed to init tx queue: %u\n", VAR_13);
  goto free_rxq;
 }

 VAR_13 = FUNC_16(VAR_11);
 if (VAR_13) {
  FUNC_4(VAR_11->netdev, "failed to init status queue: %u\n",
      VAR_13);
  goto free_txq;
 }

 FUNC_22(VAR_11, VAR_7, FUNC_0(VAR_12->isr_paddr));
 FUNC_3(&VAR_11->napi);

 FUNC_22(VAR_11, VAR_6, 0);
 FUNC_22(VAR_11, VAR_8, 0);
 FUNC_8(VAR_11);

 FUNC_21(VAR_11);

 FUNC_23(&VAR_11->link_lock);
 VAR_11->duplex = VAR_1;
 VAR_11->speed = VAR_9;
 FUNC_24(&VAR_11->link_lock);

 FUNC_20(VAR_11);

 VAR_13 = FUNC_6(VAR_11->pdev->irq, VAR_10, VAR_2, VAR_0,
     VAR_11);
 if (VAR_13) {
  FUNC_4(VAR_11->netdev, "failed to request irq: %u\n", VAR_13);
  goto disable_napi;
 }

 FUNC_22(VAR_11, VAR_5, VAR_4);
 FUNC_8(VAR_11);

 VAR_13 = FUNC_13(VAR_11);
 if (VAR_13)
  FUNC_5(VAR_11->netdev,
       "failed to set initial link state: %u\n", VAR_13);
 return 0;

disable_napi:
 FUNC_2(&VAR_11->napi);
 FUNC_11(VAR_11);
free_txq:
 FUNC_12(VAR_11);
free_rxq:
 FUNC_9(VAR_11);
free_sm:
 FUNC_10(VAR_11);
 FUNC_7(VAR_11);

 return VAR_13;
}
