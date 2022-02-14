
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int wakeup_prepared; int pm_cap; int pme_support; int d3cold_allowed; int d1_support; int d2_support; int pme_poll; int imm_ready; int dev; int bridge_d3; int d3cold_delay; int d3_delay; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,char*,int) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*,char*,char*,char*,...) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int) ;
 int FUNC_8 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void FUNC_12(struct pci_dev *VAR_16)
{
 int VAR_17;
 u16 VAR_18;
 u16 VAR_19;

 FUNC_10(&VAR_16->dev);
 FUNC_11(&VAR_16->dev);
 FUNC_9(&VAR_16->dev);
 FUNC_0(&VAR_16->dev);
 VAR_16->wakeup_prepared = 0;

 VAR_16->pm_cap = 0;
 VAR_16->pme_support = 0;


 VAR_17 = FUNC_4(VAR_16, VAR_0);
 if (!VAR_17)
  return;

 FUNC_8(VAR_16, VAR_17 + VAR_13, &VAR_19);

 if ((VAR_19 & VAR_10) > 3) {
  FUNC_3(VAR_16, "unsupported PM cap regs version (%u)\n",
   VAR_19 & VAR_10);
  return;
 }

 VAR_16->pm_cap = VAR_17;
 VAR_16->d3_delay = VAR_12;
 VAR_16->d3cold_delay = VAR_11;
 VAR_16->bridge_d3 = FUNC_2(VAR_16);
 VAR_16->d3cold_allowed = 1;

 VAR_16->d1_support = 0;
 VAR_16->d2_support = 0;
 if (!FUNC_6(VAR_16)) {
  if (VAR_19 & VAR_1)
   VAR_16->d1_support = 1;
  if (VAR_19 & VAR_2)
   VAR_16->d2_support = 1;

  if (VAR_16->d1_support || VAR_16->d2_support)
   FUNC_5(VAR_16, "supports%s%s\n",
       VAR_16->d1_support ? " D1" : "",
       VAR_16->d2_support ? " D2" : "");
 }

 VAR_19 &= VAR_8;
 if (VAR_19) {
  FUNC_5(VAR_16, "PME# supported from%s%s%s%s%s\n",
    (VAR_19 & VAR_3) ? " D0" : "",
    (VAR_19 & VAR_4) ? " D1" : "",
    (VAR_19 & VAR_5) ? " D2" : "",
    (VAR_19 & VAR_6) ? " D3hot" : "",
    (VAR_19 & VAR_7) ? " D3cold" : "");
  VAR_16->pme_support = VAR_19 >> VAR_9;
  VAR_16->pme_poll = 1;




  FUNC_1(&VAR_16->dev, 1);

  FUNC_7(VAR_16, 0);
 }

 FUNC_8(VAR_16, VAR_14, &VAR_18);
 if (VAR_18 & VAR_15)
  VAR_16->imm_ready = 1;
}
