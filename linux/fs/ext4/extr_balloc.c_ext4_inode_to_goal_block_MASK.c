
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_sb; int i_mode; } ;
struct ext4_inode_info {int i_block_group; } ;
typedef int ext4_grpblk_t ;
typedef int ext4_group_t ;
typedef scalar_t__ ext4_fsblk_t ;
struct TYPE_5__ {int pid; } ;
struct TYPE_4__ {int s_es; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 struct ext4_inode_info* FUNC_1 (struct inode*) ;
 TYPE_1__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int ,int ) ;

ext4_fsblk_t FUNC_8(struct inode *VAR_3)
{
 struct ext4_inode_info *VAR_4 = FUNC_1(VAR_3);
 ext4_group_t VAR_5;
 ext4_grpblk_t VAR_6;
 int VAR_7 = FUNC_5(FUNC_2(VAR_3->i_sb));
 ext4_fsblk_t VAR_8;
 ext4_fsblk_t VAR_9;

 VAR_5 = VAR_4->i_block_group;
 if (VAR_7 >= VAR_1) {
  VAR_5 &= ~(VAR_7-1);
  if (FUNC_3(VAR_3->i_mode))
   VAR_5++;
 }
 VAR_8 = FUNC_6(VAR_3->i_sb, VAR_5);
 VAR_9 = FUNC_4(FUNC_2(VAR_3->i_sb)->s_es) - 1;





 if (FUNC_7(VAR_3->i_sb, VAR_0))
  return VAR_8;

 if (VAR_8 + FUNC_0(VAR_3->i_sb) <= VAR_9)
  VAR_6 = (VAR_2->pid % 16) *
   (FUNC_0(VAR_3->i_sb) / 16);
 else
  VAR_6 = (VAR_2->pid % 16) * ((VAR_9 - VAR_8) / 16);
 return VAR_8 + VAR_6;
}
