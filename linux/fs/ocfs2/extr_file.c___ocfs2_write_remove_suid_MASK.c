
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct ocfs2_dinode {int i_mode; } ;
struct inode {int i_mode; int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_2__ {scalar_t__ ip_blkno; } ;


 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ocfs2_super* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ocfs2_super*,int *) ;
 int FUNC_8 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_9 (int *,struct buffer_head*) ;
 int * FUNC_10 (struct ocfs2_super*,int ) ;
 int FUNC_11 (int *,struct inode*,int ) ;
 int FUNC_12 (unsigned long long,int) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_5,
         struct buffer_head *VAR_6)
{
 int VAR_7;
 handle_t *VAR_8;
 struct ocfs2_super *VAR_9 = FUNC_3(VAR_5->i_sb);
 struct ocfs2_dinode *VAR_10;

 FUNC_12(
   (unsigned long long)FUNC_2(VAR_5)->ip_blkno,
   VAR_5->i_mode);

 VAR_8 = FUNC_10(VAR_9, VAR_0);
 if (FUNC_1(VAR_8)) {
  VAR_7 = FUNC_4(VAR_8);
  FUNC_6(VAR_7);
  goto out;
 }

 VAR_7 = FUNC_8(VAR_8, FUNC_0(VAR_5), VAR_6,
          VAR_1);
 if (VAR_7 < 0) {
  FUNC_6(VAR_7);
  goto out_trans;
 }

 VAR_5->i_mode &= ~VAR_3;
 if ((VAR_5->i_mode & VAR_2) && (VAR_5->i_mode & VAR_4))
  VAR_5->i_mode &= ~VAR_2;

 VAR_10 = (struct ocfs2_dinode *) VAR_6->b_data;
 VAR_10->i_mode = FUNC_5(VAR_5->i_mode);
 FUNC_11(VAR_8, VAR_5, 0);

 FUNC_9(VAR_8, VAR_6);

out_trans:
 FUNC_7(VAR_9, VAR_8);
out:
 return VAR_7;
}
