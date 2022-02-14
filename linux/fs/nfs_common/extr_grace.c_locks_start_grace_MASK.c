
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int inum; } ;
struct net {TYPE_1__ ns; } ;
struct lock_manager {int list; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int,char*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct net VAR_2 ;
 int FUNC_1 (int *,struct list_head*) ;
 scalar_t__ FUNC_2 (int *) ;
 struct list_head* FUNC_3 (struct net*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(struct net *VAR_3, struct lock_manager *VAR_4)
{
 struct list_head *VAR_5 = FUNC_3(VAR_3, VAR_1);

 FUNC_4(&VAR_0);
 if (FUNC_2(&VAR_4->list))
  FUNC_1(&VAR_4->list, VAR_5);
 else
  FUNC_0(1, "double list_add attempt detected in net %x %s\n",
       VAR_3->ns.inum, (VAR_3 == &VAR_2) ? "(init_net)" : "");
 FUNC_5(&VAR_0);
}
