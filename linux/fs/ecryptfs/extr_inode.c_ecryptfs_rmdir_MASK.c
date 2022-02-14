
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_5__ {int i_nlink; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct dentry*) ;
 TYPE_1__* FUNC_2 (struct dentry*) ;
 scalar_t__ FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 struct dentry* FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct inode*,TYPE_1__*) ;
 struct dentry* FUNC_8 (struct dentry*) ;
 int FUNC_9 (struct inode*,int ) ;
 int FUNC_10 (struct dentry*) ;
 int FUNC_11 (TYPE_1__*,struct dentry*) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_0, struct dentry *VAR_1)
{
 struct dentry *VAR_2;
 struct dentry *VAR_3;
 int VAR_4;

 VAR_2 = FUNC_6(VAR_1);
 FUNC_4(VAR_1);
 VAR_3 = FUNC_8(VAR_2);
 FUNC_4(VAR_2);
 VAR_4 = FUNC_11(FUNC_2(VAR_3), VAR_2);
 FUNC_5(VAR_2);
 if (!VAR_4 && FUNC_3(VAR_1))
  FUNC_0(FUNC_2(VAR_1));
 FUNC_7(VAR_0, FUNC_2(VAR_3));
 FUNC_9(VAR_0, FUNC_2(VAR_3)->i_nlink);
 FUNC_10(VAR_3);
 if (!VAR_4)
  FUNC_1(VAR_1);
 FUNC_5(VAR_1);
 return VAR_4;
}
