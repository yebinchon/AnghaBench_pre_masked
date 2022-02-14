
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct ocfs2_super {TYPE_3__* local_alloc_bh; } ;
struct ocfs2_local_alloc {int la_bm_off; void* la_bitmap; } ;
struct TYPE_5__ {int i_used; } ;
struct TYPE_6__ {TYPE_1__ bitmap1; } ;
struct ocfs2_dinode {TYPE_2__ id1; } ;
struct ocfs2_alloc_context {scalar_t__ ac_which; struct inode* ac_inode; } ;
struct inode {int dummy; } ;
typedef int handle_t ;
struct TYPE_7__ {scalar_t__ b_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct ocfs2_local_alloc* FUNC_2 (struct ocfs2_dinode*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,void*) ;
 int FUNC_7 (int *,int ,TYPE_3__*,int ) ;
 int FUNC_8 (int *,TYPE_3__*) ;

int FUNC_9(struct ocfs2_super *VAR_2,
    handle_t *VAR_3,
    struct ocfs2_alloc_context *VAR_4,
    u32 VAR_5,
    u32 VAR_6)
{
 int VAR_7, VAR_8;
 u32 VAR_9;
 struct inode *VAR_10;
 void *VAR_11;
 struct ocfs2_dinode *VAR_12;
 struct ocfs2_local_alloc *VAR_13;

 FUNC_0(VAR_4->ac_which != VAR_0);

 VAR_10 = VAR_4->ac_inode;
 VAR_12 = (struct ocfs2_dinode *) VAR_2->local_alloc_bh->b_data;
 VAR_13 = FUNC_2(VAR_12);

 VAR_11 = VAR_13->la_bitmap;
 VAR_8 = VAR_5 - FUNC_4(VAR_13->la_bm_off);
 VAR_9 = VAR_6;

 VAR_7 = FUNC_7(VAR_3,
   FUNC_1(VAR_10),
   VAR_2->local_alloc_bh,
   VAR_1);
 if (VAR_7 < 0) {
  FUNC_5(VAR_7);
  goto bail;
 }

 while (VAR_9--)
  FUNC_6(VAR_8++, VAR_11);

 FUNC_3(&VAR_12->id1.bitmap1.i_used, -VAR_6);
 FUNC_8(VAR_3, VAR_2->local_alloc_bh);

bail:
 return VAR_7;
}
