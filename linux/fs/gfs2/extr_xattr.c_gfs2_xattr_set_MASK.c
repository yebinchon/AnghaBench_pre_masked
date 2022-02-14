
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct xattr_handler {int flags; } ;
struct inode {int dummy; } ;
struct gfs2_inode {TYPE_1__* i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_3__ {scalar_t__ gl_state; } ;


 int VAR_0 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct inode*,char const*,void const*,size_t,int,int ) ;
 int FUNC_3 (struct gfs2_holder*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,int ,struct gfs2_holder*) ;
 scalar_t__ FUNC_6 (struct gfs2_holder*) ;
 int FUNC_7 (struct gfs2_holder*) ;
 int FUNC_8 (struct gfs2_inode*) ;

__attribute__((used)) static int FUNC_9(const struct xattr_handler *VAR_2,
     struct dentry *VAR_3, struct inode *VAR_4,
     const char *VAR_5, const void *VAR_6,
     size_t VAR_7, int VAR_8)
{
 struct gfs2_inode *VAR_9 = FUNC_0(VAR_4);
 struct gfs2_holder VAR_10;
 int VAR_11;

 VAR_11 = FUNC_8(VAR_9);
 if (VAR_11)
  return VAR_11;



 if (!FUNC_4(VAR_9->i_gl)) {
  VAR_11 = FUNC_5(VAR_9->i_gl, VAR_1, 0, &VAR_10);
  if (VAR_11)
   return VAR_11;
 } else {
  if (FUNC_1(VAR_9->i_gl->gl_state != VAR_1))
   return -VAR_0;
  FUNC_7(&VAR_10);
 }
 VAR_11 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_2->flags);
 if (FUNC_6(&VAR_10))
  FUNC_3(&VAR_10);
 return VAR_11;
}
