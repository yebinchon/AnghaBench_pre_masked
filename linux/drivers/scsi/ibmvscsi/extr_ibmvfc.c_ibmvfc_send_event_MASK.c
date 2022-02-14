
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u64 ;
struct ibmvfc_host {int dev; int sent; } ;
struct TYPE_13__ {scalar_t__ expires; } ;
struct TYPE_10__ {scalar_t__ format; } ;
struct TYPE_11__ {int status; void* tag; } ;
struct TYPE_9__ {void* tag; } ;
struct TYPE_12__ {TYPE_3__ mad_common; TYPE_1__ cmd; } ;
struct ibmvfc_event {int (* done ) (struct ibmvfc_event*) ;TYPE_4__* xfer_iu; TYPE_6__* cmnd; TYPE_5__ timer; int queue; TYPE_2__ crq; TYPE_4__ iu; } ;
typedef int __be64 ;
struct TYPE_14__ {int result; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct ibmvfc_event*) ;
 int FUNC_9 (struct ibmvfc_event*) ;
 int FUNC_10 (struct ibmvfc_host*,int ,int ) ;
 int VAR_7 ;
 int FUNC_11 (struct ibmvfc_event*) ;
 scalar_t__ VAR_8 ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 (TYPE_6__*) ;
 int FUNC_17 (struct ibmvfc_event*) ;
 int FUNC_18 (TYPE_5__*,int ,int ) ;

__attribute__((used)) static int FUNC_19(struct ibmvfc_event *VAR_9,
        struct ibmvfc_host *VAR_10, unsigned long VAR_11)
{
 __be64 *VAR_12 = (__be64 *) &VAR_9->crq;
 int VAR_13;


 *VAR_9->xfer_iu = VAR_9->iu;
 if (VAR_9->crq.format == VAR_3)
  VAR_9->xfer_iu->cmd.tag = FUNC_4((u64)VAR_9);
 else if (VAR_9->crq.format == VAR_5)
  VAR_9->xfer_iu->mad_common.tag = FUNC_4((u64)VAR_9);
 else
  FUNC_0();

 FUNC_12(&VAR_9->queue, &VAR_10->sent);
 FUNC_18(&VAR_9->timer, VAR_7, 0);

 if (VAR_11) {
  VAR_9->timer.expires = VAR_8 + (VAR_11 * VAR_1);
  FUNC_1(&VAR_9->timer);
 }

 FUNC_14();

 if ((VAR_13 = FUNC_10(VAR_10, FUNC_2(VAR_12[0]),
      FUNC_2(VAR_12[1])))) {
  FUNC_13(&VAR_9->queue);
  FUNC_5(&VAR_9->timer);






  if (VAR_13 == VAR_2) {
   if (FUNC_15())
    FUNC_7(VAR_10->dev, "Send warning. Receive queue closed, will retry.\n");
   if (VAR_9->cmnd)
    FUNC_16(VAR_9->cmnd);
   FUNC_8(VAR_9);
   return VAR_6;
  }

  FUNC_6(VAR_10->dev, "Send error (rc=%d)\n", VAR_13);
  if (VAR_9->cmnd) {
   VAR_9->cmnd->result = VAR_0 << 16;
   VAR_9->done = FUNC_9;
  } else
   VAR_9->xfer_iu->mad_common.status = FUNC_3(VAR_4);

  VAR_9->done(VAR_9);
 } else
  FUNC_11(VAR_9);

 return 0;
}
