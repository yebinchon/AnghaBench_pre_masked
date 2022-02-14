
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_9__ {size_t num; TYPE_3__* driver; TYPE_1__* desc; } ;
struct TYPE_10__ {int used_wrap_counter; scalar_t__ event_flags_shadow; TYPE_4__ vring; TYPE_2__* desc_state; } ;
struct vring_virtqueue {int broken; size_t last_used_idx; TYPE_5__ packed; int weak_barriers; } ;
struct virtqueue {int dummy; } ;
struct TYPE_8__ {int off_wrap; } ;
struct TYPE_7__ {scalar_t__ num; void* data; } ;
struct TYPE_6__ {int len; int id; } ;


 int FUNC_0 (struct vring_virtqueue*,char*,size_t) ;
 int FUNC_1 (struct vring_virtqueue*) ;
 int FUNC_2 (struct vring_virtqueue*) ;
 int FUNC_3 (struct vring_virtqueue*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct vring_virtqueue*,size_t,void**) ;
 size_t FUNC_6 (int ) ;
 unsigned int FUNC_7 (int ) ;
 int FUNC_8 (struct vring_virtqueue*) ;
 int FUNC_9 (char*) ;
 struct vring_virtqueue* FUNC_10 (struct virtqueue*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int *,int ) ;

__attribute__((used)) static void *FUNC_14(struct virtqueue *VAR_2,
       unsigned int *VAR_3,
       void **VAR_4)
{
 struct vring_virtqueue *VAR_5 = FUNC_10(VAR_2);
 u16 VAR_6, VAR_7;
 void *VAR_8;

 FUNC_3(VAR_5);

 if (FUNC_11(VAR_5->broken)) {
  FUNC_1(VAR_5);
  return ((void*)0);
 }

 if (!FUNC_8(VAR_5)) {
  FUNC_9("No more buffers in queue\n");
  FUNC_1(VAR_5);
  return ((void*)0);
 }


 FUNC_12(VAR_5->weak_barriers);

 VAR_6 = VAR_5->last_used_idx;
 VAR_7 = FUNC_6(VAR_5->packed.vring.desc[VAR_6].id);
 *VAR_3 = FUNC_7(VAR_5->packed.vring.desc[VAR_6].len);

 if (FUNC_11(VAR_7 >= VAR_5->packed.vring.num)) {
  FUNC_0(VAR_5, "id %u out of range\n", VAR_7);
  return ((void*)0);
 }
 if (FUNC_11(!VAR_5->packed.desc_state[VAR_7].data)) {
  FUNC_0(VAR_5, "id %u is not a head!\n", VAR_7);
  return ((void*)0);
 }


 VAR_8 = VAR_5->packed.desc_state[VAR_7].data;
 FUNC_5(VAR_5, VAR_7, VAR_4);

 VAR_5->last_used_idx += VAR_5->packed.desc_state[VAR_7].num;
 if (FUNC_11(VAR_5->last_used_idx >= VAR_5->packed.vring.num)) {
  VAR_5->last_used_idx -= VAR_5->packed.vring.num;
  VAR_5->packed.used_wrap_counter ^= 1;
 }






 if (VAR_5->packed.event_flags_shadow == VAR_0)
  FUNC_13(VAR_5->weak_barriers,
    &VAR_5->packed.vring.driver->off_wrap,
    FUNC_4(VAR_5->last_used_idx |
     (VAR_5->packed.used_wrap_counter <<
      VAR_1)));

 FUNC_2(VAR_5);

 FUNC_1(VAR_5);
 return VAR_8;
}
