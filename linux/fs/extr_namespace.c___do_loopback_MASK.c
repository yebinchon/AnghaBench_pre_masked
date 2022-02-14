
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct path {TYPE_2__* dentry; int mnt; } ;
struct TYPE_5__ {int mnt_flags; } ;
struct mount {TYPE_1__ mnt; } ;
struct TYPE_6__ {int * d_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mount* FUNC_0 (int ) ;
 int FUNC_1 (struct mount*) ;
 scalar_t__ FUNC_2 (struct mount*) ;
 int VAR_2 ;
 int FUNC_3 (struct mount*) ;
 struct mount* FUNC_4 (struct mount*,TYPE_2__*,int ) ;
 struct mount* FUNC_5 (struct mount*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_6 (struct mount*,TYPE_2__*) ;
 int VAR_3 ;
 struct mount* FUNC_7 (int ) ;

__attribute__((used)) static struct mount *FUNC_8(struct path *VAR_4, int VAR_5)
{
 struct mount *VAR_6 = FUNC_0(-VAR_1), *VAR_7 = FUNC_7(VAR_4->mnt);

 if (FUNC_2(VAR_7))
  return VAR_6;

 if (!FUNC_3(VAR_7) && VAR_4->dentry->d_op != &VAR_3)
  return VAR_6;

 if (!VAR_5 && FUNC_6(VAR_7, VAR_4->dentry))
  return VAR_6;

 if (VAR_5)
  VAR_6 = FUNC_5(VAR_7, VAR_4->dentry, VAR_0);
 else
  VAR_6 = FUNC_4(VAR_7, VAR_4->dentry, 0);

 if (!FUNC_1(VAR_6))
  VAR_6->mnt.mnt_flags &= ~VAR_2;

 return VAR_6;
}
