
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; } ;
struct cc770_priv {int* obj_flags; int (* post_irq ) (struct cc770_priv*) ;int (* pre_irq ) (struct cc770_priv*) ;TYPE_1__ can; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cc770_priv*,int ) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*,int) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int) ;
 int VAR_7 ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct net_device*,char*,int) ;
 int FUNC_7 (struct net_device*,char*,int) ;
 struct cc770_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct cc770_priv*) ;
 int FUNC_10 (struct cc770_priv*) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_8, void *VAR_9)
{
 struct net_device *VAR_10 = (struct net_device *)VAR_9;
 struct cc770_priv *VAR_11 = FUNC_8(VAR_10);
 u8 VAR_12;
 int VAR_13, VAR_14 = 0;


 if (VAR_11->can.state == VAR_0)
  return VAR_6;

 if (VAR_11->pre_irq)
  VAR_11->pre_irq(VAR_11);

 while (VAR_14 < VAR_1) {

  VAR_12 = FUNC_0(VAR_11, VAR_7);
  if (!VAR_12)
   break;
  VAR_14++;

  if (VAR_12 == 1) {

   if (FUNC_3(VAR_10))
    break;
  } else {
   VAR_13 = FUNC_5(VAR_12);

   if (VAR_13 >= VAR_4) {
    FUNC_7(VAR_10, "Unexpected interrupt id %d\n",
        VAR_12);
    continue;
   }

   if (VAR_11->obj_flags[VAR_13] & VAR_2)
    FUNC_1(VAR_10, VAR_13);
   else if (VAR_11->obj_flags[VAR_13] & VAR_3)
    FUNC_2(VAR_10, VAR_13);
   else
    FUNC_4(VAR_10, VAR_13);
  }
 }

 if (VAR_11->post_irq)
  VAR_11->post_irq(VAR_11);

 if (VAR_14 >= VAR_1)
  FUNC_6(VAR_10, "%d messages handled in ISR", VAR_14);

 return (VAR_14) ? VAR_5 : VAR_6;
}
