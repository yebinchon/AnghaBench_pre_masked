
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct gfar_private {int device_flags; struct net_device* ndev; } ;
struct gfar_priv_grp {struct gfar_private* priv; } ;
struct TYPE_2__ {int irq; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct gfar_priv_grp*) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_2 (struct gfar_priv_grp*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct gfar_private*,int ,struct net_device*,char*,int ) ;
 int FUNC_4 (int ,int ,int ,int ,struct gfar_priv_grp*) ;

__attribute__((used)) static int FUNC_5(struct gfar_priv_grp *VAR_9)
{
 struct gfar_private *VAR_10 = VAR_9->priv;
 struct net_device *VAR_11 = VAR_10->ndev;
 int VAR_12;




 if (VAR_10->device_flags & VAR_1) {



  VAR_12 = FUNC_4(FUNC_2(VAR_9, VAR_0)->irq, VAR_4, 0,
      FUNC_2(VAR_9, VAR_0)->name, VAR_9);
  if (VAR_12 < 0) {
   FUNC_3(VAR_10, VAR_8, VAR_11, "Can't get IRQ %d\n",
      FUNC_2(VAR_9, VAR_0)->irq);

   goto err_irq_fail;
  }
  FUNC_0(FUNC_2(VAR_9, VAR_0)->irq);

  VAR_12 = FUNC_4(FUNC_2(VAR_9, VAR_3)->irq, VAR_7, 0,
      FUNC_2(VAR_9, VAR_3)->name, VAR_9);
  if (VAR_12 < 0) {
   FUNC_3(VAR_10, VAR_8, VAR_11, "Can't get IRQ %d\n",
      FUNC_2(VAR_9, VAR_3)->irq);
   goto tx_irq_fail;
  }
  VAR_12 = FUNC_4(FUNC_2(VAR_9, VAR_2)->irq, VAR_6, 0,
      FUNC_2(VAR_9, VAR_2)->name, VAR_9);
  if (VAR_12 < 0) {
   FUNC_3(VAR_10, VAR_8, VAR_11, "Can't get IRQ %d\n",
      FUNC_2(VAR_9, VAR_2)->irq);
   goto rx_irq_fail;
  }
  FUNC_0(FUNC_2(VAR_9, VAR_2)->irq);

 } else {
  VAR_12 = FUNC_4(FUNC_2(VAR_9, VAR_3)->irq, VAR_5, 0,
      FUNC_2(VAR_9, VAR_3)->name, VAR_9);
  if (VAR_12 < 0) {
   FUNC_3(VAR_10, VAR_8, VAR_11, "Can't get IRQ %d\n",
      FUNC_2(VAR_9, VAR_3)->irq);
   goto err_irq_fail;
  }
  FUNC_0(FUNC_2(VAR_9, VAR_3)->irq);
 }

 return 0;

rx_irq_fail:
 FUNC_1(FUNC_2(VAR_9, VAR_3)->irq, VAR_9);
tx_irq_fail:
 FUNC_1(FUNC_2(VAR_9, VAR_0)->irq, VAR_9);
err_irq_fail:
 return VAR_12;

}
