
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_qdio {int stat_lock; int req_q_lock; struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {struct zfcp_qdio* qdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct zfcp_qdio*) ;
 struct zfcp_qdio* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct zfcp_qdio*) ;

int FUNC_4(struct zfcp_adapter *VAR_2)
{
 struct zfcp_qdio *VAR_3;

 VAR_3 = FUNC_1(sizeof(struct zfcp_qdio), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_3->adapter = VAR_2;

 if (FUNC_3(VAR_3)) {
  FUNC_0(VAR_3);
  return -VAR_0;
 }

 FUNC_2(&VAR_3->req_q_lock);
 FUNC_2(&VAR_3->stat_lock);

 VAR_2->qdio = VAR_3;
 return 0;
}
