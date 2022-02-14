
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* driver; } ;
struct TYPE_6__ {scalar_t__ event_flags_shadow; TYPE_2__ vring; } ;
struct vring_virtqueue {TYPE_3__ packed; } ;
struct virtqueue {int dummy; } ;
struct TYPE_4__ {int flags; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct vring_virtqueue* FUNC_1 (struct virtqueue*) ;

__attribute__((used)) static void FUNC_2(struct virtqueue *VAR_1)
{
 struct vring_virtqueue *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->packed.event_flags_shadow != VAR_0) {
  VAR_2->packed.event_flags_shadow = VAR_0;
  VAR_2->packed.vring.driver->flags =
   FUNC_0(VAR_2->packed.event_flags_shadow);
 }
}
