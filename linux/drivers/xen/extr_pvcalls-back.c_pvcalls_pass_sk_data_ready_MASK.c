
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int id; } ;
struct TYPE_9__ {TYPE_1__ poll; } ;
struct xen_pvcalls_response {scalar_t__ cmd; scalar_t__ ret; TYPE_2__ u; int req_id; } ;
struct TYPE_10__ {int id; } ;
struct TYPE_11__ {TYPE_3__ poll; } ;
struct TYPE_12__ {scalar_t__ cmd; TYPE_4__ u; int req_id; } ;
struct sockpass_mapping {int register_work; int wq; int copy_lock; struct pvcalls_fedata* fedata; TYPE_5__ reqcopy; } ;
struct sock {struct sockpass_mapping* sk_user_data; } ;
struct TYPE_13__ {int rsp_prod_pvt; } ;
struct pvcalls_fedata {int irq; TYPE_6__ ring; } ;


 scalar_t__ VAR_0 ;
 struct xen_pvcalls_response* FUNC_0 (TYPE_6__*,int ) ;
 int FUNC_1 (TYPE_6__*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_1)
{
 struct sockpass_mapping *VAR_2 = VAR_1->sk_user_data;
 struct pvcalls_fedata *VAR_3;
 struct xen_pvcalls_response *VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 if (VAR_2 == ((void*)0))
  return;

 VAR_3 = VAR_2->fedata;
 FUNC_4(&VAR_2->copy_lock, VAR_5);
 if (VAR_2->reqcopy.cmd == VAR_0) {
  VAR_4 = FUNC_0(&VAR_3->ring,
     VAR_3->ring.rsp_prod_pvt++);
  VAR_4->req_id = VAR_2->reqcopy.req_id;
  VAR_4->u.poll.id = VAR_2->reqcopy.u.poll.id;
  VAR_4->cmd = VAR_2->reqcopy.cmd;
  VAR_4->ret = 0;

  VAR_2->reqcopy.cmd = 0;
  FUNC_5(&VAR_2->copy_lock, VAR_5);

  FUNC_1(&VAR_3->ring, VAR_6);
  if (VAR_6)
   FUNC_2(VAR_2->fedata->irq);
 } else {
  FUNC_5(&VAR_2->copy_lock, VAR_5);
  FUNC_3(VAR_2->wq, &VAR_2->register_work);
 }
}
