
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vfio_ccw_private {scalar_t__ state; int num_regions; TYPE_2__* region; int nb; int cp; } ;
struct mdev_device {int dummy; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* release ) (struct vfio_ccw_private*,TYPE_2__*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct vfio_ccw_private* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct mdev_device*) ;
 int FUNC_4 (struct mdev_device*) ;
 int FUNC_5 (struct vfio_ccw_private*,TYPE_2__*) ;
 int FUNC_6 (struct mdev_device*) ;
 int FUNC_7 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_8(struct mdev_device *VAR_3)
{
 struct vfio_ccw_private *VAR_4 =
  FUNC_1(FUNC_4(VAR_3));
 int VAR_5;

 if ((VAR_4->state != VAR_0) &&
     (VAR_4->state != VAR_1)) {
  if (!FUNC_6(VAR_3))
   VAR_4->state = VAR_1;

 }

 FUNC_0(&VAR_4->cp);
 FUNC_7(FUNC_3(VAR_3), VAR_2,
     &VAR_4->nb);

 for (VAR_5 = 0; VAR_5 < VAR_4->num_regions; VAR_5++)
  VAR_4->region[VAR_5].ops->release(VAR_4, &VAR_4->region[VAR_5]);

 VAR_4->num_regions = 0;
 FUNC_2(VAR_4->region);
 VAR_4->region = ((void*)0);
}
