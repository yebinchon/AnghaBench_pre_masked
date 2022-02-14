
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ibmvfc_event {int (* done ) (struct ibmvfc_event*) ;int timer; int queue; TYPE_3__* xfer_iu; TYPE_1__* cmnd; } ;
struct TYPE_5__ {int status; } ;
struct TYPE_6__ {TYPE_2__ mad_common; } ;
struct TYPE_4__ {int result; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ibmvfc_event*) ;
 int FUNC_3 (struct ibmvfc_event*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ibmvfc_event*) ;

__attribute__((used)) static void FUNC_6(struct ibmvfc_event *VAR_1, int VAR_2)
{
 if (VAR_1->cmnd) {
  VAR_1->cmnd->result = (VAR_2 << 16);
  VAR_1->done = FUNC_2;
 } else
  VAR_1->xfer_iu->mad_common.status = FUNC_0(VAR_0);

 FUNC_4(&VAR_1->queue);
 FUNC_1(&VAR_1->timer);
 FUNC_3(VAR_1);
 VAR_1->done(VAR_1);
}
