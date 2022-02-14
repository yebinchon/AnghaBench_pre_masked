
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfio_ap_queue {int apqn; } ;
struct ap_device {int device; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct vfio_ap_queue* FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct vfio_ap_queue*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct vfio_ap_queue*) ;
 int FUNC_8 (int,int,int) ;

__attribute__((used)) static void FUNC_9(struct ap_device *VAR_1)
{
 struct vfio_ap_queue *VAR_2;
 int VAR_3, VAR_4;

 FUNC_5(&VAR_0->lock);
 VAR_2 = FUNC_2(&VAR_1->device);
 FUNC_3(&VAR_1->device, ((void*)0));
 VAR_3 = FUNC_0(VAR_2->apqn);
 VAR_4 = FUNC_1(VAR_2->apqn);
 FUNC_8(VAR_3, VAR_4, 1);
 FUNC_7(VAR_2);
 FUNC_4(VAR_2);
 FUNC_6(&VAR_0->lock);
}
