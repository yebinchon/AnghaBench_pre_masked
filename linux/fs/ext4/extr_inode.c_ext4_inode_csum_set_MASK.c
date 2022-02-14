
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct ext4_inode_info {int dummy; } ;
struct ext4_inode {void* i_checksum_hi; void* i_checksum_lo; } ;
typedef int __u32 ;
struct TYPE_4__ {TYPE_1__* s_es; } ;
struct TYPE_3__ {scalar_t__ s_creator_os; } ;


 scalar_t__ FUNC_0 (struct ext4_inode*,struct ext4_inode_info*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 TYPE_2__* FUNC_2 (int ) ;
 void* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct inode*,struct ext4_inode*,struct ext4_inode_info*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(struct inode *VAR_3, struct ext4_inode *VAR_4,
    struct ext4_inode_info *VAR_5)
{
 __u32 VAR_6;

 if (FUNC_2(VAR_3->i_sb)->s_es->s_creator_os !=
     FUNC_4(VAR_1) ||
     !FUNC_5(VAR_3->i_sb))
  return;

 VAR_6 = FUNC_6(VAR_3, VAR_4, VAR_5);
 VAR_4->i_checksum_lo = FUNC_3(VAR_6 & 0xFFFF);
 if (FUNC_1(VAR_3->i_sb) > VAR_0 &&
     FUNC_0(VAR_4, VAR_5, VAR_2))
  VAR_4->i_checksum_hi = FUNC_3(VAR_6 >> 16);
}
