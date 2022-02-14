
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_recv_context {struct qlcnic_host_tx_ring* sds_rings; } ;
struct qlcnic_host_tx_ring {int name; int irq; } ;
struct qlcnic_host_sds_ring {int name; int irq; } ;
struct qlcnic_adapter {int flags; int drv_sds_rings; int drv_tx_rings; struct qlcnic_host_tx_ring* tx_ring; TYPE_1__* ahw; int irq; struct qlcnic_recv_context* recv_ctx; struct net_device* netdev; } ;
struct net_device {char* name; int irq; } ;
typedef int irq_handler_t ;
struct TYPE_2__ {scalar_t__ diag_test; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct qlcnic_adapter*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int ,int ,unsigned long,int ,struct qlcnic_host_tx_ring*) ;
 int FUNC_5 (int ,int,char*,...) ;

__attribute__((used)) static int
FUNC_6(struct qlcnic_adapter *VAR_13)
{
 irq_handler_t VAR_14;
 struct qlcnic_host_sds_ring *VAR_15;
 struct qlcnic_host_tx_ring *VAR_16;
 int VAR_17, VAR_18, VAR_19;

 unsigned long VAR_20 = 0;
 struct net_device *VAR_21 = VAR_13->netdev;
 struct qlcnic_recv_context *VAR_22 = VAR_13->recv_ctx;

 if (VAR_13->ahw->diag_test == VAR_1) {
  if (FUNC_1(VAR_13))
   VAR_14 = VAR_12;
  else
   VAR_14 = VAR_7;
  if (!FUNC_0(VAR_13))
   VAR_20 |= VAR_0;

 } else {
  if (VAR_13->flags & VAR_3)
   VAR_14 = VAR_10;
  else if (VAR_13->flags & VAR_4)
   VAR_14 = VAR_9;
  else {
   VAR_20 |= VAR_0;
   if (FUNC_1(VAR_13))
    VAR_14 = VAR_8;
   else
    VAR_14 = VAR_6;
  }
 }
 VAR_13->irq = VAR_21->irq;

 if (VAR_13->ahw->diag_test != VAR_2) {
  if (FUNC_1(VAR_13) ||
      (FUNC_2(VAR_13) &&
       (VAR_13->flags & VAR_3))) {
   VAR_19 = VAR_13->drv_sds_rings;
   for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++) {
    VAR_15 = &VAR_22->sds_rings[VAR_18];
    if (FUNC_1(VAR_13) &&
        !FUNC_3(VAR_13) &&
        (VAR_18 == (VAR_19 - 1))) {
     if (!(VAR_13->flags &
           VAR_3))
      FUNC_5(VAR_15->name,
        sizeof(VAR_15->name),
        "qlcnic");
     else
      FUNC_5(VAR_15->name,
        sizeof(VAR_15->name),
        "%s-tx-0-rx-%d",
        VAR_21->name, VAR_18);
    } else {
     FUNC_5(VAR_15->name,
       sizeof(VAR_15->name),
       "%s-rx-%d",
       VAR_21->name, VAR_18);
    }
    VAR_17 = FUNC_4(VAR_15->irq, VAR_14, VAR_20,
        VAR_15->name, VAR_15);
    if (VAR_17)
     return VAR_17;
   }
  }
  if ((FUNC_1(VAR_13) &&
       FUNC_3(VAR_13)) ||
      (FUNC_2(VAR_13) &&
       (VAR_13->flags & VAR_3) &&
       !(VAR_13->flags & VAR_5))) {
   VAR_14 = VAR_11;
   for (VAR_18 = 0; VAR_18 < VAR_13->drv_tx_rings;
        VAR_18++) {
    VAR_16 = &VAR_13->tx_ring[VAR_18];
    FUNC_5(VAR_16->name, sizeof(VAR_16->name),
      "%s-tx-%d", VAR_21->name, VAR_18);
    VAR_17 = FUNC_4(VAR_16->irq, VAR_14, VAR_20,
        VAR_16->name, VAR_16);
    if (VAR_17)
     return VAR_17;
   }
  }
 }
 return 0;
}
