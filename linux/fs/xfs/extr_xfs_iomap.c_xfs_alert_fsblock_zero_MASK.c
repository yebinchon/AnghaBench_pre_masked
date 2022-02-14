
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ i_ino; int i_mount; } ;
typedef TYPE_1__ xfs_inode_t ;
struct TYPE_6__ {int br_state; scalar_t__ br_blockcount; scalar_t__ br_startoff; scalar_t__ br_startblock; } ;
typedef TYPE_2__ xfs_bmbt_irec_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,unsigned long long,unsigned long long,unsigned long long,unsigned long long,int ) ;

__attribute__((used)) static int
FUNC_1(
 xfs_inode_t *VAR_2,
 xfs_bmbt_irec_t *VAR_3)
{
 FUNC_0(VAR_2->i_mount, VAR_1,
   "Access to block zero in inode %llu "
   "start_block: %llx start_off: %llx "
   "blkcnt: %llx extent-state: %x",
  (unsigned long long)VAR_2->i_ino,
  (unsigned long long)VAR_3->br_startblock,
  (unsigned long long)VAR_3->br_startoff,
  (unsigned long long)VAR_3->br_blockcount,
  VAR_3->br_state);
 return -VAR_0;
}
