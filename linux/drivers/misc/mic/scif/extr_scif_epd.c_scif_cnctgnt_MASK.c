
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int port; int node; } ;
struct scifmsg {scalar_t__* payload; TYPE_2__ src; } ;
struct TYPE_6__ {scalar_t__ gnt_pld; } ;
struct TYPE_4__ {int port; int node; } ;
struct scif_endpt {scalar_t__ state; int lock; int conwq; scalar_t__ remote_ep; TYPE_3__ qp_info; TYPE_1__ peer; } ;
struct scif_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct scif_dev *VAR_2, struct scifmsg *VAR_3)
{
 struct scif_endpt *VAR_4 = (struct scif_endpt *)VAR_3->payload[0];

 FUNC_0(&VAR_4->lock);
 if (VAR_0 == VAR_4->state) {
  VAR_4->peer.node = VAR_3->src.node;
  VAR_4->peer.port = VAR_3->src.port;
  VAR_4->qp_info.gnt_pld = VAR_3->payload[1];
  VAR_4->remote_ep = VAR_3->payload[2];
  VAR_4->state = VAR_1;

  FUNC_2(&VAR_4->conwq);
 }
 FUNC_1(&VAR_4->lock);
}
