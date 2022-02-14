
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct TYPE_2__ {unsigned int num; struct vring_used* used; struct vring_avail* avail; struct vring_desc* desc; } ;
struct vringh {unsigned long long little_endian; unsigned long long event_indices; int weak_barriers; TYPE_1__ vring; scalar_t__ last_used_idx; scalar_t__ last_avail_idx; scalar_t__ completed; } ;
struct vring_used {int dummy; } ;
struct vring_desc {int dummy; } ;
struct vring_avail {int dummy; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,unsigned int) ;

int FUNC_1(struct vringh *VAR_3, u64 VAR_4,
       unsigned int VAR_5, bool VAR_6,
       struct vring_desc *VAR_7,
       struct vring_avail *VAR_8,
       struct vring_used *VAR_9)
{

 if (!VAR_5 || VAR_5 > 0xffff || (VAR_5 & (VAR_5 - 1))) {
  FUNC_0("Bad ring size %u", VAR_5);
  return -VAR_0;
 }

 VAR_3->little_endian = (VAR_4 & (1ULL << VAR_1));
 VAR_3->event_indices = (VAR_4 & (1 << VAR_2));
 VAR_3->weak_barriers = VAR_6;
 VAR_3->completed = 0;
 VAR_3->last_avail_idx = 0;
 VAR_3->last_used_idx = 0;
 VAR_3->vring.num = VAR_5;
 VAR_3->vring.desc = VAR_7;
 VAR_3->vring.avail = VAR_8;
 VAR_3->vring.used = VAR_9;
 return 0;
}
