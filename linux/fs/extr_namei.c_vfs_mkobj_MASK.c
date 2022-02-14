
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct inode {int dummy; } ;
struct dentry {TYPE_1__* d_parent; } ;
struct TYPE_2__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,struct dentry*) ;
 int FUNC_1 (struct inode*,struct dentry*) ;
 int FUNC_2 (struct inode*,struct dentry*,int ) ;

int FUNC_3(struct dentry *VAR_2, umode_t VAR_3,
  int (*VAR_4)(struct dentry *, umode_t, void *),
  void *VAR_5)
{
 struct inode *VAR_6 = VAR_2->d_parent->d_inode;
 int VAR_7 = FUNC_1(VAR_6, VAR_2);
 if (VAR_7)
  return VAR_7;

 VAR_3 &= VAR_0;
 VAR_3 |= VAR_1;
 VAR_7 = FUNC_2(VAR_6, VAR_2, VAR_3);
 if (VAR_7)
  return VAR_7;
 VAR_7 = VAR_4(VAR_2, VAR_3, VAR_5);
 if (!VAR_7)
  FUNC_0(VAR_6, VAR_2);
 return VAR_7;
}
