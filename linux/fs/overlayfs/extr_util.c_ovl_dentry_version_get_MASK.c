
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int version; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int) ;
 struct inode* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct inode*) ;

u64 FUNC_4(struct dentry *VAR_0)
{
 struct inode *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(!FUNC_3(VAR_1));
 return FUNC_0(VAR_1)->version;
}
