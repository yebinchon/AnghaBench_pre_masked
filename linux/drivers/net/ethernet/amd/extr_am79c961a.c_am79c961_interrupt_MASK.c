
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int rx_dropped; } ;
struct net_device {TYPE_1__ stats; int base_addr; } ;
struct dev_priv {int timer; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct net_device*,struct dev_priv*) ;
 int FUNC_2 (struct net_device*,struct dev_priv*) ;
 int VAR_8 ;
 int FUNC_3 (int *,int ) ;
 struct dev_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static irqreturn_t
FUNC_7(int VAR_9, void *VAR_10)
{
 struct net_device *VAR_11 = (struct net_device *)VAR_10;
 struct dev_priv *VAR_12 = FUNC_4(VAR_11);
 u_int VAR_13, VAR_14 = 100;
 int VAR_15 = 0;

 do {
  VAR_13 = FUNC_5(VAR_11->base_addr, VAR_0);
  FUNC_6(VAR_11->base_addr, VAR_0, VAR_13 &
      (VAR_3|VAR_7|VAR_6|
       VAR_4|VAR_5|VAR_2|VAR_1));

  if (VAR_13 & VAR_6) {
   VAR_15 = 1;
   FUNC_1(VAR_11, VAR_12);
  }
  if (VAR_13 & VAR_7) {
   VAR_15 = 1;
   FUNC_2(VAR_11, VAR_12);
  }
  if (VAR_13 & VAR_5) {
   VAR_15 = 1;
   VAR_11->stats.rx_dropped++;
  }
  if (VAR_13 & VAR_2) {
   VAR_15 = 1;
   FUNC_3(&VAR_12->timer, VAR_8);
  }
 } while (--VAR_14 && VAR_13 & (VAR_6 | VAR_7));

 return FUNC_0(VAR_15);
}
