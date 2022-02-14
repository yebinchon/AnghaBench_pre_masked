
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scifmsg {int * payload; int uop; int src; } ;
struct scif_qp {int inbound_q; } ;
struct TYPE_2__ {struct scif_qp* qp; } ;
struct scif_endpt {scalar_t__ state; int lock; int recvwq; int remote_dev; int remote_ep; int port; TYPE_1__ qp_info; } ;
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
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,void*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int FUNC_9(scif_epd_t VAR_7, void *VAR_8, int VAR_9, int VAR_10)
{
 int VAR_11;
 struct scif_endpt *VAR_12 = (struct scif_endpt *)VAR_7;
 struct scifmsg VAR_13;
 int VAR_14 = 0, VAR_15 = VAR_9, VAR_16;
 int VAR_17 = 0;
 struct scif_qp *VAR_18 = VAR_12->qp_info.qp;

 if (VAR_10 & VAR_6)
  FUNC_1();
 FUNC_6(&VAR_12->lock);
 while (VAR_15 && (VAR_2 == VAR_12->state ||
     VAR_3 == VAR_12->state)) {
  VAR_16 = FUNC_3(&VAR_18->inbound_q, VAR_15);
  if (VAR_16) {





   VAR_14 = FUNC_2(VAR_15, VAR_16);
   VAR_11 = FUNC_4(&VAR_18->inbound_q,
           VAR_8, VAR_14);
   if (VAR_12->state == VAR_2) {






    FUNC_5(&VAR_18->inbound_q);





    VAR_13.src = VAR_12->port;
    VAR_13.uop = VAR_4;
    VAR_13.payload[0] = VAR_12->remote_ep;
    VAR_17 = FUNC_0(VAR_12->remote_dev,
       &VAR_13);
    if (VAR_17)
     break;
   }
   VAR_15 -= VAR_14;
   VAR_8 = VAR_8 + VAR_14;
   continue;
  }




  if (VAR_12->state == VAR_3)
   break;




  if (!(VAR_10 & VAR_6))
   break;
  VAR_14 = FUNC_2(VAR_15, VAR_5 - 1);
  FUNC_7(&VAR_12->lock);




  VAR_17 =
  FUNC_8(VAR_12->recvwq,
      VAR_2 != VAR_12->state ||
      FUNC_3(&VAR_18->inbound_q,
             VAR_14)
      >= VAR_14);
  FUNC_6(&VAR_12->lock);
  if (VAR_17)
   break;
 }
 if (VAR_9 - VAR_15)
  VAR_17 = VAR_9 - VAR_15;
 else if (!VAR_17 && VAR_12->state != VAR_2)
  VAR_17 = VAR_12->state == VAR_3 ?
   -VAR_0 : -VAR_1;
 FUNC_7(&VAR_12->lock);
 return VAR_17;
}
