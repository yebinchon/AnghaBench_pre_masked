
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct TYPE_5__ {int conn_and_cmd_data; int type; } ;
struct eth_spe {TYPE_1__ hdr; } ;
struct TYPE_8__ {int max_kwqe_pending; } ;
struct bnx2x {int cnic_spq_pending; int spq_lock; struct eth_spe* cnic_kwq_cons; struct eth_spe* cnic_kwq; struct eth_spe* cnic_kwq_last; scalar_t__ cnic_kwq_pending; TYPE_4__ cnic_eth_dev; int eq_spq_left; int cq_spq_left; TYPE_3__* context; int panic; } ;
struct TYPE_7__ {TYPE_2__* vcxt; } ;
struct TYPE_6__ {int eth; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (struct bnx2x*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int,scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (struct bnx2x*,int *,int) ;
 struct eth_spe* FUNC_8 (struct bnx2x*) ;
 int FUNC_9 (struct bnx2x*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(struct bnx2x *VAR_10, int VAR_11)
{
 struct eth_spe *VAR_12;
 int VAR_13, VAR_14;






 FUNC_12(&VAR_10->spq_lock);
 FUNC_2(VAR_10->cnic_spq_pending < VAR_11);
 VAR_10->cnic_spq_pending -= VAR_11;

 for (; VAR_10->cnic_kwq_pending; VAR_10->cnic_kwq_pending--) {
  u16 VAR_15 = (FUNC_10(VAR_10->cnic_kwq_cons->hdr.type)
    & VAR_8) >>
    VAR_9;
  u8 VAR_16 = (FUNC_11(VAR_10->cnic_kwq_cons->hdr.conn_and_cmd_data)
    >> VAR_7) & 0xff;




  if (VAR_15 == VAR_1) {
   if (VAR_16 == VAR_6) {
    VAR_13 = FUNC_1(VAR_10) /
     VAR_3;
    VAR_14 = FUNC_1(VAR_10) -
     (VAR_13 * VAR_3);
    FUNC_7(VAR_10,
     &VAR_10->context[VAR_13].
        vcxt[VAR_14].eth,
     FUNC_1(VAR_10));
   }
  }







  if (VAR_15 == VAR_1) {
   if (!FUNC_5(&VAR_10->cq_spq_left))
    break;
   else
    FUNC_4(&VAR_10->cq_spq_left);
  } else if (VAR_15 == VAR_5) {
   if (!FUNC_5(&VAR_10->eq_spq_left))
    break;
   else
    FUNC_4(&VAR_10->eq_spq_left);
  } else if ((VAR_15 == VAR_4) ||
      (VAR_15 == VAR_2)) {
   if (VAR_10->cnic_spq_pending >=
       VAR_10->cnic_eth_dev.max_kwqe_pending)
    break;
   else
    VAR_10->cnic_spq_pending++;
  } else {
   FUNC_0("Unknown SPE type: %d\n", VAR_15);
   FUNC_6();
   break;
  }

  VAR_12 = FUNC_8(VAR_10);
  *VAR_12 = *VAR_10->cnic_kwq_cons;

  FUNC_3(VAR_0, "pending on SPQ %d, on KWQ %d count %d\n",
     VAR_10->cnic_spq_pending, VAR_10->cnic_kwq_pending, VAR_11);

  if (VAR_10->cnic_kwq_cons == VAR_10->cnic_kwq_last)
   VAR_10->cnic_kwq_cons = VAR_10->cnic_kwq;
  else
   VAR_10->cnic_kwq_cons++;
 }
 FUNC_9(VAR_10);
 FUNC_13(&VAR_10->spq_lock);
}
