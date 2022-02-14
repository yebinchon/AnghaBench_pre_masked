
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_op; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int (* unlink ) (struct inode*,struct dentry*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct inode*,struct dentry*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_1, struct dentry *VAR_2)
{
 int VAR_3;

 FUNC_0(!FUNC_3(VAR_1));

 FUNC_4(FUNC_2(VAR_2), VAR_0);
 VAR_3 = VAR_1->i_op->unlink(VAR_1, VAR_2);
 FUNC_5(FUNC_2(VAR_2));

 if (!VAR_3)
  FUNC_1(VAR_2);
 return VAR_3;
}
