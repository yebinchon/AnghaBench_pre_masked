
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ocfs2_super {TYPE_3__* local_alloc_bh; int osb_la_resmap; } ;
struct ocfs2_local_alloc {int la_bm_off; void* la_bitmap; } ;
struct TYPE_5__ {int i_used; } ;
struct TYPE_6__ {TYPE_1__ bitmap1; } ;
struct ocfs2_dinode {TYPE_2__ id1; } ;
struct ocfs2_alloc_context {scalar_t__ ac_which; int ac_resv; struct inode* ac_inode; } ;
struct inode {int dummy; } ;
typedef int handle_t ;
struct TYPE_7__ {scalar_t__ b_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct ocfs2_local_alloc* FUNC_2 (struct ocfs2_dinode*) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int ,TYPE_3__*,int ) ;
 int FUNC_7 (int *,TYPE_3__*) ;
 int FUNC_8 (struct ocfs2_super*,struct ocfs2_dinode*,scalar_t__*,int ) ;
 int FUNC_9 (int *,int ,int,scalar_t__) ;
 int FUNC_10 (int ,void*) ;

int FUNC_11(struct ocfs2_super *VAR_3,
     handle_t *VAR_4,
     struct ocfs2_alloc_context *VAR_5,
     u32 VAR_6,
     u32 *VAR_7,
     u32 *VAR_8)
{
 int VAR_9, VAR_10;
 struct inode *VAR_11;
 void *VAR_12;
 struct ocfs2_dinode *VAR_13;
 struct ocfs2_local_alloc *VAR_14;

 FUNC_0(VAR_5->ac_which != VAR_1);

 VAR_11 = VAR_5->ac_inode;
 VAR_13 = (struct ocfs2_dinode *) VAR_3->local_alloc_bh->b_data;
 VAR_14 = FUNC_2(VAR_13);

 VAR_10 = FUNC_8(VAR_3, VAR_13, &VAR_6,
        VAR_5->ac_resv);
 if (VAR_10 == -1) {

  VAR_9 = -VAR_0;
  FUNC_5(VAR_9);
  goto bail;
 }

 VAR_12 = VAR_14->la_bitmap;
 *VAR_7 = FUNC_4(VAR_14->la_bm_off) + VAR_10;
 *VAR_8 = VAR_6;

 VAR_9 = FUNC_6(VAR_4,
      FUNC_1(VAR_11),
      VAR_3->local_alloc_bh,
      VAR_2);
 if (VAR_9 < 0) {
  FUNC_5(VAR_9);
  goto bail;
 }

 FUNC_9(&VAR_3->osb_la_resmap, VAR_5->ac_resv, VAR_10,
      VAR_6);

 while(VAR_6--)
  FUNC_10(VAR_10++, VAR_12);

 FUNC_3(&VAR_13->id1.bitmap1.i_used, *VAR_8);
 FUNC_7(VAR_4, VAR_3->local_alloc_bh);

bail:
 if (VAR_9)
  FUNC_5(VAR_9);
 return VAR_9;
}
