
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {TYPE_1__* i_op; } ;
struct dentry {int dummy; } ;
struct TYPE_6__ {int i_flags; } ;
struct TYPE_5__ {int (* rmdir ) (struct inode*,struct dentry*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dentry*) ;
 TYPE_2__* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct inode*,struct dentry*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_2, struct dentry *VAR_3)
{
 int VAR_4;

 FUNC_0(!FUNC_3(VAR_2));

 FUNC_4(FUNC_2(VAR_3), VAR_0);
 VAR_4 = VAR_2->i_op->rmdir(VAR_2, VAR_3);
 if (!VAR_4)
  FUNC_2(VAR_3)->i_flags |= VAR_1;
 FUNC_5(FUNC_2(VAR_3));
 if (!VAR_4)
  FUNC_1(VAR_3);

 return VAR_4;
}
