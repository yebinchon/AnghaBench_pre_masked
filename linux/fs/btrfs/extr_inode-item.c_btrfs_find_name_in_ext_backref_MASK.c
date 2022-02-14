
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_inode_extref {int name; } ;


 int FUNC_0 (struct extent_buffer*,struct btrfs_inode_extref*) ;
 scalar_t__ FUNC_1 (struct extent_buffer*,struct btrfs_inode_extref*) ;
 unsigned long FUNC_2 (struct extent_buffer*,int) ;
 scalar_t__ FUNC_3 (struct extent_buffer*,int) ;
 scalar_t__ FUNC_4 (struct extent_buffer*,char const*,unsigned long,int) ;

struct btrfs_inode_extref *FUNC_5(
  struct extent_buffer *VAR_0, int VAR_1, u64 VAR_2,
  const char *VAR_3, int VAR_4)
{
 struct btrfs_inode_extref *VAR_5;
 unsigned long VAR_6;
 unsigned long VAR_7;
 u32 VAR_8;
 u32 VAR_9 = 0;
 int VAR_10;

 VAR_8 = FUNC_3(VAR_0, VAR_1);
 VAR_6 = FUNC_2(VAR_0, VAR_1);







 while (VAR_9 < VAR_8) {
  VAR_5 = (struct btrfs_inode_extref *) (VAR_6 + VAR_9);
  VAR_7 = (unsigned long)(&VAR_5->name);
  VAR_10 = FUNC_0(VAR_0, VAR_5);

  if (VAR_10 == VAR_4 &&
      FUNC_1(VAR_0, VAR_5) == VAR_2 &&
      (FUNC_4(VAR_0, VAR_3, VAR_7, VAR_4) == 0))
   return VAR_5;

  VAR_9 += VAR_10 + sizeof(*VAR_5);
 }
 return ((void*)0);
}
