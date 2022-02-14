
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_pci_slot {TYPE_1__* host; } ;
struct TYPE_2__ {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_0(struct sdhci_pci_slot *VAR_8)
{
 VAR_8->host->caps =
  ((0x21 << VAR_6)
   & VAR_5) |

  ((0x21 << VAR_4)
   & VAR_3) |

  VAR_7 |
  VAR_2 |
  VAR_0 |
  VAR_1;
 return 0;
}
