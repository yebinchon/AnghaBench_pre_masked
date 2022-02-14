
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned long len; int va; } ;
struct vop_vringh {TYPE_3__ vring; } ;
struct vop_vdev {struct vop_vringh* vvr; TYPE_2__* dd; struct vop_device* vpdev; } ;
struct vop_device {TYPE_1__* hw_ops; } ;
struct TYPE_5__ {int num_vq; } ;
struct TYPE_4__ {int (* get_dp ) (struct vop_device*) ;} ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct vop_device*) ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static inline int
FUNC_2(struct vop_vdev *VAR_1, unsigned long VAR_2,
   unsigned long *VAR_3, unsigned long *VAR_4)
{
 struct vop_device *VAR_5 = VAR_1->vpdev;
 unsigned long VAR_6 = VAR_0;
 int VAR_7;
 if (!VAR_2) {
  *VAR_4 = FUNC_1(VAR_5->hw_ops->get_dp(VAR_5));
  *VAR_3 = VAR_0;
  return 0;
 }

 for (VAR_7 = 0; VAR_7 < VAR_1->dd->num_vq; VAR_7++) {
  struct vop_vringh *VAR_8 = &VAR_1->vvr[VAR_7];

  if (VAR_2 == VAR_6) {
   *VAR_4 = FUNC_1(VAR_8->vring.va);
   *VAR_3 = VAR_8->vring.len;
   return 0;
  }
  VAR_6 += VAR_8->vring.len;
 }
 return -1;
}
