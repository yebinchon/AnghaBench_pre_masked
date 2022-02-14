
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct slot {TYPE_1__* ctrl; } ;
struct TYPE_2__ {int pci_dev; int pcix_misc2_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct slot *VAR_6)
{
 u32 VAR_7;


 FUNC_0(VAR_6->ctrl->pci_dev, VAR_0, &VAR_7);

 VAR_6->ctrl->pcix_misc2_reg = VAR_7;


 VAR_7 &= ~VAR_4;
 VAR_7 &= ~VAR_5;
 VAR_7 &= ~VAR_2;
 VAR_7 &= ~VAR_1;
 VAR_7 &= ~VAR_3;
 FUNC_1(VAR_6->ctrl->pci_dev, VAR_0, VAR_7);
}
