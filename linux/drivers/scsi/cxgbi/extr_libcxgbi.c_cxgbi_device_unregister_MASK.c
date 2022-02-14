
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxgbi_device {int rcu_node; int list_head; TYPE_1__** ports; scalar_t__ nports; } ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cxgbi_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,char*,struct cxgbi_device*,scalar_t__,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;

void FUNC_9(struct cxgbi_device *VAR_3)
{
 FUNC_3(1 << VAR_0,
  "cdev 0x%p, p# %u,%s.\n",
  VAR_3, VAR_3->nports, VAR_3->nports ? VAR_3->ports[0]->name : "");

 FUNC_4(&VAR_1);
 FUNC_1(&VAR_3->list_head);
 FUNC_5(&VAR_1);

 FUNC_6(&VAR_2);
 FUNC_2(&VAR_3->rcu_node);
 FUNC_7(&VAR_2);
 FUNC_8();

 FUNC_0(VAR_3);
}
