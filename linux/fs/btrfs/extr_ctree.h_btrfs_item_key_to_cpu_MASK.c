
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int dummy; } ;
struct btrfs_key {int dummy; } ;
struct btrfs_disk_key {int dummy; } ;


 int FUNC_0 (struct btrfs_key*,struct btrfs_disk_key*) ;
 int FUNC_1 (struct extent_buffer const*,struct btrfs_disk_key*,int) ;

__attribute__((used)) static inline void FUNC_2(const struct extent_buffer *VAR_0,
      struct btrfs_key *VAR_1, int VAR_2)
{
 struct btrfs_disk_key VAR_3;
 FUNC_1(VAR_0, &VAR_3, VAR_2);
 FUNC_0(VAR_1, &VAR_3);
}
