
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sdhci_host {scalar_t__ version; int flags; TYPE_1__* ops; } ;
struct mmc_ios {int signal_voltage; } ;
struct TYPE_4__ {int vqmmc; } ;
struct mmc_host {TYPE_2__ supply; } ;
struct TYPE_3__ {int (* voltage_switch ) (struct sdhci_host*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct mmc_host*) ;
 struct sdhci_host* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*,struct mmc_ios*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct sdhci_host*,int ) ;
 int FUNC_6 (struct sdhci_host*,int,int ) ;
 int FUNC_7 (struct sdhci_host*) ;
 int FUNC_8 (int,int) ;

int FUNC_9(struct mmc_host *VAR_9,
          struct mmc_ios *VAR_10)
{
 struct sdhci_host *VAR_11 = FUNC_2(VAR_9);
 u16 VAR_12;
 int VAR_13;





 if (VAR_11->version < VAR_8)
  return 0;

 VAR_12 = FUNC_5(VAR_11, VAR_4);

 switch (VAR_10->signal_voltage) {
 case 128:
  if (!(VAR_11->flags & VAR_7))
   return -VAR_1;

  VAR_12 &= ~VAR_3;
  FUNC_6(VAR_11, VAR_12, VAR_4);

  if (!FUNC_0(VAR_9->supply.vqmmc)) {
   VAR_13 = FUNC_3(VAR_9, VAR_10);
   if (VAR_13) {
    FUNC_4("%s: Switching to 3.3V signalling voltage failed\n",
     FUNC_1(VAR_9));
    return -VAR_2;
   }
  }

  FUNC_8(5000, 5500);


  VAR_12 = FUNC_5(VAR_11, VAR_4);
  if (!(VAR_12 & VAR_3))
   return 0;

  FUNC_4("%s: 3.3V regulator output did not became stable\n",
   FUNC_1(VAR_9));

  return -VAR_0;
 case 129:
  if (!(VAR_11->flags & VAR_6))
   return -VAR_1;
  if (!FUNC_0(VAR_9->supply.vqmmc)) {
   VAR_13 = FUNC_3(VAR_9, VAR_10);
   if (VAR_13) {
    FUNC_4("%s: Switching to 1.8V signalling voltage failed\n",
     FUNC_1(VAR_9));
    return -VAR_2;
   }
  }





  VAR_12 |= VAR_3;
  FUNC_6(VAR_11, VAR_12, VAR_4);


  if (VAR_11->ops->voltage_switch)
   VAR_11->ops->voltage_switch(VAR_11);


  VAR_12 = FUNC_5(VAR_11, VAR_4);
  if (VAR_12 & VAR_3)
   return 0;

  FUNC_4("%s: 1.8V regulator output did not became stable\n",
   FUNC_1(VAR_9));

  return -VAR_0;
 case 130:
  if (!(VAR_11->flags & VAR_5))
   return -VAR_1;
  if (!FUNC_0(VAR_9->supply.vqmmc)) {
   VAR_13 = FUNC_3(VAR_9, VAR_10);
   if (VAR_13) {
    FUNC_4("%s: Switching to 1.2V signalling voltage failed\n",
     FUNC_1(VAR_9));
    return -VAR_2;
   }
  }
  return 0;
 default:

  return 0;
 }
}
