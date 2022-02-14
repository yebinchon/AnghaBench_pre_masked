
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mnt_flags; } ;
struct mount {TYPE_1__ mnt; int mnt_mountpoint; struct mount* mnt_parent; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct mount* FUNC_1 (TYPE_1__*,int ) ;
 struct mount* FUNC_2 (struct mount*,struct mount*) ;

void FUNC_3(struct mount *VAR_1)
{
 struct mount *VAR_2 = VAR_1->mnt_parent;
 struct mount *VAR_3, *VAR_4;

 FUNC_0(VAR_2 == VAR_1);

 for (VAR_3 = FUNC_2(VAR_2, VAR_2); VAR_3;
   VAR_3 = FUNC_2(VAR_3, VAR_2)) {
  VAR_4 = FUNC_1(&VAR_3->mnt, VAR_1->mnt_mountpoint);
  if (VAR_4)
   VAR_4->mnt.mnt_flags &= ~VAR_0;
 }
}
