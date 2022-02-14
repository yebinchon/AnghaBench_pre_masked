
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {int mnt; TYPE_1__* dentry; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int d_inode; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct path*) ;

void FUNC_4(struct path *VAR_0, struct dentry *VAR_1)
{
 FUNC_0(VAR_1);
 FUNC_1(VAR_0->dentry->d_inode);
 FUNC_2(VAR_0->mnt);
 FUNC_3(VAR_0);
}
