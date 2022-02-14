
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct dentry {int d_parent; int d_fsdata; } ;
struct TYPE_2__ {scalar_t__ ip_blkno; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct dentry*) ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_0,
         u64 VAR_1,
         int VAR_2)
{
 struct inode *VAR_3;







 if (!VAR_0->d_fsdata)
  return 0;

 if (!VAR_0->d_parent)
  return 0;

 if (VAR_2 && FUNC_2(VAR_0))
  return 0;

 VAR_3 = FUNC_1(VAR_0->d_parent);

 if (!VAR_3)
  return 0;


 if (FUNC_0(VAR_3)->ip_blkno != VAR_1)
  return 0;

 return 1;
}
