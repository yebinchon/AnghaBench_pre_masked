
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_6__ {TYPE_1__* used; } ;
struct TYPE_5__ {TYPE_3__ vring; scalar_t__ avail_idx_shadow; } ;
struct vring_virtqueue {TYPE_2__ split; scalar_t__ event; scalar_t__ num_added; int weak_barriers; } ;
struct virtqueue {int vdev; } ;
struct TYPE_4__ {int flags; } ;


 int FUNC_0 (struct vring_virtqueue*) ;
 int FUNC_1 (struct vring_virtqueue*) ;
 int FUNC_2 (struct vring_virtqueue*) ;
 int FUNC_3 (struct vring_virtqueue*) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ) ;
 struct vring_virtqueue* FUNC_5 (struct virtqueue*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static bool FUNC_10(struct virtqueue *VAR_1)
{
 struct vring_virtqueue *VAR_2 = FUNC_5(VAR_1);
 u16 VAR_3, VAR_4;
 bool VAR_5;

 FUNC_3(VAR_2);


 FUNC_7(VAR_2->weak_barriers);

 VAR_4 = VAR_2->split.avail_idx_shadow - VAR_2->num_added;
 VAR_3 = VAR_2->split.avail_idx_shadow;
 VAR_2->num_added = 0;

 FUNC_1(VAR_2);
 FUNC_2(VAR_2);

 if (VAR_2->event) {
  VAR_5 = FUNC_9(FUNC_6(VAR_1->vdev,
     FUNC_8(&VAR_2->split.vring)),
           VAR_3, VAR_4);
 } else {
  VAR_5 = !(VAR_2->split.vring.used->flags &
     FUNC_4(VAR_1->vdev,
      VAR_0));
 }
 FUNC_0(VAR_2);
 return VAR_5;
}
