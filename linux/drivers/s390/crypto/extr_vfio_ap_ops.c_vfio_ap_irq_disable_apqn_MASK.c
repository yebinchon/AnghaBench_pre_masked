
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfio_ap_queue {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* vfio_ap_drv; } ;
struct TYPE_3__ {int driver; } ;


 struct vfio_ap_queue* FUNC_0 (struct device*) ;
 struct device* FUNC_1 (int *,int *,int*,int ) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct vfio_ap_queue*) ;

__attribute__((used)) static void FUNC_4(int VAR_2)
{
 struct device *VAR_3;
 struct vfio_ap_queue *VAR_4;

 VAR_3 = FUNC_1(&VAR_1->vfio_ap_drv->driver, ((void*)0),
     &VAR_2, VAR_0);
 if (VAR_3) {
  VAR_4 = FUNC_0(VAR_3);
  FUNC_3(VAR_4);
  FUNC_2(VAR_3);
 }
}
