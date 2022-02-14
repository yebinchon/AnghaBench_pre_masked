
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mmci_host {TYPE_1__* variant; } ;
struct TYPE_2__ {int fifohalfsize; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct mmci_host *VAR_2, u32 VAR_3, int VAR_4)
{




 if (VAR_3 & VAR_1)
  return VAR_2->variant->fifohalfsize;
 else if (VAR_3 & VAR_0)
  return 4;

 return 0;
}
