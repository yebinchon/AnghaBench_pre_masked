
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ocfs2_truncate_rec {int t_start; int t_clusters; } ;
struct ocfs2_truncate_log {struct ocfs2_truncate_rec* tl_recs; int tl_used; } ;
struct ocfs2_super {scalar_t__ truncated_clusters; struct buffer_head* osb_tl_bh; struct inode* osb_tl_inode; } ;
struct TYPE_3__ {struct ocfs2_truncate_log i_dealloc; } ;
struct ocfs2_dinode {TYPE_1__ id2; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_4__ {scalar_t__ ip_blkno; } ;


 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ,unsigned int) ;
 int FUNC_9 (struct ocfs2_super*,int *) ;
 int FUNC_10 (int *,struct inode*,struct buffer_head*,scalar_t__,unsigned int) ;
 int FUNC_11 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_12 (int *,struct buffer_head*) ;
 int * FUNC_13 (struct ocfs2_super*,int ) ;
 int FUNC_14 (unsigned long long,int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_15(struct ocfs2_super *VAR_2,
      struct inode *VAR_3,
      struct buffer_head *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;
 unsigned int VAR_7;
 u64 VAR_8;
 struct ocfs2_truncate_rec VAR_9;
 struct ocfs2_dinode *VAR_10;
 struct ocfs2_truncate_log *VAR_11;
 struct inode *VAR_12 = VAR_2->osb_tl_inode;
 struct buffer_head *VAR_13 = VAR_2->osb_tl_bh;
 handle_t *VAR_14;

 VAR_10 = (struct ocfs2_dinode *) VAR_13->b_data;
 VAR_11 = &VAR_10->id2.i_dealloc;
 VAR_6 = FUNC_5(VAR_11->tl_used) - 1;
 while (VAR_6 >= 0) {
  VAR_14 = FUNC_13(VAR_2, VAR_1);
  if (FUNC_1(VAR_14)) {
   VAR_5 = FUNC_3(VAR_14);
   FUNC_7(VAR_5);
   goto bail;
  }



  VAR_5 = FUNC_11(VAR_14, FUNC_0(VAR_12), VAR_13,
       VAR_0);
  if (VAR_5 < 0) {
   FUNC_7(VAR_5);
   goto bail;
  }

  VAR_11->tl_used = FUNC_4(VAR_6);

  FUNC_12(VAR_14, VAR_13);

  VAR_9 = VAR_11->tl_recs[VAR_6];
  VAR_8 = FUNC_8(VAR_3->i_sb,
          FUNC_6(VAR_9.t_start));
  VAR_7 = FUNC_6(VAR_9.t_clusters);



  if (VAR_8) {
   FUNC_14(
    (unsigned long long)FUNC_2(VAR_12)->ip_blkno,
    VAR_6, FUNC_6(VAR_9.t_start), VAR_7);

   VAR_5 = FUNC_10(VAR_14, VAR_3,
           VAR_4, VAR_8,
           VAR_7);
   if (VAR_5 < 0) {
    FUNC_7(VAR_5);
    goto bail;
   }
  }

  FUNC_9(VAR_2, VAR_14);
  VAR_6--;
 }

 VAR_2->truncated_clusters = 0;

bail:
 return VAR_5;
}
