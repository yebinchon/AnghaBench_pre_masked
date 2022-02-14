
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sdhci_host {scalar_t__ ioaddr; TYPE_2__* mmc; } ;
struct TYPE_3__ {unsigned char timing; } ;
struct TYPE_4__ {TYPE_1__ ios; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct sdhci_host *VAR_2, u8 VAR_3, int VAR_4)
{
 unsigned char VAR_5 = VAR_2->mmc->ios.timing;

 if (VAR_4 == VAR_1) {
  switch (VAR_5) {




  case 130:
  case 131:
  case 129:
  case 128:
   VAR_3 &= ~VAR_0;
  }
 }

 FUNC_0(VAR_3, VAR_2->ioaddr + VAR_4);
}
