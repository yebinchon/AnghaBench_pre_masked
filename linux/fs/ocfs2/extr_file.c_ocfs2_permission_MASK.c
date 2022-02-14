
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_lock_holder {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct inode*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct inode*,int *,int ,struct ocfs2_lock_holder*) ;
 int FUNC_4 (struct inode*,int ,struct ocfs2_lock_holder*,int) ;

int FUNC_5(struct inode *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 struct ocfs2_lock_holder VAR_7;

 if (VAR_4 & VAR_1)
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_3, ((void*)0), 0, &VAR_7);
 if (VAR_6 < 0) {
  VAR_5 = VAR_6;
  goto out;
 } else if (VAR_6) {
  FUNC_2(VAR_2, "Another case of recursive locking:\n");
  FUNC_0();
 }

 VAR_5 = FUNC_1(VAR_3, VAR_4);

 FUNC_4(VAR_3, 0, &VAR_7, VAR_6);
out:
 return VAR_5;
}
