
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct ext4_inode_info {int dummy; } ;
struct ext4_inode {int i_checksum_hi; int i_checksum_lo; } ;
typedef int __u32 ;
struct TYPE_4__ {TYPE_1__* s_es; } ;
struct TYPE_3__ {scalar_t__ s_creator_os; } ;


 scalar_t__ FUNC_0 (struct ext4_inode*,struct ext4_inode_info*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 TYPE_2__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct inode*,struct ext4_inode*,struct ext4_inode_info*) ;
 int VAR_2 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_3, struct ext4_inode *VAR_4,
      struct ext4_inode_info *VAR_5)
{
 __u32 VAR_6, VAR_7;

 if (FUNC_2(VAR_3->i_sb)->s_es->s_creator_os !=
     FUNC_3(VAR_1) ||
     !FUNC_4(VAR_3->i_sb))
  return 1;

 VAR_6 = FUNC_6(VAR_4->i_checksum_lo);
 VAR_7 = FUNC_5(VAR_3, VAR_4, VAR_5);
 if (FUNC_1(VAR_3->i_sb) > VAR_0 &&
     FUNC_0(VAR_4, VAR_5, VAR_2))
  VAR_6 |= ((__u32)FUNC_6(VAR_4->i_checksum_hi)) << 16;
 else
  VAR_7 &= 0xFFFF;

 return VAR_6 == VAR_7;
}
