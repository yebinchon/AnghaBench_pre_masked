
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;
struct gfs2_inode {int i_gl; } ;
struct gfs2_holder {int dummy; } ;


 struct posix_acl* FUNC_0 (int) ;
 struct gfs2_inode* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct posix_acl* FUNC_2 (struct inode*,int) ;
 int FUNC_3 (struct gfs2_holder*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,struct gfs2_holder*) ;

struct posix_acl *FUNC_6(struct inode *VAR_2, int VAR_3)
{
 struct gfs2_inode *VAR_4 = FUNC_1(VAR_2);
 struct gfs2_holder VAR_5;
 bool VAR_6 = 0;
 struct posix_acl *VAR_7;

 if (!FUNC_4(VAR_4->i_gl)) {
  int VAR_8 = FUNC_5(VAR_4->i_gl, VAR_1,
          VAR_0, &VAR_5);
  if (VAR_8)
   return FUNC_0(VAR_8);
  VAR_6 = 1;
 }
 VAR_7 = FUNC_2(VAR_2, VAR_3);
 if (VAR_6)
  FUNC_3(&VAR_5);
 return VAR_7;
}
