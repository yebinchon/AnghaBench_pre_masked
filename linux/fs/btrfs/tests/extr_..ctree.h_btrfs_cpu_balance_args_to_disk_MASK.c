
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_disk_balance_args {void* stripes_max; void* stripes_min; void* limit; void* flags; void* target; void* vend; void* vstart; void* pend; void* pstart; void* devid; void* usage; void* profiles; } ;
struct btrfs_balance_args {int stripes_max; int stripes_min; int limit; int flags; int target; int vend; int vstart; int pend; int pstart; int devid; int usage; int profiles; } ;


 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct btrfs_disk_balance_args*,int ,int) ;

__attribute__((used)) static inline void
FUNC_3(struct btrfs_disk_balance_args *VAR_0,
          const struct btrfs_balance_args *VAR_1)
{
 FUNC_2(VAR_0, 0, sizeof(*VAR_0));

 VAR_0->profiles = FUNC_1(VAR_1->profiles);
 VAR_0->usage = FUNC_1(VAR_1->usage);
 VAR_0->devid = FUNC_1(VAR_1->devid);
 VAR_0->pstart = FUNC_1(VAR_1->pstart);
 VAR_0->pend = FUNC_1(VAR_1->pend);
 VAR_0->vstart = FUNC_1(VAR_1->vstart);
 VAR_0->vend = FUNC_1(VAR_1->vend);
 VAR_0->target = FUNC_1(VAR_1->target);
 VAR_0->flags = FUNC_1(VAR_1->flags);
 VAR_0->limit = FUNC_1(VAR_1->limit);
 VAR_0->stripes_min = FUNC_0(VAR_1->stripes_min);
 VAR_0->stripes_max = FUNC_0(VAR_1->stripes_max);
}
