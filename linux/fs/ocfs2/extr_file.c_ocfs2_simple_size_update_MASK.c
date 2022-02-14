
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocfs2_super {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ocfs2_super*,int *) ;
 int FUNC_5 (int *,struct inode*,struct buffer_head*,int ) ;
 int * FUNC_6 (struct ocfs2_super*,int ) ;
 int FUNC_7 (int *,struct inode*,int ) ;

int FUNC_8(struct inode *VAR_1,
        struct buffer_head *VAR_2,
        u64 VAR_3)
{
 int VAR_4;
 struct ocfs2_super *VAR_5 = FUNC_1(VAR_1->i_sb);
 handle_t *VAR_6 = ((void*)0);

 VAR_6 = FUNC_6(VAR_5, VAR_0);
 if (FUNC_0(VAR_6)) {
  VAR_4 = FUNC_2(VAR_6);
  FUNC_3(VAR_4);
  goto out;
 }

 VAR_4 = FUNC_5(VAR_6, VAR_1, VAR_2,
       VAR_3);
 if (VAR_4 < 0)
  FUNC_3(VAR_4);

 FUNC_7(VAR_6, VAR_1, 0);
 FUNC_4(VAR_5, VAR_6);
out:
 return VAR_4;
}
