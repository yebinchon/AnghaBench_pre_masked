
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int i_sb; int * i_fop; int * i_op; } ;
struct dentry {int d_name; } ;
typedef int handle_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int *,struct dentry*,struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 struct inode* FUNC_9 (struct inode*,int ,int *,int ,int *,int ,int) ;
 int FUNC_10 (struct inode*) ;
 scalar_t__ FUNC_11 (int ,int*) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_5, struct dentry *VAR_6, umode_t VAR_7,
         bool VAR_8)
{
 handle_t *VAR_9;
 struct inode *VAR_10;
 int VAR_11, VAR_12, VAR_13 = 0;

 VAR_11 = FUNC_4(VAR_5);
 if (VAR_11)
  return VAR_11;

 VAR_12 = (FUNC_0(VAR_5->i_sb) +
     VAR_2 + 3);
retry:
 VAR_10 = FUNC_9(VAR_5, VAR_7, &VAR_6->d_name, 0,
         ((void*)0), VAR_1, VAR_12);
 VAR_9 = FUNC_7();
 VAR_11 = FUNC_3(VAR_10);
 if (!FUNC_2(VAR_10)) {
  VAR_10->i_op = &VAR_3;
  VAR_10->i_fop = &VAR_4;
  FUNC_10(VAR_10);
  VAR_11 = FUNC_5(VAR_9, VAR_6, VAR_10);
  if (!VAR_11 && FUNC_1(VAR_5))
   FUNC_6(VAR_9);
 }
 if (VAR_9)
  FUNC_8(VAR_9);
 if (VAR_11 == -VAR_0 && FUNC_11(VAR_5->i_sb, &VAR_13))
  goto retry;
 return VAR_11;
}
