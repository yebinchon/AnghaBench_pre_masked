
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct path {TYPE_1__* dentry; } ;
struct nameidata {int flags; struct path path; int inode; } ;
struct TYPE_4__ {struct nameidata* nameidata; } ;
struct TYPE_3__ {int d_inode; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct path*) ;

void FUNC_1(struct path *VAR_2)
{
 struct nameidata *VAR_3 = VAR_1->nameidata;
 FUNC_0(&VAR_3->path);

 VAR_3->path = *VAR_2;
 VAR_3->inode = VAR_3->path.dentry->d_inode;
 VAR_3->flags |= VAR_0;
}
