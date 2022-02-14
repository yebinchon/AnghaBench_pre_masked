
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sdhci_pci_slot {TYPE_4__* host; TYPE_3__* data; TYPE_2__* chip; } ;
struct TYPE_9__ {scalar_t__ ioaddr; } ;
struct TYPE_8__ {int (* cleanup ) (TYPE_3__*) ;} ;
struct TYPE_7__ {TYPE_1__* fixes; } ;
struct TYPE_6__ {int (* remove_slot ) (struct sdhci_pci_slot*,int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct sdhci_pci_slot*) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (struct sdhci_pci_slot*,int) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_6(struct sdhci_pci_slot *VAR_1)
{
 int VAR_2;
 u32 VAR_3;

 FUNC_2(VAR_1);

 VAR_2 = 0;
 VAR_3 = FUNC_0(VAR_1->host->ioaddr + VAR_0);
 if (VAR_3 == (u32)-1)
  VAR_2 = 1;

 FUNC_3(VAR_1->host, VAR_2);

 if (VAR_1->chip->fixes && VAR_1->chip->fixes->remove_slot)
  VAR_1->chip->fixes->remove_slot(VAR_1, VAR_2);

 if (VAR_1->data && VAR_1->data->cleanup)
  VAR_1->data->cleanup(VAR_1->data);

 FUNC_1(VAR_1->host);
}
