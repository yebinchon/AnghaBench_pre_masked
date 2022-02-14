
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vfio_ap_queue {struct ap_matrix_mdev* matrix_mdev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int aqm; int apm; } ;
struct ap_matrix_mdev {TYPE_1__ matrix; } ;
struct TYPE_6__ {TYPE_2__* vfio_ap_drv; } ;
struct TYPE_5__ {int driver; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct vfio_ap_queue* FUNC_2 (struct device*) ;
 struct device* FUNC_3 (int *,int *,int*,int ) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static struct vfio_ap_queue *FUNC_6(
     struct ap_matrix_mdev *VAR_2,
     int VAR_3)
{
 struct vfio_ap_queue *VAR_4;
 struct device *VAR_5;

 if (!FUNC_5(FUNC_0(VAR_3), VAR_2->matrix.apm))
  return ((void*)0);
 if (!FUNC_5(FUNC_1(VAR_3), VAR_2->matrix.aqm))
  return ((void*)0);

 VAR_5 = FUNC_3(&VAR_1->vfio_ap_drv->driver, ((void*)0),
     &VAR_3, VAR_0);
 if (!VAR_5)
  return ((void*)0);
 VAR_4 = FUNC_2(VAR_5);
 VAR_4->matrix_mdev = VAR_2;
 FUNC_4(VAR_5);

 return VAR_4;
}
