
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u32 ;
struct ocfs2_super {unsigned int local_alloc_bits; int slot_num; TYPE_3__* local_alloc_bh; int sb; int osb_lock; } ;
struct TYPE_4__ {int i_used; int i_total; } ;
struct TYPE_5__ {TYPE_1__ bitmap1; } ;
struct ocfs2_dinode {TYPE_2__ id1; int i_blkno; } ;
struct ocfs2_alloc_context {scalar_t__ ac_max_block; TYPE_3__* ac_bh; int ac_which; int ac_alloc_slot; struct inode* ac_inode; } ;
struct inode {int dummy; } ;
struct TYPE_6__ {scalar_t__ b_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,char*,unsigned long long,scalar_t__,scalar_t__) ;
 struct inode* FUNC_9 (struct ocfs2_super*,int ,int ) ;
 int FUNC_10 (struct ocfs2_super*) ;
 scalar_t__ FUNC_11 (struct ocfs2_dinode*) ;
 int FUNC_12 (struct ocfs2_super*,struct inode*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (unsigned long long,unsigned int,int ,int) ;

int FUNC_16(struct ocfs2_super *VAR_4,
       u32 VAR_5,
       struct ocfs2_alloc_context *VAR_6)
{
 int VAR_7;
 struct ocfs2_dinode *VAR_8;
 struct inode *VAR_9;
 unsigned int VAR_10;

 FUNC_0(!VAR_6);

 VAR_9 =
  FUNC_9(VAR_4,
         VAR_2,
         VAR_4->slot_num);
 if (!VAR_9) {
  VAR_7 = -VAR_0;
  FUNC_7(VAR_7);
  goto bail;
 }

 FUNC_2(VAR_9);





 FUNC_13(&VAR_4->osb_lock);
 if (!FUNC_10(VAR_4) ||
     (VAR_5 > VAR_4->local_alloc_bits)) {
  FUNC_14(&VAR_4->osb_lock);
  VAR_7 = -VAR_1;
  goto bail;
 }
 FUNC_14(&VAR_4->osb_lock);

 VAR_8 = (struct ocfs2_dinode *) VAR_4->local_alloc_bh->b_data;
 VAR_10 = FUNC_5(VAR_8->id1.bitmap1.i_total) -
  FUNC_5(VAR_8->id1.bitmap1.i_used);
 if (VAR_5 > VAR_10) {

  VAR_7 =
   FUNC_12(VAR_4, VAR_9);
  if (VAR_7 < 0) {
   if (VAR_7 != -VAR_1)
    FUNC_7(VAR_7);
   goto bail;
  }







  VAR_7 = -VAR_1;
  if (!FUNC_10(VAR_4))
   goto bail;

  VAR_10 = FUNC_5(VAR_8->id1.bitmap1.i_total) -
   FUNC_5(VAR_8->id1.bitmap1.i_used);
  if (VAR_5 > VAR_10)
   goto bail;
 }

 VAR_6->ac_inode = VAR_9;

 VAR_6->ac_alloc_slot = VAR_4->slot_num;
 VAR_6->ac_which = VAR_3;
 FUNC_1(VAR_4->local_alloc_bh);
 VAR_6->ac_bh = VAR_4->local_alloc_bh;
 VAR_7 = 0;
bail:
 if (VAR_7 < 0 && VAR_9) {
  FUNC_3(VAR_9);
  FUNC_4(VAR_9);
 }

 FUNC_15(
  (unsigned long long)VAR_6->ac_max_block,
  VAR_5, VAR_4->slot_num, VAR_7);

 if (VAR_7)
  FUNC_7(VAR_7);
 return VAR_7;
}
