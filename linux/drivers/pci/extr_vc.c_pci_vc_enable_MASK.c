
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {TYPE_1__* bus; } ;
struct TYPE_2__ {struct pci_dev* self; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct pci_dev*,char*,int) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct pci_dev*,int,int*) ;
 int FUNC_6 (struct pci_dev*,int,int ) ;
 int FUNC_7 (struct pci_dev*,int,int) ;
 int FUNC_8 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_10, int VAR_11, int VAR_12)
{
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 u32 VAR_21, VAR_22, VAR_23, VAR_24;
 struct pci_dev *VAR_25 = ((void*)0);


 if (!FUNC_3(VAR_10) || !FUNC_8(VAR_10))
  return;

 VAR_13 = VAR_11 + VAR_5 + (VAR_12 * VAR_0);
 VAR_14 = VAR_11 + VAR_8 + (VAR_12 * VAR_0);

 FUNC_5(VAR_10, VAR_13, &VAR_21);
 VAR_15 = VAR_21 & VAR_7;

 FUNC_5(VAR_10, VAR_11, &VAR_22);


 if (FUNC_0(VAR_22) == VAR_2 ||
     FUNC_4(VAR_10->bus))
  goto enable;

 VAR_16 = FUNC_2(VAR_10->bus->self, VAR_1);
 if (!VAR_16)
  goto enable;

 FUNC_5(VAR_10->bus->self, VAR_16 + VAR_4, &VAR_23);
 VAR_17 = VAR_23 & VAR_3;


 for (VAR_18 = 1; VAR_18 < VAR_17 + 1; VAR_18++) {
  VAR_19 = VAR_16 + VAR_5 +
    (VAR_18 * VAR_0);
  VAR_20 = VAR_16 + VAR_8 +
    (VAR_18 * VAR_0);
  FUNC_5(VAR_10->bus->self, VAR_19, &VAR_24);
  if ((VAR_24 & VAR_7) == VAR_15) {
   VAR_25 = VAR_10->bus->self;
   break;
  }
 }

 if (!VAR_25)
  goto enable;


 if (VAR_24 & VAR_6) {
  VAR_24 &= ~VAR_6;
  FUNC_7(VAR_25, VAR_19, VAR_24);
 }


 VAR_24 |= VAR_6;
 FUNC_7(VAR_25, VAR_19, VAR_24);
enable:
 VAR_21 |= VAR_6;
 FUNC_7(VAR_10, VAR_13, VAR_21);

 if (!FUNC_6(VAR_10, VAR_14, VAR_9))
  FUNC_1(VAR_10, "VC%d negotiation stuck pending\n", VAR_15);

 if (VAR_25 && !FUNC_6(VAR_25, VAR_20,
       VAR_9))
  FUNC_1(VAR_25, "VC%d negotiation stuck pending\n", VAR_15);
}
