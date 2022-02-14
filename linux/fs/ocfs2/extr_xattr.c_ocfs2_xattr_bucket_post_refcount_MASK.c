
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_xattr_bucket {int dummy; } ;
struct inode {int dummy; } ;
typedef int handle_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct ocfs2_xattr_bucket*,int ) ;
 int FUNC_2 (int *,struct ocfs2_xattr_bucket*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1,
         handle_t *VAR_2,
         void *VAR_3)
{
 int VAR_4;
 struct ocfs2_xattr_bucket *VAR_5 =
   (struct ocfs2_xattr_bucket *)VAR_3;

 VAR_4 = FUNC_1(VAR_2, VAR_5,
      VAR_0);
 if (VAR_4) {
  FUNC_0(VAR_4);
  return VAR_4;
 }

 FUNC_2(VAR_2, VAR_5);

 return 0;
}
