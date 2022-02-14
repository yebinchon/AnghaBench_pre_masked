
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_xattr_bucket {int dummy; } ;
struct ocfs2_xa_loc {struct ocfs2_xattr_bucket* xl_storage; } ;
typedef int handle_t ;


 int FUNC_0 (int *,struct ocfs2_xattr_bucket*,int) ;

__attribute__((used)) static int FUNC_1(handle_t *VAR_0,
       struct ocfs2_xa_loc *VAR_1, int VAR_2)
{
 struct ocfs2_xattr_bucket *VAR_3 = VAR_1->xl_storage;

 return FUNC_0(VAR_0, VAR_3, VAR_2);
}
