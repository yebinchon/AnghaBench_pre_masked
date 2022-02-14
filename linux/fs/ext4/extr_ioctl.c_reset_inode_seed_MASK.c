
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; int i_generation; int i_ino; } ;
struct ext4_sb_info {void* s_csum_seed; } ;
struct ext4_inode_info {void* i_csum_seed; } ;
typedef int inum ;
typedef int gen ;
typedef int __u8 ;
typedef void* __u32 ;
typedef int __le32 ;


 struct ext4_inode_info* FUNC_0 (struct inode*) ;
 struct ext4_sb_info* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (struct ext4_sb_info*,void*,int *,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_0)
{
 struct ext4_inode_info *VAR_1 = FUNC_0(VAR_0);
 struct ext4_sb_info *VAR_2 = FUNC_1(VAR_0->i_sb);
 __le32 VAR_3 = FUNC_2(VAR_0->i_ino);
 __le32 VAR_4 = FUNC_2(VAR_0->i_generation);
 __u32 VAR_5;

 if (!FUNC_4(VAR_0->i_sb))
  return;

 VAR_5 = FUNC_3(VAR_2, VAR_2->s_csum_seed, (__u8 *)&VAR_3, sizeof(VAR_3));
 VAR_1->i_csum_seed = FUNC_3(VAR_2, VAR_5, (__u8 *)&VAR_4, sizeof(VAR_4));
}
