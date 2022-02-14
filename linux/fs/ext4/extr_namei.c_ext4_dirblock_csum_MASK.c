
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct ext4_sb_info {int dummy; } ;
struct ext4_inode_info {int i_csum_seed; } ;
typedef int __u8 ;
typedef int __u32 ;
typedef int __le32 ;


 struct ext4_inode_info* FUNC_0 (struct inode*) ;
 struct ext4_sb_info* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ext4_sb_info*,int ,int *,int) ;

__attribute__((used)) static __le32 FUNC_4(struct inode *VAR_0, void *VAR_1, int VAR_2)
{
 struct ext4_sb_info *VAR_3 = FUNC_1(VAR_0->i_sb);
 struct ext4_inode_info *VAR_4 = FUNC_0(VAR_0);
 __u32 VAR_5;

 VAR_5 = FUNC_3(VAR_3, VAR_4->i_csum_seed, (__u8 *)VAR_1, VAR_2);
 return FUNC_2(VAR_5);
}
