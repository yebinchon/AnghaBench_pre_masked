
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct slot {TYPE_1__* ctrl; } ;
struct TYPE_2__ {int pcix_misc2_reg; int pci_dev; } ;


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
 int FUNC_0 (TYPE_1__*,char*,...) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static inline void FUNC_3(struct slot *VAR_10)
{
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 u8 VAR_14;
 u8 VAR_15;


 FUNC_1(VAR_10->ctrl->pci_dev, VAR_2, &VAR_12);
 VAR_14 = VAR_12 & VAR_6;
 if (VAR_14) {
  FUNC_0(VAR_10->ctrl,
    "Bridge_Errors[ PERR_OBSERVED = %08X] (W1C)\n",
    VAR_14);

  FUNC_2(VAR_10->ctrl->pci_dev, VAR_2, VAR_14);
 }


 FUNC_1(VAR_10->ctrl->pci_dev, VAR_0, &VAR_13);
 VAR_15 = VAR_13 & VAR_7;
 if (VAR_15) {
  FUNC_0(VAR_10->ctrl, "Memory_Base_Limit[ RSE ] (W1C)\n");

  FUNC_2(VAR_10->ctrl->pci_dev, VAR_0, VAR_15);
 }

 FUNC_1(VAR_10->ctrl->pci_dev, VAR_1, &VAR_11);

 if (VAR_10->ctrl->pcix_misc2_reg & VAR_8)
  VAR_11 |= VAR_8;
 else
  VAR_11 &= ~VAR_8;

 if (VAR_10->ctrl->pcix_misc2_reg & VAR_9)
  VAR_11 |= VAR_9;
 else
  VAR_11 &= ~VAR_9;

 if (VAR_10->ctrl->pcix_misc2_reg & VAR_4)
  VAR_11 |= VAR_4;
 else
  VAR_11 &= ~VAR_4;

 if (VAR_10->ctrl->pcix_misc2_reg & VAR_3)
  VAR_11 |= VAR_3;
 else
  VAR_11 &= ~VAR_3;

 if (VAR_10->ctrl->pcix_misc2_reg & VAR_5)
  VAR_11 |= VAR_5;
 else
  VAR_11 &= ~VAR_5;
 FUNC_2(VAR_10->ctrl->pci_dev, VAR_1, VAR_11);
}
