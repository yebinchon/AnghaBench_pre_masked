
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {int dentry; int mnt; } ;
struct TYPE_2__ {int mnt_flags; } ;
struct mount {TYPE_1__ mnt; } ;


 int VAR_0 ;
 struct mount* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline bool FUNC_2(const struct path *VAR_1)
{
 struct mount *VAR_2 = FUNC_0(VAR_1->mnt, VAR_1->dentry);
 return VAR_2 && FUNC_1(!(VAR_2->mnt.mnt_flags & VAR_0));
}
