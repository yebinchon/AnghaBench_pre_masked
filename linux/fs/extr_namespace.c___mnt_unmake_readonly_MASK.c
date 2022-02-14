
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mnt_flags; } ;
struct mount {TYPE_1__ mnt; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct mount *VAR_1)
{
 FUNC_0();
 VAR_1->mnt.mnt_flags &= ~VAR_0;
 FUNC_1();
 return 0;
}
