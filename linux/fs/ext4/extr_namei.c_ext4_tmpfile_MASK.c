
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int i_sb; int * i_fop; int * i_op; } ;
struct dentry {int dummy; } ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 struct inode* FUNC_7 (struct inode*,int ,int *,int ,int *,int ,scalar_t__) ;
 int FUNC_8 (int *,struct inode*) ;
 int FUNC_9 (struct inode*) ;
 scalar_t__ FUNC_10 (int ,int*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_5, struct dentry *VAR_6, umode_t VAR_7)
{
 handle_t *VAR_8;
 struct inode *VAR_9;
 int VAR_10, VAR_11 = 0;

 VAR_10 = FUNC_4(VAR_5);
 if (VAR_10)
  return VAR_10;

retry:
 VAR_9 = FUNC_7(VAR_5, VAR_7,
         ((void*)0), 0, ((void*)0),
         VAR_1,
   FUNC_0(VAR_5->i_sb) +
     4 + VAR_2);
 VAR_8 = FUNC_5();
 VAR_10 = FUNC_2(VAR_9);
 if (!FUNC_1(VAR_9)) {
  VAR_9->i_op = &VAR_3;
  VAR_9->i_fop = &VAR_4;
  FUNC_9(VAR_9);
  FUNC_3(VAR_6, VAR_9);
  VAR_10 = FUNC_8(VAR_8, VAR_9);
  if (VAR_10)
   goto err_unlock_inode;
  FUNC_11(VAR_9);
  FUNC_12(VAR_9);
 }
 if (VAR_8)
  FUNC_6(VAR_8);
 if (VAR_10 == -VAR_0 && FUNC_10(VAR_5->i_sb, &VAR_11))
  goto retry;
 return VAR_10;
err_unlock_inode:
 FUNC_6(VAR_8);
 FUNC_12(VAR_9);
 return VAR_10;
}
