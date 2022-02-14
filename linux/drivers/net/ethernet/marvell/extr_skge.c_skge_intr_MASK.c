
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct skge_port {int napi; } ;
struct skge_hw {int intr_mask; int hw_lock; TYPE_2__** dev; int phy_task; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int rx_over_errors; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int *) ;
 struct skge_port* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct skge_hw*) ;
 int FUNC_4 (struct skge_hw*,int) ;
 int FUNC_5 (struct skge_hw*,int ) ;
 int FUNC_6 (struct skge_hw*,int ,int ) ;
 int FUNC_7 (struct skge_hw*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_19, void *VAR_20)
{
 struct skge_hw *VAR_21 = VAR_20;
 u32 VAR_22;
 int VAR_23 = 0;

 FUNC_8(&VAR_21->hw_lock);

 VAR_22 = FUNC_5(VAR_21, VAR_1);
 if (VAR_22 == 0 || VAR_22 == ~0)
  goto out;

 VAR_23 = 1;
 VAR_22 &= VAR_21->intr_mask;
 if (VAR_22 & VAR_3) {
  VAR_21->intr_mask &= ~VAR_3;
  FUNC_10(&VAR_21->phy_task);
 }

 if (VAR_22 & (VAR_13|VAR_11)) {
  struct skge_port *VAR_24 = FUNC_2(VAR_21->dev[0]);
  VAR_21->intr_mask &= ~(VAR_13|VAR_11);
  FUNC_1(&VAR_24->napi);
 }

 if (VAR_22 & VAR_9)
  FUNC_6(VAR_21, VAR_2, VAR_17);

 if (VAR_22 & VAR_7) {
  ++VAR_21->dev[0]->stats.rx_over_errors;
  FUNC_6(VAR_21, VAR_2, VAR_15);
 }


 if (VAR_22 & VAR_5)
  FUNC_4(VAR_21, 0);

 if (VAR_21->dev[1]) {
  struct skge_port *VAR_25 = FUNC_2(VAR_21->dev[1]);

  if (VAR_22 & (VAR_14|VAR_12)) {
   VAR_21->intr_mask &= ~(VAR_14|VAR_12);
   FUNC_1(&VAR_25->napi);
  }

  if (VAR_22 & VAR_8) {
   ++VAR_21->dev[1]->stats.rx_over_errors;
   FUNC_6(VAR_21, VAR_2, VAR_16);
  }

  if (VAR_22 & VAR_10)
   FUNC_6(VAR_21, VAR_2, VAR_18);

  if (VAR_22 & VAR_6)
   FUNC_4(VAR_21, 1);
 }

 if (VAR_22 & VAR_4)
  FUNC_3(VAR_21);
out:
 FUNC_7(VAR_21, VAR_0, VAR_21->intr_mask);
 FUNC_5(VAR_21, VAR_0);
 FUNC_9(&VAR_21->hw_lock);

 return FUNC_0(VAR_23);
}
