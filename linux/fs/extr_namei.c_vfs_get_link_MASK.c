
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_op; } ;
struct dentry {int dummy; } ;
struct delayed_call {int dummy; } ;
struct TYPE_2__ {char* (* get_link ) (struct dentry*,struct inode*,struct delayed_call*) ;} ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 struct inode* FUNC_1 (struct dentry*) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 char* FUNC_4 (struct dentry*,struct inode*,struct delayed_call*) ;

const char *FUNC_5(struct dentry *VAR_1, struct delayed_call *VAR_2)
{
 const char *VAR_3 = FUNC_0(-VAR_0);
 struct inode *VAR_4 = FUNC_1(VAR_1);

 if (FUNC_2(VAR_1)) {
  VAR_3 = FUNC_0(FUNC_3(VAR_1));
  if (!VAR_3)
   VAR_3 = VAR_4->i_op->get_link(VAR_1, VAR_4, VAR_2);
 }
 return VAR_3;
}
