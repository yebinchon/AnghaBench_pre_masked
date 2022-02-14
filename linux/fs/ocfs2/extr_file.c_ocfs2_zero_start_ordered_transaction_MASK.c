
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int loff_t ;
typedef int handle_t ;


 int VAR_0 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ocfs2_super* FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ocfs2_super*,int *) ;
 int FUNC_6 (int *,struct inode*,int ,int ) ;
 int FUNC_7 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_8 (struct inode*) ;
 int * FUNC_9 (struct ocfs2_super*,int ) ;
 int FUNC_10 (int *,struct inode*,int) ;

__attribute__((used)) static handle_t *FUNC_11(struct inode *VAR_3,
            struct buffer_head *VAR_4,
            loff_t VAR_5,
            loff_t VAR_6)
{
 struct ocfs2_super *VAR_7 = FUNC_3(VAR_3->i_sb);
 handle_t *VAR_8 = ((void*)0);
 int VAR_9 = 0;

 if (!FUNC_8(VAR_3))
  goto out;

 VAR_8 = FUNC_9(VAR_7, VAR_1);
 if (FUNC_2(VAR_8)) {
  VAR_9 = -VAR_0;
  FUNC_4(VAR_9);
  goto out;
 }

 VAR_9 = FUNC_6(VAR_8, VAR_3, VAR_5, VAR_6);
 if (VAR_9 < 0) {
  FUNC_4(VAR_9);
  goto out;
 }

 VAR_9 = FUNC_7(VAR_8, FUNC_1(VAR_3), VAR_4,
          VAR_2);
 if (VAR_9)
  FUNC_4(VAR_9);
 FUNC_10(VAR_8, VAR_3, 1);

out:
 if (VAR_9) {
  if (!FUNC_2(VAR_8))
   FUNC_5(VAR_7, VAR_8);
  VAR_8 = FUNC_0(VAR_9);
 }
 return VAR_8;
}
