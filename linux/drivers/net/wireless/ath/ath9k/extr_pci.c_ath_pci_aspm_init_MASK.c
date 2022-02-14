
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {TYPE_1__* bus; } ;
struct ath_softc {int dev; struct ath_hw* sc_ah; } ;
struct TYPE_4__ {int aspm_l1_fix; } ;
struct ath_hw {int aspm_enabled; TYPE_2__ config; int is_pciexpress; } ;
struct ath_common {scalar_t__ priv; } ;
struct TYPE_3__ {struct pci_dev* self; } ;


 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ath_hw*,int) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_common*,char*,...) ;
 int FUNC_5 (struct pci_dev*,int,int *) ;
 int FUNC_6 (struct pci_dev*,int ,int) ;
 int FUNC_7 (struct pci_dev*,int ,int*) ;
 struct pci_dev* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct ath_common *VAR_4)
{
 struct ath_softc *VAR_5 = (struct ath_softc *) VAR_4->priv;
 struct ath_hw *VAR_6 = VAR_5->sc_ah;
 struct pci_dev *VAR_7 = FUNC_8(VAR_5->dev);
 struct pci_dev *VAR_8;
 u16 VAR_9;

 if (!VAR_6->is_pciexpress)
  return;

 VAR_8 = VAR_7->bus->self;
 if (!VAR_8)
  return;

 if ((FUNC_3(VAR_6) != VAR_0) &&
     (FUNC_0(VAR_6))) {

  FUNC_6(VAR_7, VAR_1,
   VAR_2 | VAR_3);





  FUNC_6(VAR_8, VAR_1,
   VAR_2 | VAR_3);

  FUNC_4(VAR_4, "Disabling ASPM since BTCOEX is enabled\n");
  return;
 }
 if (FUNC_1(VAR_6))
  FUNC_5(VAR_7, 0x70c, &VAR_6->config.aspm_l1_fix);

 FUNC_7(VAR_8, VAR_1, &VAR_9);
 if (VAR_9 & (VAR_2 | VAR_3)) {
  VAR_6->aspm_enabled = 1;

  FUNC_2(VAR_6, 0);
  FUNC_4(VAR_4, "ASPM enabled: 0x%x\n", VAR_9);
 }
}
