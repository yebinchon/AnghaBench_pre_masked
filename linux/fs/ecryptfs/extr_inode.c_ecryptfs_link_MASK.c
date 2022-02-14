
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct inode {int i_sb; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int i_nlink; } ;


 int FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 struct dentry* FUNC_4 (struct dentry*) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (struct dentry*,struct dentry*,int ) ;
 int FUNC_7 (struct inode*,int ) ;
 int FUNC_8 (struct inode*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 struct dentry* FUNC_11 (struct dentry*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct dentry*) ;
 int FUNC_14 (struct dentry*,int ,struct dentry*,int *) ;

__attribute__((used)) static int FUNC_15(struct dentry *VAR_0, struct inode *VAR_1,
    struct dentry *VAR_2)
{
 struct dentry *VAR_3;
 struct dentry *VAR_4;
 struct dentry *VAR_5;
 u64 VAR_6;
 int VAR_7;

 VAR_6 = FUNC_9(FUNC_0(VAR_0));
 VAR_3 = FUNC_4(VAR_0);
 VAR_4 = FUNC_4(VAR_2);
 FUNC_2(VAR_3);
 FUNC_2(VAR_4);
 VAR_5 = FUNC_11(VAR_4);
 VAR_7 = FUNC_14(VAR_3, FUNC_0(VAR_5),
        VAR_4, ((void*)0));
 if (VAR_7 || FUNC_1(VAR_4))
  goto out_lock;
 VAR_7 = FUNC_6(VAR_4, VAR_2, VAR_1->i_sb);
 if (VAR_7)
  goto out_lock;
 FUNC_7(VAR_1, FUNC_0(VAR_5));
 FUNC_8(VAR_1, FUNC_0(VAR_5));
 FUNC_12(FUNC_0(VAR_0),
    FUNC_5(FUNC_0(VAR_0))->i_nlink);
 FUNC_10(FUNC_0(VAR_2), VAR_6);
out_lock:
 FUNC_13(VAR_5);
 FUNC_3(VAR_4);
 FUNC_3(VAR_3);
 return VAR_7;
}
