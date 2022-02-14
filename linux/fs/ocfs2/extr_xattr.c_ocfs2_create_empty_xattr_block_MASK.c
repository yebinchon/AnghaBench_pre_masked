
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_xattr_set_ctxt {int meta_ac; int handle; } ;
struct ocfs2_super {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_blocknr; } ;
typedef int ctxt ;


 scalar_t__ FUNC_0 (int ) ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ocfs2_xattr_set_ctxt*,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ocfs2_super*,int ) ;
 int FUNC_6 (struct inode*,struct buffer_head*,struct ocfs2_xattr_set_ctxt*,int,struct buffer_head**) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct ocfs2_super*,int,int *) ;
 int FUNC_9 (struct ocfs2_super*,int ) ;
 int FUNC_10 (unsigned long long,int) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_1,
       struct buffer_head *VAR_2,
       struct buffer_head **VAR_3,
       int VAR_4)
{
 int VAR_5;
 struct ocfs2_super *VAR_6 = FUNC_1(VAR_1->i_sb);
 struct ocfs2_xattr_set_ctxt VAR_7;

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));
 VAR_5 = FUNC_8(VAR_6, 1, &VAR_7.meta_ac);
 if (VAR_5 < 0) {
  FUNC_4(VAR_5);
  return VAR_5;
 }

 VAR_7.handle = FUNC_9(VAR_6, VAR_0);
 if (FUNC_0(VAR_7.handle)) {
  VAR_5 = FUNC_2(VAR_7.handle);
  FUNC_4(VAR_5);
  goto out;
 }

 FUNC_10(
    (unsigned long long)VAR_2->b_blocknr, VAR_4);
 VAR_5 = FUNC_6(VAR_1, VAR_2, &VAR_7, VAR_4,
           VAR_3);
 if (VAR_5)
  FUNC_4(VAR_5);

 FUNC_5(VAR_6, VAR_7.handle);
out:
 FUNC_7(VAR_7.meta_ac);
 return VAR_5;
}
