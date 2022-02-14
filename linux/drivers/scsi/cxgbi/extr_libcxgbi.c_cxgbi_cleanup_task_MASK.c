
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_tcp_task {struct cxgbi_task_data* dd_data; } ;
struct iscsi_task {int hdr_itt; int * hdr; int sc; struct iscsi_tcp_task* dd_data; } ;
struct cxgbi_task_data {int * skb; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct cxgbi_task_data* FUNC_1 (struct iscsi_task*) ;
 int FUNC_2 (struct iscsi_task*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,char*,struct iscsi_task*,int *,int ) ;
 int FUNC_5 (struct cxgbi_task_data*,int ,int) ;
 int FUNC_6 (char*,struct iscsi_task*,int ,struct iscsi_tcp_task*,struct cxgbi_task_data*,struct cxgbi_task_data*) ;
 int FUNC_7 (struct iscsi_task*,int ) ;

void FUNC_8(struct iscsi_task *VAR_1)
{
 struct iscsi_tcp_task *VAR_2 = VAR_1->dd_data;
 struct cxgbi_task_data *VAR_3 = FUNC_1(VAR_1);

 if (!VAR_2 || !VAR_3 || (VAR_2->dd_data != VAR_3)) {
  FUNC_6("task 0x%p,0x%p, tcp_task 0x%p, tdata 0x%p/0x%p.\n",
   VAR_1, VAR_1->sc, VAR_2,
   VAR_2 ? VAR_2->dd_data : ((void*)0), VAR_3);
  return;
 }

 FUNC_4(1 << VAR_0,
  "task 0x%p, skb 0x%p, itt 0x%x.\n",
  VAR_1, VAR_3->skb, VAR_1->hdr_itt);

 VAR_2->dd_data = ((void*)0);

 if (!VAR_1->sc)
  FUNC_3(VAR_1->hdr);
 VAR_1->hdr = ((void*)0);


 if (VAR_3->skb) {
  FUNC_0(VAR_3->skb);
  VAR_3->skb = ((void*)0);
 }

 FUNC_7(VAR_1, VAR_1->hdr_itt);
 FUNC_5(VAR_3, 0, sizeof(*VAR_3));

 FUNC_2(VAR_1);
}
