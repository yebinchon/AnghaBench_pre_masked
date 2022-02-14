
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_3__ {scalar_t__ num; scalar_t__ device; } ;
struct TYPE_4__ {TYPE_1__ vring; scalar_t__ avail_wrap_counter; scalar_t__ next_avail_idx; } ;
struct vring_virtqueue {TYPE_2__ packed; scalar_t__ num_added; int weak_barriers; } ;
struct virtqueue {int dummy; } ;
typedef scalar_t__ __le16 ;


 int FUNC_0 (struct vring_virtqueue*) ;
 int FUNC_1 (struct vring_virtqueue*) ;
 int FUNC_2 (struct vring_virtqueue*) ;
 int FUNC_3 (struct vring_virtqueue*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 struct vring_virtqueue* FUNC_5 (struct virtqueue*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static bool FUNC_8(struct virtqueue *VAR_3)
{
 struct vring_virtqueue *VAR_4 = FUNC_5(VAR_3);
 u16 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 bool VAR_11;
 union {
  struct {
   __le16 off_wrap;
   __le16 flags;
  };
  u32 u32;
 } VAR_12;

 FUNC_3(VAR_4);





 FUNC_6(VAR_4->weak_barriers);

 VAR_6 = VAR_4->packed.next_avail_idx - VAR_4->num_added;
 VAR_5 = VAR_4->packed.next_avail_idx;
 VAR_4->num_added = 0;

 VAR_12.u32 = *(u32 *)VAR_4->packed.vring.device;
 VAR_8 = FUNC_4(VAR_12.flags);

 FUNC_1(VAR_4);
 FUNC_2(VAR_4);

 if (VAR_8 != VAR_0) {
  VAR_11 = (VAR_8 != VAR_1);
  goto out;
 }

 VAR_7 = FUNC_4(VAR_12.off_wrap);

 VAR_9 = VAR_7 >> VAR_2;
 VAR_10 = VAR_7 & ~(1 << VAR_2);
 if (VAR_9 != VAR_4->packed.avail_wrap_counter)
  VAR_10 -= VAR_4->packed.vring.num;

 VAR_11 = FUNC_7(VAR_10, VAR_5, VAR_6);
out:
 FUNC_0(VAR_4);
 return VAR_11;
}
