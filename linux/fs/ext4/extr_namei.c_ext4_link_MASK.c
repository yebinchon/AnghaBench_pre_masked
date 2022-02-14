
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_nlink; int i_sb; int i_ctime; } ;
struct dentry {struct inode* d_inode; } ;
typedef int handle_t ;
struct TYPE_2__ {int i_projid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*) ;
 struct inode* FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct dentry*,struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (int *,struct dentry*,struct inode*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,struct inode*) ;
 int * FUNC_13 (struct inode*,int ,scalar_t__) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,struct inode*) ;
 int FUNC_16 (int *,struct inode*) ;
 scalar_t__ FUNC_17 (int ,int*) ;
 scalar_t__ FUNC_18 (struct inode*,int ) ;
 int FUNC_19 (struct dentry*,struct inode*,struct dentry*) ;
 int FUNC_20 (struct inode*) ;
 int FUNC_21 (struct inode*) ;
 int FUNC_22 (int ,int ) ;

__attribute__((used)) static int FUNC_23(struct dentry *VAR_7,
       struct inode *VAR_8, struct dentry *VAR_9)
{
 handle_t *VAR_10;
 struct inode *VAR_11 = FUNC_6(VAR_7);
 int VAR_12, VAR_13 = 0;

 if (VAR_11->i_nlink >= VAR_6)
  return -VAR_0;

 VAR_12 = FUNC_19(VAR_7, VAR_8, VAR_9);
 if (VAR_12)
  return VAR_12;

 if ((FUNC_18(VAR_8, VAR_5)) &&
     (!FUNC_22(FUNC_1(VAR_8)->i_projid,
   FUNC_1(VAR_7->d_inode)->i_projid)))
  return -VAR_2;

 VAR_12 = FUNC_8(VAR_8);
 if (VAR_12)
  return VAR_12;

retry:
 VAR_10 = FUNC_13(VAR_8, VAR_3,
  (FUNC_0(VAR_8->i_sb) +
   VAR_4) + 1);
 if (FUNC_3(VAR_10))
  return FUNC_4(VAR_10);

 if (FUNC_2(VAR_8))
  FUNC_11(VAR_10);

 VAR_11->i_ctime = FUNC_5(VAR_11);
 FUNC_12(VAR_10, VAR_11);
 FUNC_20(VAR_11);

 VAR_12 = FUNC_10(VAR_10, VAR_9, VAR_11);
 if (!VAR_12) {
  FUNC_15(VAR_10, VAR_11);



  if (VAR_11->i_nlink == 1)
   FUNC_16(VAR_10, VAR_11);
  FUNC_7(VAR_9, VAR_11);
 } else {
  FUNC_9(VAR_11);
  FUNC_21(VAR_11);
 }
 FUNC_14(VAR_10);
 if (VAR_12 == -VAR_1 && FUNC_17(VAR_8->i_sb, &VAR_13))
  goto retry;
 return VAR_12;
}
