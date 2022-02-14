
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfio_ap_queue {scalar_t__ saved_isc; scalar_t__ saved_pfn; TYPE_1__* matrix_mdev; } ;
struct TYPE_2__ {int mdev; int kvm; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__*,int) ;

__attribute__((used)) static void FUNC_3(struct vfio_ap_queue *VAR_1)
{
 if (VAR_1->saved_isc != VAR_0 && VAR_1->matrix_mdev)
  FUNC_0(VAR_1->matrix_mdev->kvm, VAR_1->saved_isc);
 if (VAR_1->saved_pfn && VAR_1->matrix_mdev)
  FUNC_2(FUNC_1(VAR_1->matrix_mdev->mdev),
     &VAR_1->saved_pfn, 1);
 VAR_1->saved_pfn = 0;
 VAR_1->saved_isc = VAR_0;
}
