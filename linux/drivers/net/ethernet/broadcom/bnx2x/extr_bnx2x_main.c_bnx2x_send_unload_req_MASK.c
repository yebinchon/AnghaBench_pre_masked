
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_dev {scalar_t__ pm_cap; } ;
struct bnx2x {int flags; struct pci_dev* pdev; TYPE_1__* dev; scalar_t__ wol; } ;
struct TYPE_2__ {int* dev_addr; } ;


 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (int ,char*,int,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct bnx2x*,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (struct bnx2x*,int,int ) ;
 scalar_t__** VAR_15 ;
 int FUNC_7 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_8 (struct pci_dev*,scalar_t__,int) ;

u32 FUNC_9(struct bnx2x *VAR_16, int VAR_17)
{
 u32 VAR_18 = 0;
 int VAR_19 = FUNC_2(VAR_16);


 if (VAR_17 == VAR_14)
  VAR_18 = VAR_0;

 else if (VAR_16->flags & VAR_10)
  VAR_18 = VAR_2;

 else if (VAR_16->wol) {
  u32 VAR_20 = VAR_19 ? VAR_8 : VAR_7;
  u8 *VAR_21 = VAR_16->dev->dev_addr;
  struct pci_dev *VAR_22 = VAR_16->pdev;
  u32 VAR_23;
  u16 VAR_24;




  u8 VAR_25 = (FUNC_3(VAR_16) + 1)*8;

  VAR_23 = (VAR_21[0] << 8) | VAR_21[1];
  FUNC_5(VAR_16, VAR_3 + VAR_25, VAR_23);

  VAR_23 = (VAR_21[2] << 24) | (VAR_21[3] << 16) |
        (VAR_21[4] << 8) | VAR_21[5];
  FUNC_5(VAR_16, VAR_3 + VAR_25 + 4, VAR_23);


  FUNC_7(VAR_22, VAR_22->pm_cap + VAR_11, &VAR_24);
  VAR_24 |= VAR_12 | VAR_13;
  FUNC_8(VAR_22, VAR_22->pm_cap + VAR_11, VAR_24);

  VAR_18 = VAR_1;

 } else
  VAR_18 = VAR_0;


 if (!FUNC_0(VAR_16))
  VAR_18 = FUNC_6(VAR_16, VAR_18, 0);
 else {
  int VAR_26 = FUNC_1(VAR_16);

  FUNC_4(VAR_9, "NO MCP - load counts[%d]      %d, %d, %d\n",
     VAR_26, VAR_15[VAR_26][0], VAR_15[VAR_26][1],
     VAR_15[VAR_26][2]);
  VAR_15[VAR_26][0]--;
  VAR_15[VAR_26][1 + VAR_19]--;
  FUNC_4(VAR_9, "NO MCP - new load counts[%d]  %d, %d, %d\n",
     VAR_26, VAR_15[VAR_26][0], VAR_15[VAR_26][1],
     VAR_15[VAR_26][2]);
  if (VAR_15[VAR_26][0] == 0)
   VAR_18 = VAR_4;
  else if (VAR_15[VAR_26][1 + VAR_19] == 0)
   VAR_18 = VAR_6;
  else
   VAR_18 = VAR_5;
 }

 return VAR_18;
}
