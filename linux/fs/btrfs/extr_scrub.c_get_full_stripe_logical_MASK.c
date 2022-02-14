
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ objectid; } ;
struct btrfs_block_group_cache {int full_stripe_len; TYPE_1__ key; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static u64 FUNC_2(struct btrfs_block_group_cache *VAR_1,
       u64 VAR_2)
{
 u64 VAR_3;





 FUNC_0(VAR_1->full_stripe_len >= VAR_0);





 VAR_3 = FUNC_1(VAR_2 - VAR_1->key.objectid, VAR_1->full_stripe_len) *
  VAR_1->full_stripe_len + VAR_1->key.objectid;
 return VAR_3;
}
