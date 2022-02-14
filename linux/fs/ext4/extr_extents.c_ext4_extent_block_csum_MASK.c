
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct ext4_sb_info {int dummy; } ;
struct ext4_inode_info {int i_csum_seed; } ;
struct ext4_extent_header {int dummy; } ;
typedef int __u8 ;
typedef int __u32 ;
typedef int __le32 ;


 int FUNC_0 (struct ext4_extent_header*) ;
 struct ext4_inode_info* FUNC_1 (struct inode*) ;
 struct ext4_sb_info* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ext4_sb_info*,int ,int *,int ) ;

__attribute__((used)) static __le32 FUNC_5(struct inode *VAR_0,
         struct ext4_extent_header *VAR_1)
{
 struct ext4_inode_info *VAR_2 = FUNC_1(VAR_0);
 struct ext4_sb_info *VAR_3 = FUNC_2(VAR_0->i_sb);
 __u32 VAR_4;

 VAR_4 = FUNC_4(VAR_3, VAR_2->i_csum_seed, (__u8 *)VAR_1,
      FUNC_0(VAR_1));
 return FUNC_3(VAR_4);
}
