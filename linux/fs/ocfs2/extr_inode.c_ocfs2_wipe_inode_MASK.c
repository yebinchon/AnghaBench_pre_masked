
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct ocfs2_dinode {int i_orphaned_slot; } ;
struct inode {int i_mode; int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_2__ {int ip_flags; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct ocfs2_super*,int) ;
 int FUNC_10 (struct inode*,struct buffer_head*) ;
 struct inode* FUNC_11 (struct ocfs2_super*,int ,int) ;
 int FUNC_12 (struct inode*,struct buffer_head**,int) ;
 int FUNC_13 (struct inode*,int) ;
 int FUNC_14 (struct inode*,struct buffer_head*,struct inode*,struct buffer_head*) ;
 int FUNC_15 (struct inode*,struct buffer_head*) ;
 int FUNC_16 (struct ocfs2_super*,int) ;
 int FUNC_17 (struct ocfs2_super*,struct inode*,struct buffer_head*) ;
 int FUNC_18 (struct inode*,struct buffer_head*) ;

__attribute__((used)) static int FUNC_19(struct inode *VAR_3,
       struct buffer_head *VAR_4)
{
 int VAR_5, VAR_6 = -1;
 struct inode *VAR_7 = ((void*)0);
 struct buffer_head *VAR_8 = ((void*)0);
 struct ocfs2_super *VAR_9 = FUNC_1(VAR_3->i_sb);
 struct ocfs2_dinode *VAR_10 = (struct ocfs2_dinode *) VAR_4->b_data;

 if (!(FUNC_0(VAR_3)->ip_flags & VAR_1)) {
  VAR_6 = FUNC_7(VAR_10->i_orphaned_slot);

  VAR_5 = FUNC_9(VAR_9, VAR_6);
  if (VAR_5)
   return VAR_5;

  VAR_7 = FUNC_11(VAR_9,
              VAR_2,
              VAR_6);
  if (!VAR_7) {
   VAR_5 = -VAR_0;
   FUNC_8(VAR_5);
   goto bail;
  }




  FUNC_4(VAR_7);
  VAR_5 = FUNC_12(VAR_7, &VAR_8, 1);
  if (VAR_5 < 0) {
   FUNC_5(VAR_7);

   FUNC_8(VAR_5);
   goto bail;
  }
 }





 VAR_5 = FUNC_17(VAR_9, VAR_3, VAR_4);
 if (VAR_5 < 0) {
  FUNC_8(VAR_5);
  goto bail_unlock_dir;
 }


 if (FUNC_2(VAR_3->i_mode)) {
  VAR_5 = FUNC_10(VAR_3, VAR_4);
  if (VAR_5) {
   FUNC_8(VAR_5);
   goto bail_unlock_dir;
  }
 }


 VAR_5 = FUNC_18(VAR_3, VAR_4);
 if (VAR_5 < 0) {
  FUNC_8(VAR_5);
  goto bail_unlock_dir;
 }

 VAR_5 = FUNC_15(VAR_3, VAR_4);
 if (VAR_5 < 0) {
  FUNC_8(VAR_5);
  goto bail_unlock_dir;
 }

 VAR_5 = FUNC_14(VAR_3, VAR_4, VAR_7,
        VAR_8);
 if (VAR_5 < 0)
  FUNC_8(VAR_5);

bail_unlock_dir:
 if (FUNC_0(VAR_3)->ip_flags & VAR_1)
  return VAR_5;

 FUNC_13(VAR_7, 1);
 FUNC_5(VAR_7);
 FUNC_3(VAR_8);
bail:
 FUNC_6(VAR_7);
 FUNC_16(VAR_9, VAR_6);

 return VAR_5;
}
