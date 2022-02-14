
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct zfcp_qdio_req {int sbal_first; scalar_t__ sbal_number; } ;
struct zfcp_qdio {int req_q_idx; int req_q_free; int req_q; TYPE_1__* adapter; int stat_lock; } ;
struct TYPE_2__ {int ccw_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int ,int ,int ,int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct zfcp_qdio*) ;
 int FUNC_6 (int ,int ,scalar_t__) ;

int FUNC_7(struct zfcp_qdio *VAR_2, struct zfcp_qdio_req *VAR_3)
{
 int VAR_4;
 u8 VAR_5 = VAR_3->sbal_number;

 FUNC_2(&VAR_2->stat_lock);
 FUNC_5(VAR_2);
 FUNC_3(&VAR_2->stat_lock);

 VAR_4 = FUNC_1(VAR_2->adapter->ccw_device, VAR_0, 0,
    VAR_3->sbal_first, VAR_5);

 if (FUNC_4(VAR_4)) {
  FUNC_6(VAR_2->req_q, VAR_3->sbal_first,
         VAR_5);
  return VAR_4;
 }


 FUNC_0(VAR_5, &VAR_2->req_q_free);
 VAR_2->req_q_idx += VAR_5;
 VAR_2->req_q_idx %= VAR_1;

 return 0;
}
