
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_group {int notifier; struct kvm* kvm; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct kvm*) ;

void FUNC_1(struct vfio_group *VAR_1, struct kvm *VAR_2)
{
 VAR_1->kvm = VAR_2;
 FUNC_0(&VAR_1->notifier,
    VAR_0, VAR_2);
}
