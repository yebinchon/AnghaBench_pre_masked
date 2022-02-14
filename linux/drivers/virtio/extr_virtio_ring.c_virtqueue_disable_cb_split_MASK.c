
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* avail; } ;
struct TYPE_6__ {int avail_flags_shadow; TYPE_2__ vring; } ;
struct vring_virtqueue {TYPE_3__ split; int event; } ;
struct virtqueue {int vdev; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 struct vring_virtqueue* FUNC_1 (struct virtqueue*) ;

__attribute__((used)) static void FUNC_2(struct virtqueue *VAR_1)
{
 struct vring_virtqueue *VAR_2 = FUNC_1(VAR_1);

 if (!(VAR_2->split.avail_flags_shadow & VAR_0)) {
  VAR_2->split.avail_flags_shadow |= VAR_0;
  if (!VAR_2->event)
   VAR_2->split.vring.avail->flags =
    FUNC_0(VAR_1->vdev,
      VAR_2->split.avail_flags_shadow);
 }
}
