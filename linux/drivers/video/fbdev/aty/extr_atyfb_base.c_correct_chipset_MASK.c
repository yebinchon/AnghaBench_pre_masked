
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int pll_max; int mclk; int xclk; int ecp_max; } ;
struct atyfb_par {scalar_t__ pci_id; void* features; TYPE_1__ pll_limits; } ;
struct TYPE_5__ {scalar_t__ pci_id; char* name; int pll; int mclk; int xclk; int ecp_max; void* features; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;




 int FUNC_1 (char*,char const*,int,int) ;
 TYPE_2__* VAR_9 ;
 int FUNC_2 (int ,struct atyfb_par*) ;

__attribute__((used)) static int FUNC_3(struct atyfb_par *VAR_10)
{
 u8 VAR_11;
 u16 VAR_12;
 u32 VAR_13;
 const char *VAR_14;
 int VAR_15;

 for (VAR_15 = (int)FUNC_0(VAR_9) - 1; VAR_15 >= 0; VAR_15--)
  if (VAR_10->pci_id == VAR_9[VAR_15].pci_id)
   break;

 if (VAR_15 < 0)
  return -VAR_7;

 VAR_14 = VAR_9[VAR_15].name;
 VAR_10->pll_limits.pll_max = VAR_9[VAR_15].pll;
 VAR_10->pll_limits.mclk = VAR_9[VAR_15].mclk;
 VAR_10->pll_limits.xclk = VAR_9[VAR_15].xclk;
 VAR_10->pll_limits.ecp_max = VAR_9[VAR_15].ecp_max;
 VAR_10->features = VAR_9[VAR_15].features;

 VAR_13 = FUNC_2(VAR_6, VAR_10);
 VAR_12 = VAR_13 & VAR_5;
 VAR_11 = (VAR_13 & VAR_4) >> 24;

 switch (VAR_10->pci_id) {
 }

 FUNC_1("%s [0x%04x rev 0x%02x]\n", VAR_14, VAR_12, VAR_11);
 return 0;
}
