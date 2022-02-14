
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint ;
typedef int u32 ;
struct bnad {size_t num_tx; size_t num_txq_per_tx; int netdev; TYPE_1__* tx_info; int run_flags; } ;
struct bna_tcb {int flags; int id; } ;
typedef enum bna_link_status { ____Placeholder_bna_link_status } bna_link_status ;
struct TYPE_2__ {struct bna_tcb** tcb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnad*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int VAR_5 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

void
FUNC_10(struct bnad *VAR_8,
   enum bna_link_status VAR_9)
{
 bool VAR_10 = 0;

 VAR_10 = (VAR_9 == VAR_3) || (VAR_9 == VAR_2);

 if (VAR_9 == VAR_2) {
  if (!FUNC_9(VAR_0, &VAR_8->run_flags))
   FUNC_0(VAR_8, VAR_4);
  FUNC_8(VAR_0, &VAR_8->run_flags);
 } else {
  if (FUNC_9(VAR_0, &VAR_8->run_flags))
   FUNC_0(VAR_8, VAR_4);
  FUNC_1(VAR_0, &VAR_8->run_flags);
 }

 if (VAR_10) {
  if (!FUNC_4(VAR_8->netdev)) {
   uint VAR_11, VAR_12;
   FUNC_2(VAR_8->netdev, "link up\n");
   FUNC_5(VAR_8->netdev);
   FUNC_0(VAR_8, VAR_5);
   for (VAR_11 = 0; VAR_11 < VAR_8->num_tx; VAR_11++) {
    for (VAR_12 = 0; VAR_12 < VAR_8->num_txq_per_tx;
          VAR_12++) {
     struct bna_tcb *VAR_13 =
     VAR_8->tx_info[VAR_11].tcb[VAR_12];
     u32 VAR_14;
     if (!VAR_13)
      continue;

     VAR_14 = VAR_13->id;

     if (FUNC_9(VAR_1,
           &VAR_13->flags)) {



      FUNC_7(
        VAR_8->netdev,
        VAR_14);
      FUNC_0(VAR_8,
       VAR_7);
     } else {
      FUNC_6(
        VAR_8->netdev,
        VAR_14);
      FUNC_0(VAR_8,
       VAR_6);
     }
    }
   }
  }
 } else {
  if (FUNC_4(VAR_8->netdev)) {
   FUNC_2(VAR_8->netdev, "link down\n");
   FUNC_3(VAR_8->netdev);
   FUNC_0(VAR_8, VAR_5);
  }
 }
}
