
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int umode_t ;
struct inode {int i_sb; } ;
struct dentry {int dummy; } ;
struct TYPE_5__ {int i_nlink; } ;


 int FUNC_0 (struct dentry*) ;
 TYPE_1__* FUNC_1 (struct dentry*) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*,struct dentry*,int ) ;
 int FUNC_5 (struct inode*,TYPE_1__*) ;
 int FUNC_6 (struct inode*,TYPE_1__*) ;
 struct dentry* FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct inode*,int ) ;
 int FUNC_9 (struct dentry*) ;
 int FUNC_10 (TYPE_1__*,struct dentry*,int ) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_0, struct dentry *VAR_1, umode_t VAR_2)
{
 int VAR_3;
 struct dentry *VAR_4;
 struct dentry *VAR_5;

 VAR_4 = FUNC_3(VAR_1);
 VAR_5 = FUNC_7(VAR_4);
 VAR_3 = FUNC_10(FUNC_1(VAR_5), VAR_4, VAR_2);
 if (VAR_3 || FUNC_2(VAR_4))
  goto out;
 VAR_3 = FUNC_4(VAR_4, VAR_1, VAR_0->i_sb);
 if (VAR_3)
  goto out;
 FUNC_5(VAR_0, FUNC_1(VAR_5));
 FUNC_6(VAR_0, FUNC_1(VAR_5));
 FUNC_8(VAR_0, FUNC_1(VAR_5)->i_nlink);
out:
 FUNC_9(VAR_5);
 if (FUNC_2(VAR_1))
  FUNC_0(VAR_1);
 return VAR_3;
}
