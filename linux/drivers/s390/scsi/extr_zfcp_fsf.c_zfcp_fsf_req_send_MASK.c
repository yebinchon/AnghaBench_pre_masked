
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_qdio {int req_q_free; } ;
struct TYPE_2__ {int qdio_outb_usage; } ;
struct zfcp_fsf_req {int req_id; int timer; TYPE_1__ qdio_req; int issued; struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {int req_no; int fsf_req_seq_no; int req_list; struct zfcp_qdio* qdio; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct zfcp_adapter*,int ,char*) ;
 int FUNC_4 (struct zfcp_fsf_req*) ;
 scalar_t__ FUNC_5 (struct zfcp_qdio*,TYPE_1__*) ;
 int FUNC_6 (int ,struct zfcp_fsf_req*) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int FUNC_8(struct zfcp_fsf_req *VAR_1)
{
 const bool VAR_2 = FUNC_4(VAR_1);
 struct zfcp_adapter *VAR_3 = VAR_1->adapter;
 struct zfcp_qdio *VAR_4 = VAR_3->qdio;
 int VAR_5 = VAR_1->req_id;

 FUNC_6(VAR_3->req_list, VAR_1);

 VAR_1->qdio_req.qdio_outb_usage = FUNC_0(&VAR_4->req_q_free);
 VAR_1->issued = FUNC_2();
 if (FUNC_5(VAR_4, &VAR_1->qdio_req)) {
  FUNC_1(&VAR_1->timer);

  FUNC_7(VAR_3->req_list, VAR_5);
  FUNC_3(VAR_3, 0, "fsrs__1");
  return -VAR_0;
 }
 if (!VAR_2)
  VAR_3->fsf_req_seq_no++;
 VAR_3->req_no++;

 return 0;
}
