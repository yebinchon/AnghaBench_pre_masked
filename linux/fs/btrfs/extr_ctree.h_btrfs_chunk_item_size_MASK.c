
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_stripe {int dummy; } ;
struct btrfs_chunk {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline unsigned long FUNC_1(int VAR_0)
{
 FUNC_0(VAR_0 == 0);
 return sizeof(struct btrfs_chunk) +
  sizeof(struct btrfs_stripe) * (VAR_0 - 1);
}
