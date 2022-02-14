
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int gen; } ;
struct cnic_local {int (* alloc_resc ) (struct cnic_dev*) ;int (* start_hw ) (struct cnic_dev*) ;int (* free_resc ) (struct cnic_dev*) ;int (* stop_hw ) (struct cnic_dev*) ;int (* enable_int ) (struct cnic_dev*) ;int status_blk_num; TYPE_1__ status_blk; int func; struct cnic_eth_dev* ethdev; } ;
struct cnic_eth_dev {int drv_state; TYPE_2__* irq_arr; int io_base; } ;
struct cnic_dev {TYPE_3__* pcidev; int flags; int netdev; int regview; struct cnic_local* cnic_priv; } ;
struct TYPE_7__ {int devfn; } ;
struct TYPE_6__ {int status_blk_num; int status_blk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cnic_dev*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct cnic_dev*) ;
 int FUNC_7 (struct cnic_dev*) ;
 int FUNC_8 (struct cnic_dev*) ;
 int FUNC_9 (struct cnic_dev*) ;
 int FUNC_10 (struct cnic_dev*) ;
 scalar_t__ FUNC_11 (int ,int *) ;

__attribute__((used)) static int FUNC_12(struct cnic_dev *VAR_3)
{
 struct cnic_local *VAR_4 = VAR_3->cnic_priv;
 struct cnic_eth_dev *VAR_5 = VAR_4->ethdev;
 int VAR_6;

 if (FUNC_11(VAR_1, &VAR_3->flags))
  return -VAR_2;

 VAR_3->regview = VAR_5->io_base;
 FUNC_3(VAR_3->pcidev);
 VAR_4->func = FUNC_0(VAR_3->pcidev->devfn);
 VAR_4->status_blk.gen = VAR_5->irq_arr[0].status_blk;
 VAR_4->status_blk_num = VAR_5->irq_arr[0].status_blk_num;

 VAR_6 = VAR_4->alloc_resc(VAR_3);
 if (VAR_6) {
  FUNC_2(VAR_3->netdev, "allocate resource failure\n");
  goto err1;
 }

 VAR_6 = VAR_4->start_hw(VAR_3);
 if (VAR_6)
  goto err1;

 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6)
  goto err1;

 FUNC_5(VAR_1, &VAR_3->flags);

 VAR_4->enable_int(VAR_3);

 return 0;

err1:
 if (VAR_5->drv_state & VAR_0)
  VAR_4->stop_hw(VAR_3);
 else
  VAR_4->free_resc(VAR_3);
 FUNC_4(VAR_3->pcidev);
 return VAR_6;
}
