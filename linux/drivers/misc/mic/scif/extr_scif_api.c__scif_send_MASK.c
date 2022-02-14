
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scifmsg {int * payload; int uop; int src; } ;
struct scif_qp {int outbound_q; } ;
struct TYPE_2__ {struct scif_qp* qp; } ;
struct scif_endpt {scalar_t__ state; int lock; int sendwq; int remote_dev; int remote_ep; int port; TYPE_1__ qp_info; } ;
typedef scalar_t__ scif_epd_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,struct scifmsg*) ;
 int FUNC_1 () ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,void*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int FUNC_9(scif_epd_t VAR_7, void *VAR_8, int VAR_9, int VAR_10)
{
 struct scif_endpt *VAR_11 = (struct scif_endpt *)VAR_7;
 struct scifmsg VAR_12;
 int VAR_13 = 0, VAR_14 = 0, VAR_15;
 int VAR_16 = 0;
 struct scif_qp *VAR_17 = VAR_11->qp_info.qp;

 if (VAR_10 & VAR_6)
  FUNC_1();

 FUNC_6(&VAR_11->lock);
 while (VAR_14 != VAR_9 && VAR_2 == VAR_11->state) {
  VAR_15 = FUNC_4(&VAR_17->outbound_q);
  if (VAR_15) {

   VAR_13 = FUNC_2(VAR_9 - VAR_14, VAR_15);
   VAR_16 = FUNC_5(&VAR_17->outbound_q, VAR_8,
         VAR_13);
   if (VAR_16 < 0)
    break;

   FUNC_3(&VAR_17->outbound_q);




   VAR_12.src = VAR_11->port;
   VAR_12.uop = VAR_4;
   VAR_12.payload[0] = VAR_11->remote_ep;
   VAR_16 = FUNC_0(VAR_11->remote_dev, &VAR_12);
   if (VAR_16)
    break;
   VAR_14 += VAR_13;
   VAR_8 = VAR_8 + VAR_13;
   continue;
  }
  VAR_13 = FUNC_2(VAR_9 - VAR_14, VAR_5 - 1);

  if (!(VAR_10 & VAR_6))
   break;

  FUNC_7(&VAR_11->lock);

  VAR_16 =
  FUNC_8(VAR_11->sendwq,
      (VAR_2 != VAR_11->state) ||
      (FUNC_4(&VAR_17->outbound_q) >=
      VAR_13));
  FUNC_6(&VAR_11->lock);
  if (VAR_16)
   break;
 }
 if (VAR_14)
  VAR_16 = VAR_14;
 else if (!VAR_16 && VAR_2 != VAR_11->state)
  VAR_16 = VAR_3 == VAR_11->state ?
   -VAR_0 : -VAR_1;
 FUNC_7(&VAR_11->lock);
 return VAR_16;
}
