
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ umode_t ;
struct posix_acl {scalar_t__ a_count; } ;
struct inode {scalar_t__ i_mode; int i_ctime; } ;
struct gfs2_inode {int i_gl; } ;
struct gfs2_holder {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct gfs2_inode* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int VAR_2 ;
 int FUNC_3 (struct inode*,struct posix_acl*,int) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct gfs2_holder*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_8 (struct gfs2_inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*,scalar_t__*,struct posix_acl**) ;

int FUNC_11(struct inode *VAR_3, struct posix_acl *VAR_4, int VAR_5)
{
 struct gfs2_inode *VAR_6 = FUNC_1(VAR_3);
 struct gfs2_holder VAR_7;
 bool VAR_8 = 0;
 int VAR_9;
 umode_t VAR_10;

 if (VAR_4 && VAR_4->a_count > FUNC_0(FUNC_2(VAR_3)))
  return -VAR_1;

 VAR_9 = FUNC_8(VAR_6);
 if (VAR_9)
  return VAR_9;

 if (!FUNC_6(VAR_6->i_gl)) {
  VAR_9 = FUNC_7(VAR_6->i_gl, VAR_2, 0, &VAR_7);
  if (VAR_9)
   return VAR_9;
  VAR_8 = 1;
 }

 VAR_10 = VAR_3->i_mode;
 if (VAR_5 == VAR_0 && VAR_4) {
  VAR_9 = FUNC_10(VAR_3, &VAR_10, &VAR_4);
  if (VAR_9)
   goto unlock;
 }

 VAR_9 = FUNC_3(VAR_3, VAR_4, VAR_5);
 if (!VAR_9 && VAR_10 != VAR_3->i_mode) {
  VAR_3->i_ctime = FUNC_4(VAR_3);
  VAR_3->i_mode = VAR_10;
  FUNC_9(VAR_3);
 }
unlock:
 if (VAR_8)
  FUNC_5(&VAR_7);
 return VAR_9;
}
