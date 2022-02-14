
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct dentry* dentry; int * mnt; } ;
struct nameidata {int flags; scalar_t__ inode; TYPE_1__ path; int seq; } ;
struct dentry {scalar_t__ d_inode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct nameidata*) ;
 int FUNC_2 (struct nameidata*,TYPE_1__*,int ) ;
 int FUNC_3 (struct nameidata*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct nameidata *VAR_2)
{
 struct dentry *VAR_3 = VAR_2->path.dentry;

 FUNC_0(!(VAR_2->flags & VAR_1));

 VAR_2->flags &= ~VAR_1;
 if (FUNC_5(!FUNC_1(VAR_2)))
  goto out1;
 if (FUNC_5(!FUNC_2(VAR_2, &VAR_2->path, VAR_2->seq)))
  goto out;
 if (FUNC_5(!FUNC_3(VAR_2)))
  goto out;
 FUNC_4();
 FUNC_0(VAR_2->inode != VAR_3->d_inode);
 return 0;

out1:
 VAR_2->path.mnt = ((void*)0);
 VAR_2->path.dentry = ((void*)0);
out:
 FUNC_4();
 return -VAR_0;
}
