
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mnt_flags; } ;
struct mount {int mnt_list; int mnt_umounting; int mnt_child; TYPE_1__ mnt; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct mount*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct list_head*) ;

__attribute__((used)) static void FUNC_3(struct mount *VAR_1, struct list_head *VAR_2)
{
 FUNC_0(VAR_1);
 VAR_1->mnt.mnt_flags |= VAR_0;
 FUNC_1(&VAR_1->mnt_child);
 FUNC_1(&VAR_1->mnt_umounting);
 FUNC_2(&VAR_1->mnt_list, VAR_2);
}
