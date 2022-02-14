
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mnt_flags; } ;
struct mount {TYPE_1__ mnt; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct mount *VAR_2)
{
 VAR_2->mnt.mnt_flags &= ~VAR_1;
 VAR_2->mnt.mnt_flags |= VAR_0;
}
