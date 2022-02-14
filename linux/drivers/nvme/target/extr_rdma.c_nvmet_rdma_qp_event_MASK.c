
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_rdma_queue {int cm_id; } ;
struct ib_event {int event; } ;



 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct ib_event *VAR_0, void *VAR_1)
{
 struct nvmet_rdma_queue *VAR_2 = VAR_1;

 switch (VAR_0->event) {
 case 128:
  FUNC_2(VAR_2->cm_id, VAR_0->event);
  break;
 default:
  FUNC_1("received IB QP event: %s (%d)\n",
         FUNC_0(VAR_0->event), VAR_0->event);
  break;
 }
}
