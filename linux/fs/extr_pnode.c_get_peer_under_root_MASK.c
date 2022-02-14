
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {int dummy; } ;
struct TYPE_2__ {int mnt_root; } ;
struct mount {TYPE_1__ mnt; struct mnt_namespace* mnt_ns; } ;
struct mnt_namespace {int dummy; } ;


 scalar_t__ FUNC_0 (struct mount*,int ,struct path const*) ;
 struct mount* FUNC_1 (struct mount*) ;

__attribute__((used)) static struct mount *FUNC_2(struct mount *VAR_0,
      struct mnt_namespace *VAR_1,
      const struct path *VAR_2)
{
 struct mount *VAR_3 = VAR_0;

 do {

  if (VAR_3->mnt_ns == VAR_1 && FUNC_0(VAR_3, VAR_3->mnt.mnt_root, VAR_2))
   return VAR_3;

  VAR_3 = FUNC_1(VAR_3);
 } while (VAR_3 != VAR_0);

 return ((void*)0);
}
