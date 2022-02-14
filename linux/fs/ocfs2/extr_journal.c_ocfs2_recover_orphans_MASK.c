
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_inode_info {int ip_flags; int ip_lock; struct inode* ip_next_orphan; scalar_t__ ip_blkno; } ;
struct ocfs2_dinode {int i_flags; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef enum ocfs2_orphan_reco_type { ____Placeholder_ocfs2_orphan_reco_type } ocfs2_orphan_reco_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct ocfs2_super*,int) ;
 int FUNC_9 (struct ocfs2_super*,struct inode*,struct buffer_head*,int ,int ) ;
 int FUNC_10 (struct inode*,struct buffer_head**,int) ;
 int FUNC_11 (struct inode*,int) ;
 int FUNC_12 (struct ocfs2_super*,int) ;
 int FUNC_13 (struct ocfs2_super*,int,struct inode**,int) ;
 int FUNC_14 (struct inode*,int) ;
 int FUNC_15 (struct inode*,int) ;
 int FUNC_16 (struct inode*,struct buffer_head*,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int) ;
 int FUNC_20 (unsigned long long) ;

__attribute__((used)) static int FUNC_21(struct ocfs2_super *VAR_4,
     int VAR_5,
     enum ocfs2_orphan_reco_type VAR_6)
{
 int VAR_7 = 0;
 struct inode *VAR_8 = ((void*)0);
 struct inode *VAR_9;
 struct ocfs2_inode_info *VAR_10;
 struct buffer_head *VAR_11 = ((void*)0);
 struct ocfs2_dinode *VAR_12 = ((void*)0);

 FUNC_19(VAR_5);

 FUNC_12(VAR_4, VAR_5);
 VAR_7 = FUNC_13(VAR_4, VAR_5, &VAR_8, VAR_6);
 FUNC_8(VAR_4, VAR_5);



 if (VAR_7)
  FUNC_7(VAR_7);

 while (VAR_8) {
  VAR_10 = FUNC_0(VAR_8);
  FUNC_20(
     (unsigned long long)VAR_10->ip_blkno);

  VAR_9 = VAR_10->ip_next_orphan;
  VAR_10->ip_next_orphan = ((void*)0);

  if (VAR_10->ip_flags & VAR_2) {
   FUNC_4(VAR_8);
   VAR_7 = FUNC_14(VAR_8, 1);
   if (VAR_7 < 0) {
    FUNC_7(VAR_7);
    goto unlock_mutex;
   }




   VAR_7 = FUNC_10(VAR_8, &VAR_11, 1);
   if (VAR_7) {
    FUNC_7(VAR_7);
    goto unlock_rw;
   }

   VAR_12 = (struct ocfs2_dinode *)VAR_11->b_data;

   if (VAR_12->i_flags & FUNC_2(VAR_1)) {
    VAR_7 = FUNC_16(VAR_8, VAR_11,
      FUNC_3(VAR_8));
    if (VAR_7 < 0) {
     if (VAR_7 != -VAR_0)
      FUNC_7(VAR_7);
     goto unlock_inode;
    }

    VAR_7 = FUNC_9(VAR_4, VAR_8,
      VAR_11, 0, 0);
    if (VAR_7)
     FUNC_7(VAR_7);
   }
unlock_inode:
   FUNC_11(VAR_8, 1);
   FUNC_1(VAR_11);
   VAR_11 = ((void*)0);
unlock_rw:
   FUNC_15(VAR_8, 1);
unlock_mutex:
   FUNC_5(VAR_8);


   VAR_10->ip_flags &= ~VAR_2;
  } else {
   FUNC_17(&VAR_10->ip_lock);


   VAR_10->ip_flags |= VAR_3;
   FUNC_18(&VAR_10->ip_lock);
  }

  FUNC_6(VAR_8);
  VAR_8 = VAR_9;
 }

 return VAR_7;
}
