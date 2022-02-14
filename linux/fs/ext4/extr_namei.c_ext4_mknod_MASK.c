
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int i_sb; int * i_op; int i_mode; } ;
struct dentry {int d_name; } ;
typedef int handle_t ;
typedef int dev_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int *,struct dentry*,struct inode*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 struct inode* FUNC_9 (struct inode*,int ,int *,int ,int *,int ,int) ;
 scalar_t__ FUNC_10 (int ,int*) ;
 int VAR_3 ;
 int FUNC_11 (struct inode*,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_4, struct dentry *VAR_5,
        umode_t VAR_6, dev_t VAR_7)
{
 handle_t *VAR_8;
 struct inode *VAR_9;
 int VAR_10, VAR_11, VAR_12 = 0;

 VAR_10 = FUNC_4(VAR_4);
 if (VAR_10)
  return VAR_10;

 VAR_11 = (FUNC_0(VAR_4->i_sb) +
     VAR_2 + 3);
retry:
 VAR_9 = FUNC_9(VAR_4, VAR_6, &VAR_5->d_name, 0,
         ((void*)0), VAR_1, VAR_11);
 VAR_8 = FUNC_7();
 VAR_10 = FUNC_3(VAR_9);
 if (!FUNC_2(VAR_9)) {
  FUNC_11(VAR_9, VAR_9->i_mode, VAR_7);
  VAR_9->i_op = &VAR_3;
  VAR_10 = FUNC_5(VAR_8, VAR_5, VAR_9);
  if (!VAR_10 && FUNC_1(VAR_4))
   FUNC_6(VAR_8);
 }
 if (VAR_8)
  FUNC_8(VAR_8);
 if (VAR_10 == -VAR_0 && FUNC_10(VAR_4->i_sb, &VAR_12))
  goto retry;
 return VAR_10;
}
