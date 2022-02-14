
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_dinode {int i_suballoc_bit; scalar_t__ i_blkno; scalar_t__ i_suballoc_loc; int i_suballoc_slot; } ;
struct ocfs2_alloc_context {scalar_t__ ac_alloc_slot; scalar_t__ ac_last_group; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_2__ {scalar_t__ ip_last_used_slot; scalar_t__ ip_last_used_group; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct inode *VAR_0,
          struct buffer_head *VAR_1,
          struct ocfs2_alloc_context *VAR_2)
{
 struct ocfs2_dinode *VAR_3 = (struct ocfs2_dinode *)VAR_1->b_data;
 if (FUNC_0(VAR_0)->ip_last_used_group &&
     FUNC_0(VAR_0)->ip_last_used_slot == VAR_2->ac_alloc_slot)
  VAR_2->ac_last_group = FUNC_0(VAR_0)->ip_last_used_group;
 else if (FUNC_1(VAR_3->i_suballoc_slot) == VAR_2->ac_alloc_slot) {
  if (VAR_3->i_suballoc_loc)
   VAR_2->ac_last_group = FUNC_2(VAR_3->i_suballoc_loc);
  else
   VAR_2->ac_last_group = FUNC_3(
     FUNC_2(VAR_3->i_blkno),
     FUNC_1(VAR_3->i_suballoc_bit));
 }
}
