
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; int list; } ;
struct uwb_rc {TYPE_1__ notifs_chain; } ;
struct uwb_notifs_handler {int list_node; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct uwb_rc *VAR_1, struct uwb_notifs_handler *VAR_2)
{
 if (FUNC_1(&VAR_1->notifs_chain.mutex))
  return -VAR_0;
 FUNC_0(&VAR_2->list_node, &VAR_1->notifs_chain.list);
 FUNC_2(&VAR_1->notifs_chain.mutex);
 return 0;
}
