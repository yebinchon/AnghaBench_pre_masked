
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr_handler {int flags; } ;
struct inode {int dummy; } ;
struct gfs2_inode {int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct dentry {int dummy; } ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct inode*,char const*,void*,size_t,int ) ;
 int FUNC_2 (struct gfs2_holder*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,struct gfs2_holder*) ;
 scalar_t__ FUNC_5 (struct gfs2_holder*) ;
 int FUNC_6 (struct gfs2_holder*) ;

__attribute__((used)) static int FUNC_7(const struct xattr_handler *VAR_2,
     struct dentry *VAR_3, struct inode *VAR_4,
     const char *VAR_5, void *VAR_6, size_t VAR_7)
{
 struct gfs2_inode *VAR_8 = FUNC_0(VAR_4);
 struct gfs2_holder VAR_9;
 int VAR_10;



 if (!FUNC_3(VAR_8->i_gl)) {
  VAR_10 = FUNC_4(VAR_8->i_gl, VAR_1, VAR_0, &VAR_9);
  if (VAR_10)
   return VAR_10;
 } else {
  FUNC_6(&VAR_9);
 }
 VAR_10 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_2->flags);
 if (FUNC_5(&VAR_9))
  FUNC_2(&VAR_9);
 return VAR_10;
}
