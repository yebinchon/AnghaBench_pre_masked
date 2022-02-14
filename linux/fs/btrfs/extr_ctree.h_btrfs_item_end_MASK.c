
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_item {int dummy; } ;


 scalar_t__ FUNC_0 (struct extent_buffer const*,struct btrfs_item*) ;
 scalar_t__ FUNC_1 (struct extent_buffer const*,struct btrfs_item*) ;

__attribute__((used)) static inline u32 FUNC_2(const struct extent_buffer *VAR_0,
     struct btrfs_item *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1) + FUNC_1(VAR_0, VAR_1);
}
