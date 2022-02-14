
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_credits {scalar_t__ value; } ;
struct TCP_Server_Info {int request_q; int req_lock; int in_flight; int credits; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct TCP_Server_Info *VAR_0,
   const struct cifs_credits *VAR_1, const int VAR_2)
{
 FUNC_0(&VAR_0->req_lock);
 VAR_0->credits += VAR_1->value;
 VAR_0->in_flight--;
 FUNC_1(&VAR_0->req_lock);
 FUNC_2(&VAR_0->request_q);
}
