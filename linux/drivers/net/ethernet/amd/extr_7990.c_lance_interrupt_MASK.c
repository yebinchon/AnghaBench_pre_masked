
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_errors; int tx_errors; } ;
struct net_device {int name; TYPE_1__ stats; } ;
struct lance_private {int devlock; scalar_t__ tx_full; } ;
typedef int irqreturn_t ;


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
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 () ;
 int FUNC_1 (struct lance_private*) ;
 scalar_t__ VAR_17 ;
 int FUNC_2 (struct lance_private*,int ) ;
 int FUNC_3 (struct lance_private*,int) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 struct lance_private* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (char*,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static irqreturn_t
FUNC_12(int VAR_18, void *VAR_19)
{
 struct net_device *VAR_20 = (struct net_device *)VAR_19;
 struct lance_private *VAR_21 = FUNC_6(VAR_20);
 int VAR_22;

 FUNC_10(&VAR_21->devlock);

 FUNC_2(VAR_21, VAR_16);
 VAR_22 = FUNC_1(VAR_21);

 FUNC_0();

 if (!(VAR_22 & VAR_8)) {
  FUNC_11(&VAR_21->devlock);
  return VAR_1;
 }


 FUNC_3(VAR_21, VAR_22 & ~(VAR_6|VAR_14|VAR_12|VAR_13|VAR_7));

 if ((VAR_22 & VAR_4)) {

  FUNC_3(VAR_21, VAR_2|VAR_4|VAR_10|VAR_6);
 }

 if (VAR_22 & VAR_11)
  FUNC_4(VAR_20);

 if (VAR_22 & VAR_15)
  FUNC_5(VAR_20);


 if (VAR_22 & VAR_2)
  VAR_20->stats.tx_errors++;
 if (VAR_22 & VAR_10)
  VAR_20->stats.rx_errors++;
 if (VAR_22 & VAR_9) {
  FUNC_9("%s: Bus master arbitration failure, status %4.4x.\n",
         VAR_20->name, VAR_22);

  FUNC_3(VAR_21, VAR_13);
 }

 if (VAR_21->tx_full && FUNC_7(VAR_20) && (VAR_17 >= 0)) {
  VAR_21->tx_full = 0;
  FUNC_8(VAR_20);
 }

 FUNC_2(VAR_21, VAR_16);
 FUNC_3(VAR_21, VAR_2|VAR_3|VAR_10|VAR_9|VAR_5|VAR_6);

 FUNC_11(&VAR_21->devlock);
 return VAR_0;
}
