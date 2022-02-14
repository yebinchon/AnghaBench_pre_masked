
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mnt_flags; } ;
struct mount {TYPE_1__ mnt; int * mnt_master; int mnt_slave; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mount*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mount*) ;

void FUNC_3(struct mount *VAR_4, int VAR_5)
{
 if (VAR_5 == VAR_1) {
  FUNC_2(VAR_4);
  return;
 }
 FUNC_0(VAR_4);
 if (VAR_5 != VAR_2) {
  FUNC_1(&VAR_4->mnt_slave);
  VAR_4->mnt_master = ((void*)0);
  if (VAR_5 == VAR_3)
   VAR_4->mnt.mnt_flags |= VAR_0;
  else
   VAR_4->mnt.mnt_flags &= ~VAR_0;
 }
}
