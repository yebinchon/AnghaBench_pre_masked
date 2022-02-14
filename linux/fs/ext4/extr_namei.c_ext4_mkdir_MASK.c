
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int i_sb; int * i_fop; int * i_op; } ;
struct dentry {int d_name; } ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int VAR_4 ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct dentry*,struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int *,struct dentry*,struct inode*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,struct inode*) ;
 int FUNC_11 (int *,struct inode*,struct inode*) ;
 int * FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,struct inode*) ;
 struct inode* FUNC_15 (struct inode*,int,int *,int ,int *,int ,int) ;
 scalar_t__ FUNC_16 (int ,int*) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (struct inode*) ;

__attribute__((used)) static int FUNC_20(struct inode *VAR_7, struct dentry *VAR_8, umode_t VAR_9)
{
 handle_t *VAR_10;
 struct inode *VAR_11;
 int VAR_12, VAR_13, VAR_14 = 0;

 if (FUNC_1(VAR_7))
  return -VAR_0;

 VAR_12 = FUNC_7(VAR_7);
 if (VAR_12)
  return VAR_12;

 VAR_13 = (FUNC_0(VAR_7->i_sb) +
     VAR_3 + 3);
retry:
 VAR_11 = FUNC_15(VAR_7, VAR_4 | VAR_9,
         &VAR_8->d_name,
         0, ((void*)0), VAR_2, VAR_13);
 VAR_10 = FUNC_12();
 VAR_12 = FUNC_4(VAR_11);
 if (FUNC_3(VAR_11))
  goto out_stop;

 VAR_11->i_op = &VAR_5;
 VAR_11->i_fop = &VAR_6;
 VAR_12 = FUNC_11(VAR_10, VAR_7, VAR_11);
 if (VAR_12)
  goto out_clear_inode;
 VAR_12 = FUNC_14(VAR_10, VAR_11);
 if (!VAR_12)
  VAR_12 = FUNC_8(VAR_10, VAR_8, VAR_11);
 if (VAR_12) {
out_clear_inode:
  FUNC_5(VAR_11);
  FUNC_19(VAR_11);
  FUNC_14(VAR_10, VAR_11);
  FUNC_18(VAR_11);
  goto out_stop;
 }
 FUNC_10(VAR_10, VAR_7);
 FUNC_17(VAR_7);
 VAR_12 = FUNC_14(VAR_10, VAR_7);
 if (VAR_12)
  goto out_clear_inode;
 FUNC_6(VAR_8, VAR_11);
 if (FUNC_2(VAR_7))
  FUNC_9(VAR_10);

out_stop:
 if (VAR_10)
  FUNC_13(VAR_10);
 if (VAR_12 == -VAR_1 && FUNC_16(VAR_7->i_sb, &VAR_14))
  goto retry;
 return VAR_12;
}
