
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ocfs2_super {int osb_la_resmap; int la_last_gd; int osb_lock; int local_alloc_bits; TYPE_1__* local_alloc_bh; } ;
struct ocfs2_local_alloc {void* la_bm_off; int la_bitmap; int la_size; } ;
struct TYPE_5__ {void* i_total; scalar_t__ i_used; } ;
struct TYPE_6__ {TYPE_2__ bitmap1; } ;
struct ocfs2_dinode {TYPE_3__ id1; } ;
struct ocfs2_alloc_context {int ac_last_group; int ac_bits_wanted; } ;
typedef int handle_t ;
struct TYPE_4__ {scalar_t__ b_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct ocfs2_local_alloc* FUNC_0 (struct ocfs2_dinode*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,struct ocfs2_alloc_context*,int ,int *,int *) ;
 scalar_t__ FUNC_7 (struct ocfs2_super*,int ) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (void*,int ) ;

__attribute__((used)) static int FUNC_13(struct ocfs2_super *VAR_3,
     handle_t *VAR_4,
     struct ocfs2_alloc_context *VAR_5)
{
 int VAR_6 = 0;
 u32 VAR_7, VAR_8;
 struct ocfs2_dinode *VAR_9 = ((void*)0);
 struct ocfs2_local_alloc *VAR_10;

 VAR_9 = (struct ocfs2_dinode *) VAR_3->local_alloc_bh->b_data;
 VAR_10 = FUNC_0(VAR_9);

 FUNC_11(
  FUNC_3(VAR_9->id1.bitmap1.i_total),
  VAR_3->local_alloc_bits);




 VAR_5->ac_last_group = VAR_3->la_last_gd;




 VAR_6 = FUNC_6(VAR_4, VAR_5, VAR_3->local_alloc_bits,
          &VAR_7, &VAR_8);
 if (VAR_6 == -VAR_0) {
retry_enospc:





  if (FUNC_7(VAR_3, VAR_2) ==
      VAR_1)
   goto bail;

  VAR_5->ac_bits_wanted = VAR_3->local_alloc_bits;
  VAR_6 = FUNC_6(VAR_4, VAR_5,
           VAR_3->local_alloc_bits,
           &VAR_7,
           &VAR_8);
  if (VAR_6 == -VAR_0)
   goto retry_enospc;





  if (VAR_6 == 0) {
   FUNC_9(&VAR_3->osb_lock);
   VAR_3->local_alloc_bits = VAR_8;
   FUNC_10(&VAR_3->osb_lock);
  }
 }
 if (VAR_6 < 0) {
  if (VAR_6 != -VAR_0)
   FUNC_5(VAR_6);
  goto bail;
 }

 VAR_3->la_last_gd = VAR_5->ac_last_group;

 VAR_10->la_bm_off = FUNC_1(VAR_7);
 VAR_9->id1.bitmap1.i_total = FUNC_1(VAR_8);




 VAR_9->id1.bitmap1.i_used = 0;
 FUNC_4(FUNC_0(VAR_9)->la_bitmap, 0,
        FUNC_2(VAR_10->la_size));

 FUNC_8(&VAR_3->osb_la_resmap, VAR_8,
        FUNC_0(VAR_9)->la_bitmap);

 FUNC_12(
  FUNC_0(VAR_9)->la_bm_off,
  FUNC_3(VAR_9->id1.bitmap1.i_total));

bail:
 if (VAR_6)
  FUNC_5(VAR_6);
 return VAR_6;
}
