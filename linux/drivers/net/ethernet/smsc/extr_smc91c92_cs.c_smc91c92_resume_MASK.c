
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_private {scalar_t__ manfid; scalar_t__ cardid; } ;
struct pcmcia_device {scalar_t__ open; struct net_device* priv; } ;
struct net_device {int base_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct pcmcia_device*) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int FUNC_2 (struct net_device*,char*) ;
 struct smc_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct pcmcia_device*) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct pcmcia_device *VAR_9)
{
 struct net_device *VAR_10 = VAR_9->priv;
 struct smc_private *VAR_11 = FUNC_3(VAR_10);
 int VAR_12;

 if ((VAR_11->manfid == VAR_0) &&
     (VAR_11->cardid == VAR_6))
  FUNC_0(VAR_9);
 if (VAR_11->manfid == VAR_1)
  FUNC_1(VAR_9);
 if ((VAR_11->manfid == VAR_2) &&
     (VAR_11->cardid != VAR_7)) {

  FUNC_6(0x0300, VAR_10->base_addr-0x10+VAR_4);
  FUNC_6(0x0300, VAR_10->base_addr-0x10+VAR_5);
 }
 if (((VAR_11->manfid == VAR_2) &&
      (VAR_11->cardid == VAR_7)) ||
     ((VAR_11->manfid == VAR_3) &&
      (VAR_11->cardid == VAR_8))) {
  VAR_12 = FUNC_5(VAR_9);
  if (VAR_12) {
   FUNC_2(VAR_10, "Failed to load firmware\n");
   return VAR_12;
  }
 }
 if (VAR_9->open) {
  FUNC_7(VAR_10);
  FUNC_4(VAR_10);
 }

 return 0;
}
