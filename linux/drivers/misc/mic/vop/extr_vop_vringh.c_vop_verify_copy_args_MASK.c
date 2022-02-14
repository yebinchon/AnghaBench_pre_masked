
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_vdev {TYPE_1__* dd; } ;
struct mic_copy_desc {scalar_t__ vr_idx; } ;
struct TYPE_2__ {scalar_t__ num_vq; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct vop_vdev *VAR_1,
           struct mic_copy_desc *VAR_2)
{
 if (!VAR_1 || VAR_2->vr_idx >= VAR_1->dd->num_vq)
  return -VAR_0;
 return 0;
}
