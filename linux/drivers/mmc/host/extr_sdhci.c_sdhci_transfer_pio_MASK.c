
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sdhci_host {scalar_t__ blocks; int quirks; TYPE_1__* data; } ;
struct TYPE_2__ {int flags; int blocks; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (struct sdhci_host*,int ) ;
 int FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct sdhci_host *VAR_6)
{
 u32 VAR_7;

 if (VAR_6->blocks == 0)
  return;

 if (VAR_6->data->flags & VAR_0)
  VAR_7 = VAR_1;
 else
  VAR_7 = VAR_5;






 if ((VAR_6->quirks & VAR_3) &&
  (VAR_6->data->blocks == 1))
  VAR_7 = ~0;

 while (FUNC_2(VAR_6, VAR_2) & VAR_7) {
  if (VAR_6->quirks & VAR_4)
   FUNC_4(100);

  if (VAR_6->data->flags & VAR_0)
   FUNC_1(VAR_6);
  else
   FUNC_3(VAR_6);

  VAR_6->blocks--;
  if (VAR_6->blocks == 0)
   break;
 }

 FUNC_0("PIO transfer complete.\n");
}
