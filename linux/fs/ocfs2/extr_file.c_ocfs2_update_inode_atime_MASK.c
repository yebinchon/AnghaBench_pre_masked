
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct ocfs2_dinode {int i_atime_nsec; int i_atime; } ;
struct TYPE_2__ {int tv_nsec; int tv_sec; } ;
struct inode {TYPE_1__ i_atime; int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;


 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ocfs2_super* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_1__ FUNC_6 (struct inode*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct ocfs2_super*,int *) ;
 int FUNC_9 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_10 (int *,struct buffer_head*) ;
 int * FUNC_11 (struct ocfs2_super*,int ) ;
 int FUNC_12 (int *,struct inode*,int ) ;

int FUNC_13(struct inode *VAR_2,
        struct buffer_head *VAR_3)
{
 int VAR_4;
 struct ocfs2_super *VAR_5 = FUNC_2(VAR_2->i_sb);
 handle_t *VAR_6;
 struct ocfs2_dinode *VAR_7 = (struct ocfs2_dinode *) VAR_3->b_data;

 VAR_6 = FUNC_11(VAR_5, VAR_0);
 if (FUNC_1(VAR_6)) {
  VAR_4 = FUNC_3(VAR_6);
  FUNC_7(VAR_4);
  goto out;
 }

 VAR_4 = FUNC_9(VAR_6, FUNC_0(VAR_2), VAR_3,
          VAR_1);
 if (VAR_4) {
  FUNC_7(VAR_4);
  goto out_commit;
 }






 VAR_2->i_atime = FUNC_6(VAR_2);
 VAR_7->i_atime = FUNC_5(VAR_2->i_atime.tv_sec);
 VAR_7->i_atime_nsec = FUNC_4(VAR_2->i_atime.tv_nsec);
 FUNC_12(VAR_6, VAR_2, 0);
 FUNC_10(VAR_6, VAR_3);

out_commit:
 FUNC_8(VAR_5, VAR_6);
out:
 return VAR_4;
}
