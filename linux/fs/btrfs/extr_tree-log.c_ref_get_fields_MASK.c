
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_inode_ref {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct extent_buffer*,struct btrfs_inode_ref*) ;
 int FUNC_1 (struct extent_buffer*,struct btrfs_inode_ref*) ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct extent_buffer*,char*,unsigned long,int ) ;

__attribute__((used)) static int FUNC_4(struct extent_buffer *VAR_2, unsigned long VAR_3,
     u32 *VAR_4, char **VAR_5, u64 *VAR_6)
{
 struct btrfs_inode_ref *VAR_7;

 VAR_7 = (struct btrfs_inode_ref *)VAR_3;

 *VAR_4 = FUNC_1(VAR_2, VAR_7);
 *VAR_5 = FUNC_2(*VAR_4, VAR_1);
 if (*VAR_5 == ((void*)0))
  return -VAR_0;

 FUNC_3(VAR_2, *VAR_5, (unsigned long)(VAR_7 + 1), *VAR_4);

 if (VAR_6)
  *VAR_6 = FUNC_0(VAR_2, VAR_7);

 return 0;
}
