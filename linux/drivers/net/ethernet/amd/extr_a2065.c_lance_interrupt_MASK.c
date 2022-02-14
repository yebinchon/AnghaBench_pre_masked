
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_errors; int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct lance_regs {int rdp; void* rap; } ;
struct lance_private {struct lance_regs* ll; } ;
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
 void* VAR_16 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct lance_private*) ;
 int FUNC_3 (struct net_device*,char*,int) ;
 struct lance_private* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_17, void *VAR_18)
{
 struct net_device *VAR_19 = VAR_18;
 struct lance_private *VAR_20 = FUNC_4(VAR_19);
 volatile struct lance_regs *VAR_21 = VAR_20->ll;
 int VAR_22;

 VAR_21->rap = VAR_16;
 VAR_22 = VAR_21->rdp;

 if (!(VAR_22 & VAR_8))
  return VAR_1;


 VAR_21->rdp = VAR_22 & ~(VAR_6 | VAR_14 | VAR_12 | VAR_13 |
      VAR_7);

 if (VAR_22 & VAR_4) {

  VAR_21->rdp = VAR_2 | VAR_4 | VAR_10 | VAR_6;
 }

 if (VAR_22 & VAR_11)
  FUNC_0(VAR_19);

 if (VAR_22 & VAR_15)
  FUNC_1(VAR_19);


 if (VAR_22 & VAR_2)
  VAR_19->stats.tx_errors++;
 if (VAR_22 & VAR_10)
  VAR_19->stats.rx_errors++;
 if (VAR_22 & VAR_9) {
  FUNC_3(VAR_19, "Bus master arbitration failure, status %04x\n",
      VAR_22);

  VAR_21->rdp = VAR_13;
 }

 if (FUNC_5(VAR_19) && FUNC_2(VAR_20) > 0)
  FUNC_6(VAR_19);

 VAR_21->rap = VAR_16;
 VAR_21->rdp = (VAR_2 | VAR_3 | VAR_10 | VAR_9 |
     VAR_5 | VAR_6);
 return VAR_0;
}
