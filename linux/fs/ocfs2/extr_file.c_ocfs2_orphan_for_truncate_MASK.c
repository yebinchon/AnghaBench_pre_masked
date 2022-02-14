
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_dinode {int i_mtime_nsec; int i_ctime_nsec; void* i_mtime; void* i_ctime; void* i_size; } ;
struct TYPE_2__ {int tv_nsec; int tv_sec; } ;
struct inode {TYPE_1__ i_ctime; TYPE_1__ i_mtime; int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;


 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 TYPE_1__ FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct ocfs2_super*,int *) ;
 int FUNC_10 (struct inode*,struct buffer_head*,int ) ;
 int FUNC_11 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_12 (int *,struct buffer_head*) ;
 int * FUNC_13 (struct ocfs2_super*,int ) ;
 int FUNC_14 (int *,struct inode*,int ) ;
 int FUNC_15 (struct inode*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_16(struct ocfs2_super *VAR_2,
         struct inode *VAR_3,
         struct buffer_head *VAR_4,
         u64 VAR_5)
{
 int VAR_6;
 handle_t *VAR_7;
 struct ocfs2_dinode *VAR_8;
 u64 VAR_9;






 VAR_6 = FUNC_10(VAR_3, VAR_4, VAR_5);
 if (VAR_6) {
  FUNC_7(VAR_6);
  return VAR_6;
 }




 VAR_7 = FUNC_13(VAR_2, VAR_0);
 if (FUNC_1(VAR_7)) {
  VAR_6 = FUNC_2(VAR_7);
  FUNC_7(VAR_6);
  goto out;
 }

 VAR_6 = FUNC_11(VAR_7, FUNC_0(VAR_3), VAR_4,
      VAR_1);
 if (VAR_6 < 0) {
  FUNC_7(VAR_6);
  goto out_commit;
 }




 VAR_9 = FUNC_8(VAR_3->i_sb, VAR_5);
 VAR_6 = FUNC_15(VAR_3, VAR_7, VAR_5,
            VAR_9);
 if (VAR_6) {
  FUNC_7(VAR_6);
  goto out_commit;
 }

 FUNC_6(VAR_3, VAR_5);
 VAR_3->i_ctime = VAR_3->i_mtime = FUNC_5(VAR_3);

 VAR_8 = (struct ocfs2_dinode *) VAR_4->b_data;
 VAR_8->i_size = FUNC_4(VAR_5);
 VAR_8->i_ctime = VAR_8->i_mtime = FUNC_4(VAR_3->i_ctime.tv_sec);
 VAR_8->i_ctime_nsec = VAR_8->i_mtime_nsec = FUNC_3(VAR_3->i_ctime.tv_nsec);
 FUNC_14(VAR_7, VAR_3, 0);

 FUNC_12(VAR_7, VAR_4);

out_commit:
 FUNC_9(VAR_2, VAR_7);
out:
 return VAR_6;
}
