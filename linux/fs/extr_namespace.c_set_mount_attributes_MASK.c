
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int mnt_flags; } ;
struct mount {int mnt_ns; TYPE_1__ mnt; } ;


 unsigned int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct mount *VAR_1, unsigned int VAR_2)
{
 FUNC_0();
 VAR_2 |= VAR_1->mnt.mnt_flags & ~VAR_0;
 VAR_1->mnt.mnt_flags = VAR_2;
 FUNC_1(VAR_1->mnt_ns);
 FUNC_2();
}
