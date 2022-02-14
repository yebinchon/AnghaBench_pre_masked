
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_qdio {TYPE_1__* adapter; int req_q_full; int req_q_lock; int req_q_wq; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 long FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (TYPE_1__*,int ,char*) ;
 int FUNC_4 (struct zfcp_qdio*) ;

int FUNC_5(struct zfcp_qdio *VAR_3)
{
 long VAR_4;

 VAR_4 = FUNC_2(VAR_3->req_q_wq,
         FUNC_4(VAR_3), VAR_3->req_q_lock, 5 * VAR_1);

 if (!(FUNC_1(&VAR_3->adapter->status) & VAR_2))
  return -VAR_0;

 if (VAR_4 > 0)
  return 0;

 if (!VAR_4) {
  FUNC_0(&VAR_3->req_q_full);

  FUNC_3(VAR_3->adapter, 0, "qdsbg_1");
 }

 return -VAR_0;
}
