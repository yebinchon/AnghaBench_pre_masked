
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_xattr_reflink {int new_bh; int new_inode; } ;
struct ocfs2_xattr_block {int xb_flags; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,struct buffer_head**,int) ;
 int FUNC_4 (struct ocfs2_xattr_reflink*,struct buffer_head*,struct buffer_head*) ;
 int FUNC_5 (struct ocfs2_xattr_reflink*,struct buffer_head*,struct buffer_head*) ;

__attribute__((used)) static int FUNC_6(struct ocfs2_xattr_reflink *VAR_1,
     struct buffer_head *VAR_2)
{
 int VAR_3, VAR_4 = 0;
 struct buffer_head *VAR_5 = ((void*)0);
 struct ocfs2_xattr_block *VAR_6 =
   (struct ocfs2_xattr_block *)VAR_2->b_data;


 if (FUNC_1(VAR_6->xb_flags) & VAR_0)
  VAR_4 = 1;

 VAR_3 = FUNC_3(VAR_1->new_inode, VAR_1->new_bh,
          &VAR_5, VAR_4);
 if (VAR_3) {
  FUNC_2(VAR_3);
  goto out;
 }

 if (!VAR_4)
  VAR_3 = FUNC_4(VAR_1, VAR_2, VAR_5);
 else
  VAR_3 = FUNC_5(VAR_1, VAR_2, VAR_5);
 if (VAR_3)
  FUNC_2(VAR_3);

out:
 FUNC_0(VAR_5);
 return VAR_3;
}
