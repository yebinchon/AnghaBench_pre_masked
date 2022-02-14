
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mnt_namespace {scalar_t__ seq; } ;
struct dentry {int d_inode; } ;
struct TYPE_6__ {TYPE_2__* nsproxy; } ;
struct TYPE_5__ {TYPE_1__* mnt_ns; } ;
struct TYPE_4__ {scalar_t__ seq; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*) ;
 struct mnt_namespace* FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct dentry *VAR_1)
{



 struct mnt_namespace *VAR_2;
 if (!FUNC_1(VAR_1))
  return 0;

 VAR_2 = FUNC_2(FUNC_0(VAR_1->d_inode));
 return VAR_0->nsproxy->mnt_ns->seq >= VAR_2->seq;
}
