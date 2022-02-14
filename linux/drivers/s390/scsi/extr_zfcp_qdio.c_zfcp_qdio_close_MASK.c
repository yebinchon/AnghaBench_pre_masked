
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_qdio {int req_q_idx; int req_q_free; int req_q; int req_q_wq; int req_q_lock; struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {int ccw_device; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int,int) ;

void FUNC_8(struct zfcp_qdio *VAR_3)
{
 struct zfcp_adapter *VAR_4 = VAR_3->adapter;
 int VAR_5, VAR_6;

 if (!(FUNC_1(&VAR_4->status) & VAR_2))
  return;


 FUNC_4(&VAR_3->req_q_lock);
 FUNC_0(VAR_2, &VAR_4->status);
 FUNC_5(&VAR_3->req_q_lock);

 FUNC_6(&VAR_3->req_q_wq);

 FUNC_3(VAR_4->ccw_device, VAR_0);


 VAR_6 = FUNC_1(&VAR_3->req_q_free);
 if (VAR_6 < VAR_1) {
  VAR_5 = (VAR_3->req_q_idx + VAR_6) % VAR_1;
  VAR_6 = VAR_1 - VAR_6;
  FUNC_7(VAR_3->req_q, VAR_5, VAR_6);
 }
 VAR_3->req_q_idx = 0;
 FUNC_2(&VAR_3->req_q_free, 0);
}
