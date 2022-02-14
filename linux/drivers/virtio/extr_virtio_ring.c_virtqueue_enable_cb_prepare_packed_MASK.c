
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {TYPE_1__* driver; } ;
struct TYPE_6__ {int used_wrap_counter; int event_flags_shadow; TYPE_2__ vring; } ;
struct vring_virtqueue {int last_used_idx; TYPE_3__ packed; scalar_t__ event; int weak_barriers; } ;
struct virtqueue {int dummy; } ;
struct TYPE_4__ {void* flags; void* off_wrap; } ;


 int FUNC_0 (struct vring_virtqueue*) ;
 int FUNC_1 (struct vring_virtqueue*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (int) ;
 struct vring_virtqueue* FUNC_3 (struct virtqueue*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static unsigned FUNC_5(struct virtqueue *VAR_4)
{
 struct vring_virtqueue *VAR_5 = FUNC_3(VAR_4);

 FUNC_1(VAR_5);






 if (VAR_5->event) {
  VAR_5->packed.vring.driver->off_wrap =
   FUNC_2(VAR_5->last_used_idx |
    (VAR_5->packed.used_wrap_counter <<
     VAR_3));




  FUNC_4(VAR_5->weak_barriers);
 }

 if (VAR_5->packed.event_flags_shadow == VAR_1) {
  VAR_5->packed.event_flags_shadow = VAR_5->event ?
    VAR_0 :
    VAR_2;
  VAR_5->packed.vring.driver->flags =
    FUNC_2(VAR_5->packed.event_flags_shadow);
 }

 FUNC_0(VAR_5);
 return VAR_5->last_used_idx | ((u16)VAR_5->packed.used_wrap_counter <<
   VAR_3);
}
