
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct jme_adapter {int rxclean_task; int rxempty_task; int rx_empty; int flags; int txclean_task; int pcc_task; int linkch_task; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct jme_adapter*) ;
 int FUNC_1 (struct jme_adapter*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct jme_adapter*) ;
 int FUNC_4 (struct jme_adapter*,int ,int) ;
 int FUNC_5 (struct jme_adapter*,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static void
FUNC_10(struct jme_adapter *VAR_15, u32 VAR_16)
{



 FUNC_5(VAR_15, VAR_12, VAR_0);

 if (VAR_16 & (VAR_1 | VAR_8)) {




  FUNC_4(VAR_15, VAR_14, VAR_16);
  FUNC_8(&VAR_15->linkch_task);
  goto out_reenable;
 }

 if (VAR_16 & VAR_9) {
  FUNC_4(VAR_15, VAR_14, VAR_9);
  FUNC_8(&VAR_15->pcc_task);
 }

 if (VAR_16 & (VAR_5 | VAR_4)) {
  FUNC_4(VAR_15, VAR_14, VAR_5 | VAR_4 | VAR_10);
  FUNC_8(&VAR_15->txclean_task);
 }

 if ((VAR_16 & (VAR_3 | VAR_2 | VAR_7))) {
  FUNC_4(VAR_15, VAR_14, (VAR_16 & (VAR_3 |
           VAR_2 |
           VAR_7)) |
     VAR_6);
 }

 if (FUNC_9(VAR_11, &VAR_15->flags)) {
  if (VAR_16 & VAR_7)
   FUNC_2(&VAR_15->rx_empty);

  if ((VAR_16 & (VAR_3 | VAR_2 | VAR_7))) {
   if (FUNC_6(FUNC_1(VAR_15))) {
    FUNC_3(VAR_15);
    FUNC_0(VAR_15);
   }
  }
 } else {
  if (VAR_16 & VAR_7) {
   FUNC_2(&VAR_15->rx_empty);
   FUNC_7(&VAR_15->rxempty_task);
  } else if (VAR_16 & (VAR_3 | VAR_2)) {
   FUNC_7(&VAR_15->rxclean_task);
  }
 }

out_reenable:



 FUNC_5(VAR_15, VAR_13, VAR_0);
}
