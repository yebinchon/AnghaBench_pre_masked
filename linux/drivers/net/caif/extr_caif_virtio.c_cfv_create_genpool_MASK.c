
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct cfv_info {int allocsz; int tx_hr; int tx_tr; int reserved_size; int watermark_tx; int vq_tx; int reserved_mem; int genpool; TYPE_4__* ndev; scalar_t__ alloc_addr; int alloc_dma; TYPE_3__* vdev; } ;
typedef int phys_addr_t ;
struct TYPE_9__ {int mtu; } ;
struct TYPE_7__ {TYPE_1__* parent; } ;
struct TYPE_8__ {TYPE_2__ dev; } ;
struct TYPE_6__ {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cfv_info*) ;
 scalar_t__ FUNC_1 (int ,int,int *,int ) ;
 int FUNC_2 (int ,unsigned long,int ,int,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (TYPE_4__*,char*,int) ;
 int FUNC_6 (TYPE_4__*,char*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct cfv_info *VAR_4)
{
 int VAR_5;






 VAR_5 = -VAR_1;
 VAR_4->allocsz = (FUNC_9(VAR_4->vq_tx) *
   (VAR_2 + VAR_4->tx_hr + VAR_4->tx_tr) * 11)/10;
 if (VAR_4->allocsz <= (FUNC_7() + 1) * VAR_4->ndev->mtu)
  return -VAR_0;

 for (;;) {
  if (VAR_4->allocsz <= FUNC_7() * VAR_4->ndev->mtu) {
   FUNC_6(VAR_4->ndev, "Not enough device memory\n");
   return -VAR_1;
  }

  VAR_4->alloc_addr = FUNC_1(
      VAR_4->vdev->dev.parent->parent,
      VAR_4->allocsz, &VAR_4->alloc_dma,
      VAR_3);
  if (VAR_4->alloc_addr)
   break;

  VAR_4->allocsz = (VAR_4->allocsz * 3) >> 2;
 }

 FUNC_5(VAR_4->ndev, "Allocated %zd bytes from dma-memory\n",
     VAR_4->allocsz);


 VAR_4->genpool = FUNC_4(7, -1);
 if (!VAR_4->genpool)
  goto err;

 VAR_5 = FUNC_2(VAR_4->genpool, (unsigned long)VAR_4->alloc_addr,
    (phys_addr_t)FUNC_8(VAR_4->alloc_addr),
    VAR_4->allocsz, -1);
 if (VAR_5)
  goto err;




 VAR_4->reserved_size = FUNC_7() * VAR_4->ndev->mtu;
 VAR_4->reserved_mem = FUNC_3(VAR_4->genpool,
        VAR_4->reserved_size);
 if (!VAR_4->reserved_mem) {
  VAR_5 = -VAR_1;
  goto err;
 }

 VAR_4->watermark_tx = FUNC_9(VAR_4->vq_tx);
 return 0;
err:
 FUNC_0(VAR_4);
 return VAR_5;
}
