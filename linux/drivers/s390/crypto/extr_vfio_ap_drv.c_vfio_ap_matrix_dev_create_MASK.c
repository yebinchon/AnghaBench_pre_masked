
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_7__ {int release; int * bus; struct device* parent; } ;
struct TYPE_8__ {TYPE_1__ device; int * vfio_ap_drv; int mdev_list; int lock; int info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,char*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *) ;
 TYPE_2__* FUNC_10 (int,int ) ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_1__*) ;
 struct device* FUNC_13 (int ) ;
 int FUNC_14 (struct device*) ;
 scalar_t__ FUNC_15 (int) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_16(void)
{
 int VAR_9;
 struct device *VAR_10;

 VAR_10 = FUNC_13(VAR_3);
 if (FUNC_1(VAR_10))
  return FUNC_2(VAR_10);

 VAR_9 = FUNC_4(&VAR_4);
 if (VAR_9)
  goto bus_register_err;

 VAR_5 = FUNC_10(sizeof(*VAR_5), VAR_1);
 if (!VAR_5) {
  VAR_9 = -VAR_0;
  goto matrix_alloc_err;
 }


 if (FUNC_15(12)) {
  VAR_9 = FUNC_3(&VAR_5->info);
  if (VAR_9)
   goto matrix_alloc_err;
 }

 FUNC_11(&VAR_5->lock);
 FUNC_0(&VAR_5->mdev_list);

 FUNC_6(&VAR_5->device, "%s", VAR_2);
 VAR_5->device.parent = VAR_10;
 VAR_5->device.bus = &VAR_4;
 VAR_5->device.release = VAR_8;
 VAR_5->vfio_ap_drv = &VAR_7;

 VAR_9 = FUNC_7(&VAR_5->device);
 if (VAR_9)
  goto matrix_reg_err;

 VAR_9 = FUNC_9(&VAR_6);
 if (VAR_9)
  goto matrix_drv_err;

 return 0;

matrix_drv_err:
 FUNC_8(&VAR_5->device);
matrix_reg_err:
 FUNC_12(&VAR_5->device);
matrix_alloc_err:
 FUNC_5(&VAR_4);
bus_register_err:
 FUNC_14(VAR_10);
 return VAR_9;
}
