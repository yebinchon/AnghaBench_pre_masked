
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int length; int addr; int lkey; } ;
struct TYPE_6__ {int done; } ;
struct smbd_response {TYPE_4__ sge; TYPE_2__ cqe; int packet; } ;
struct smbd_connection {TYPE_3__* id; TYPE_1__* pd; int max_receive_size; } ;
struct ib_recv_wr {int num_sge; TYPE_4__* sg_list; int * next; TYPE_2__* wr_cqe; } ;
struct TYPE_7__ {int device; int qp; } ;
struct TYPE_5__ {int local_dma_lkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,struct ib_recv_wr*,int *) ;
 int FUNC_4 (int ,char*,int) ;
 int VAR_3 ;
 int FUNC_5 (struct smbd_connection*) ;

__attribute__((used)) static int FUNC_6(
  struct smbd_connection *VAR_4, struct smbd_response *VAR_5)
{
 struct ib_recv_wr VAR_6;
 int VAR_7 = -VAR_1;

 VAR_5->sge.addr = FUNC_0(
    VAR_4->id->device, VAR_5->packet,
    VAR_4->max_receive_size, VAR_0);
 if (FUNC_1(VAR_4->id->device, VAR_5->sge.addr))
  return VAR_7;

 VAR_5->sge.length = VAR_4->max_receive_size;
 VAR_5->sge.lkey = VAR_4->pd->local_dma_lkey;

 VAR_5->cqe.done = VAR_3;

 VAR_6.wr_cqe = &VAR_5->cqe;
 VAR_6.next = ((void*)0);
 VAR_6.sg_list = &VAR_5->sge;
 VAR_6.num_sge = 1;

 VAR_7 = FUNC_3(VAR_4->id->qp, &VAR_6, ((void*)0));
 if (VAR_7) {
  FUNC_2(VAR_4->id->device, VAR_5->sge.addr,
        VAR_5->sge.length, VAR_0);
  FUNC_5(VAR_4);
  FUNC_4(VAR_2, "ib_post_recv failed rc=%d\n", VAR_7);
 }

 return VAR_7;
}
