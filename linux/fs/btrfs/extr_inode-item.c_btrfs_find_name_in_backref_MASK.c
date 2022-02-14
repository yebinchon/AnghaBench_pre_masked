
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_inode_ref {int dummy; } ;


 int FUNC_0 (struct extent_buffer*,struct btrfs_inode_ref*) ;
 unsigned long FUNC_1 (struct extent_buffer*,int) ;
 scalar_t__ FUNC_2 (struct extent_buffer*,int) ;
 scalar_t__ FUNC_3 (struct extent_buffer*,char const*,unsigned long,int) ;

struct btrfs_inode_ref *FUNC_4(struct extent_buffer *VAR_0,
         int VAR_1, const char *VAR_2,
         int VAR_3)
{
 struct btrfs_inode_ref *VAR_4;
 unsigned long VAR_5;
 unsigned long VAR_6;
 u32 VAR_7;
 u32 VAR_8 = 0;
 int VAR_9;

 VAR_7 = FUNC_2(VAR_0, VAR_1);
 VAR_5 = FUNC_1(VAR_0, VAR_1);
 while (VAR_8 < VAR_7) {
  VAR_4 = (struct btrfs_inode_ref *)(VAR_5 + VAR_8);
  VAR_9 = FUNC_0(VAR_0, VAR_4);
  VAR_6 = (unsigned long)(VAR_4 + 1);
  VAR_8 += VAR_9 + sizeof(*VAR_4);
  if (VAR_9 != VAR_3)
   continue;
  if (FUNC_3(VAR_0, VAR_2, VAR_6, VAR_3) == 0)
   return VAR_4;
 }
 return ((void*)0);
}
