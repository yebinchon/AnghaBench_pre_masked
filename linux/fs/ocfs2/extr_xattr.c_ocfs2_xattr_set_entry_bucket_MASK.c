
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_xattr_set_ctxt {int handle; } ;
struct ocfs2_xattr_search {int * here; int bucket; scalar_t__ not_found; } ;
struct ocfs2_xattr_info {int xi_name; } ;
struct ocfs2_xa_loc {int * xl_entry; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct inode*,int ,int ) ;
 int FUNC_2 (struct ocfs2_xa_loc*,int ,int *) ;
 int FUNC_3 (struct ocfs2_xa_loc*,struct ocfs2_xattr_info*,struct ocfs2_xattr_set_ctxt*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_1,
     struct ocfs2_xattr_info *VAR_2,
     struct ocfs2_xattr_search *VAR_3,
     struct ocfs2_xattr_set_ctxt *VAR_4)
{
 int VAR_5;
 struct ocfs2_xa_loc VAR_6;

 FUNC_4(VAR_2->xi_name);

 FUNC_2(&VAR_6, VAR_3->bucket,
           VAR_3->not_found ? ((void*)0) : VAR_3->here);
 VAR_5 = FUNC_3(&VAR_6, VAR_2, VAR_4);
 if (!VAR_5) {
  VAR_3->here = VAR_6.xl_entry;
  goto out;
 }
 if (VAR_5 != -VAR_0) {
  FUNC_0(VAR_5);
  goto out;
 }


 VAR_5 = FUNC_1(VAR_1, VAR_4->handle,
     VAR_3->bucket);
 if (VAR_5) {
  FUNC_0(VAR_5);
  goto out;
 }

 VAR_5 = FUNC_3(&VAR_6, VAR_2, VAR_4);
 if (!VAR_5) {
  VAR_3->here = VAR_6.xl_entry;
  goto out;
 }
 if (VAR_5 != -VAR_0)
  FUNC_0(VAR_5);


out:
 return VAR_5;
}
