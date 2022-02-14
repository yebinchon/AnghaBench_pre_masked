
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mdev_device {int dummy; } ;
struct ap_matrix_mdev {int group_notifier; int iommu_notifier; TYPE_4__* kvm; } ;
struct TYPE_6__ {int * pqap_hook; } ;
struct TYPE_7__ {TYPE_1__ crypto; } ;
struct TYPE_9__ {TYPE_2__ arch; } ;
struct TYPE_8__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_3__* VAR_3 ;
 int FUNC_2 (struct mdev_device*) ;
 struct ap_matrix_mdev* FUNC_3 (struct mdev_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct mdev_device*) ;
 int FUNC_8 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_9(struct mdev_device *VAR_4)
{
 struct ap_matrix_mdev *VAR_5 = FUNC_3(VAR_4);

 FUNC_5(&VAR_3->lock);
 if (VAR_5->kvm) {
  FUNC_0(VAR_5->kvm);
  VAR_5->kvm->arch.crypto.pqap_hook = ((void*)0);
  FUNC_7(VAR_4);
  FUNC_1(VAR_5->kvm);
  VAR_5->kvm = ((void*)0);
 }
 FUNC_6(&VAR_3->lock);

 FUNC_8(FUNC_2(VAR_4), VAR_2,
     &VAR_5->iommu_notifier);
 FUNC_8(FUNC_2(VAR_4), VAR_1,
     &VAR_5->group_notifier);
 FUNC_4(VAR_0);
}
