
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_7__ {int num; TYPE_2__* driver; } ;
struct TYPE_8__ {int used_wrap_counter; int event_flags_shadow; TYPE_3__ vring; } ;
struct TYPE_5__ {int num_free; } ;
struct vring_virtqueue {int last_used_idx; TYPE_4__ packed; int weak_barriers; scalar_t__ event; TYPE_1__ vq; } ;
struct virtqueue {int dummy; } ;
struct TYPE_6__ {void* flags; void* off_wrap; } ;


 int FUNC_0 (struct vring_virtqueue*) ;
 int FUNC_1 (struct vring_virtqueue*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct vring_virtqueue*,int,int) ;
 struct vring_virtqueue* FUNC_4 (struct virtqueue*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static bool FUNC_7(struct virtqueue *VAR_4)
{
 struct vring_virtqueue *VAR_5 = FUNC_4(VAR_4);
 u16 VAR_6, VAR_7;
 u16 VAR_8;

 FUNC_1(VAR_5);






 if (VAR_5->event) {

  VAR_8 = (VAR_5->packed.vring.num - VAR_5->vq.num_free) * 3 / 4;
  VAR_7 = VAR_5->packed.used_wrap_counter;

  VAR_6 = VAR_5->last_used_idx + VAR_8;
  if (VAR_6 >= VAR_5->packed.vring.num) {
   VAR_6 -= VAR_5->packed.vring.num;
   VAR_7 ^= 1;
  }

  VAR_5->packed.vring.driver->off_wrap = FUNC_2(VAR_6 |
   (VAR_7 << VAR_3));





  FUNC_6(VAR_5->weak_barriers);
 }

 if (VAR_5->packed.event_flags_shadow == VAR_1) {
  VAR_5->packed.event_flags_shadow = VAR_5->event ?
    VAR_0 :
    VAR_2;
  VAR_5->packed.vring.driver->flags =
    FUNC_2(VAR_5->packed.event_flags_shadow);
 }





 FUNC_5(VAR_5->weak_barriers);

 if (FUNC_3(VAR_5,
    VAR_5->last_used_idx,
    VAR_5->packed.used_wrap_counter)) {
  FUNC_0(VAR_5);
  return 0;
 }

 FUNC_0(VAR_5);
 return 1;
}
