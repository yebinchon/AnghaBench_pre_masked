
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int len; scalar_t__ va; } ;
struct vop_vringh {TYPE_2__ vring; int wiov; int riov; scalar_t__ buf; int buf_da; } ;
struct vop_vdev {TYPE_3__* dd; struct vop_vringh* vvr; int virtio_bh_work; int virtio_cookie; int dc; struct vop_device* vpdev; struct vop_info* vi; } ;
struct vop_info {int dummy; } ;
struct vop_device {int dev; TYPE_1__* hw_ops; } ;
struct mic_vqconfig {int address; } ;
struct mic_bootparam {int dummy; } ;
struct TYPE_6__ {int num_vq; int type; } ;
struct TYPE_4__ {int (* free_irq ) (struct vop_device*,int ,struct vop_vdev*) ;struct mic_bootparam* (* get_dp ) (struct vop_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct mic_vqconfig* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 () ;
 struct mic_bootparam* FUNC_7 (struct vop_device*) ;
 int FUNC_8 (struct vop_device*,int ,struct vop_vdev*) ;
 int FUNC_9 (struct vop_info*,int ,struct vop_device*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct vop_vdev *VAR_2)
{
 struct vop_info *VAR_3 = VAR_2->vi;
 struct vop_device *VAR_4 = VAR_2->vpdev;
 int VAR_5;
 struct mic_vqconfig *VAR_6;
 struct mic_bootparam *VAR_7 = VAR_4->hw_ops->get_dp(VAR_4);

 if (!VAR_7)
  goto skip_hot_remove;
 FUNC_9(VAR_3, VAR_2->dc, VAR_4);
skip_hot_remove:
 VAR_4->hw_ops->free_irq(VAR_4, VAR_2->virtio_cookie, VAR_2);
 FUNC_1(&VAR_2->virtio_bh_work);
 VAR_6 = FUNC_5(VAR_2->dd);
 for (VAR_5 = 0; VAR_5 < VAR_2->dd->num_vq; VAR_5++) {
  struct vop_vringh *VAR_8 = &VAR_2->vvr[VAR_5];

  FUNC_0(&VAR_4->dev,
     VAR_8->buf_da, VAR_1,
     VAR_0);
  FUNC_2((unsigned long)VAR_8->buf,
      FUNC_3(VAR_1));
  FUNC_10(&VAR_8->riov);
  FUNC_10(&VAR_8->wiov);
  FUNC_0(&VAR_4->dev, FUNC_4(VAR_6[VAR_5].address),
     VAR_8->vring.len, VAR_0);
  FUNC_2((unsigned long)VAR_8->vring.va,
      FUNC_3(VAR_8->vring.len));
 }






 FUNC_6();
 VAR_2->dd->type = -1;
}
