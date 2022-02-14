
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ umode_t ;
struct posix_acl {int a_count; } ;
struct inode {scalar_t__ i_mode; int i_sb; int i_ctime; } ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct inode*,int,struct posix_acl*,int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 size_t FUNC_5 (int ) ;
 int * FUNC_6 (struct inode*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,struct inode*) ;
 scalar_t__ FUNC_9 (int ,int*) ;
 int FUNC_10 (struct inode*,size_t,int,int*) ;
 int FUNC_11 (struct inode*,scalar_t__*,struct posix_acl**) ;

int
FUNC_12(struct inode *VAR_3, struct posix_acl *VAR_4, int VAR_5)
{
 handle_t *VAR_6;
 int VAR_7, VAR_8, VAR_9 = 0;
 size_t VAR_10 = VAR_4 ? FUNC_5(VAR_4->a_count) : 0;
 umode_t VAR_11 = VAR_3->i_mode;
 int VAR_12 = 0;

 VAR_7 = FUNC_4(VAR_3);
 if (VAR_7)
  return VAR_7;
retry:
 VAR_7 = FUNC_10(VAR_3, VAR_10, 0 ,
           &VAR_8);
 if (VAR_7)
  return VAR_7;

 VAR_6 = FUNC_6(VAR_3, VAR_2, VAR_8);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 if ((VAR_5 == VAR_0) && VAR_4) {
  VAR_7 = FUNC_11(VAR_3, &VAR_11, &VAR_4);
  if (VAR_7)
   goto out_stop;
  if (VAR_11 != VAR_3->i_mode)
   VAR_12 = 1;
 }

 VAR_7 = FUNC_2(VAR_6, VAR_3, VAR_5, VAR_4, 0 );
 if (!VAR_7 && VAR_12) {
  VAR_3->i_mode = VAR_11;
  VAR_3->i_ctime = FUNC_3(VAR_3);
  FUNC_8(VAR_6, VAR_3);
 }
out_stop:
 FUNC_7(VAR_6);
 if (VAR_7 == -VAR_1 && FUNC_9(VAR_3->i_sb, &VAR_9))
  goto retry;
 return VAR_7;
}
