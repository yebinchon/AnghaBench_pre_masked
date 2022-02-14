
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mid_q_entry {int optype; struct TCP_Server_Info* server; } ;
struct cifs_credits {int instance; int value; } ;
struct TCP_Server_Info {int reconnect_instance; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_credits ) (struct mid_q_entry*) ;} ;


 int FUNC_0 (struct TCP_Server_Info*,struct cifs_credits*,int ) ;
 int FUNC_1 (struct mid_q_entry*) ;

__attribute__((used)) static void
FUNC_2(struct mid_q_entry *VAR_0)
{
 struct TCP_Server_Info *VAR_1 = VAR_0->server;
 struct cifs_credits VAR_2;

 VAR_2.value = VAR_1->ops->get_credits(VAR_0);
 VAR_2.instance = VAR_1->reconnect_instance;

 FUNC_0(VAR_1, &VAR_2, VAR_0->optype);
}
