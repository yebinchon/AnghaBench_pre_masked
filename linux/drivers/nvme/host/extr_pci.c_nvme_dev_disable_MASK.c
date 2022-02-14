
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {scalar_t__ error_state; } ;
struct TYPE_6__ {scalar_t__ state; scalar_t__ queue_count; scalar_t__ admin_q; } ;
struct nvme_dev {int shutdown_lock; TYPE_1__ ctrl; int admin_tagset; int tagset; int * queues; scalar_t__ bar; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,int ,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 int FUNC_6 (struct nvme_dev*,int) ;
 int FUNC_7 (struct nvme_dev*) ;
 int FUNC_8 (struct nvme_dev*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (struct nvme_dev*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_1__*,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_15 (struct pci_dev*) ;
 int FUNC_16 (scalar_t__) ;
 struct pci_dev* FUNC_17 (int ) ;

__attribute__((used)) static void FUNC_18(struct nvme_dev *VAR_8, bool VAR_9)
{
 bool VAR_10 = 1, VAR_11 = 0;
 struct pci_dev *VAR_12 = FUNC_17(VAR_8->dev);

 FUNC_4(&VAR_8->shutdown_lock);
 if (FUNC_15(VAR_12)) {
  u32 VAR_13 = FUNC_16(VAR_8->bar + VAR_5);

  if (VAR_8->ctrl.state == VAR_2 ||
      VAR_8->ctrl.state == VAR_3) {
   VAR_11 = 1;
   FUNC_9(&VAR_8->ctrl);
  }
  VAR_10 = !!((VAR_13 & VAR_0) || !(VAR_13 & VAR_1) ||
   VAR_12->error_state != VAR_7);
 }





 if (!VAR_10 && VAR_9 && VAR_11)
  FUNC_14(&VAR_8->ctrl, VAR_4);

 FUNC_11(&VAR_8->ctrl);

 if (!VAR_10 && VAR_8->ctrl.queue_count > 0) {
  FUNC_7(VAR_8);
  FUNC_6(VAR_8, VAR_9);
 }
 FUNC_12(VAR_8);
 FUNC_13(&VAR_8->queues[0]);
 FUNC_8(VAR_8);

 FUNC_0(&VAR_8->tagset, VAR_6, &VAR_8->ctrl);
 FUNC_0(&VAR_8->admin_tagset, VAR_6, &VAR_8->ctrl);
 FUNC_1(&VAR_8->tagset);
 FUNC_1(&VAR_8->admin_tagset);






 if (VAR_9) {
  FUNC_10(&VAR_8->ctrl);
  if (VAR_8->ctrl.admin_q && !FUNC_3(VAR_8->ctrl.admin_q))
   FUNC_2(VAR_8->ctrl.admin_q);
 }
 FUNC_5(&VAR_8->shutdown_lock);
}
