
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct path {int dentry; TYPE_1__* mnt; } ;
struct TYPE_10__ {int fs; TYPE_4__* nsproxy; } ;
struct TYPE_9__ {TYPE_3__* mnt_ns; } ;
struct TYPE_8__ {TYPE_2__* root; } ;
struct TYPE_6__ {int mnt_root; } ;
struct TYPE_7__ {TYPE_1__ mnt; } ;


 TYPE_5__* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct path*) ;
 int FUNC_2 (int ,struct path*) ;
 int FUNC_3 (struct path*,struct path*) ;
 int FUNC_4 (struct path*) ;
 int FUNC_5 (struct path*) ;

bool FUNC_6(void)
{

 struct path VAR_1;
 struct path VAR_2;
 bool VAR_3;


 VAR_1.mnt = &VAR_0->nsproxy->mnt_ns->root->mnt;
 VAR_1.dentry = VAR_1.mnt->mnt_root;
 FUNC_4(&VAR_1);
 while (FUNC_0(VAR_1.dentry) && FUNC_1(&VAR_1))
  ;

 FUNC_2(VAR_0->fs, &VAR_2);

 VAR_3 = !FUNC_3(&VAR_2, &VAR_1);

 FUNC_5(&VAR_2);
 FUNC_5(&VAR_1);

 return VAR_3;
}
