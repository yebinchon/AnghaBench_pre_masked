
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_space_info {int bytes_may_use; scalar_t__ bytes_readonly; scalar_t__ bytes_pinned; scalar_t__ bytes_reserved; scalar_t__ bytes_used; } ;


 int FUNC_0 (struct btrfs_space_info*) ;

u64 FUNC_1(struct btrfs_space_info *VAR_0,
     bool VAR_1)
{
 FUNC_0(VAR_0);
 return VAR_0->bytes_used + VAR_0->bytes_reserved +
  VAR_0->bytes_pinned + VAR_0->bytes_readonly +
  (VAR_1 ? VAR_0->bytes_may_use : 0);
}
