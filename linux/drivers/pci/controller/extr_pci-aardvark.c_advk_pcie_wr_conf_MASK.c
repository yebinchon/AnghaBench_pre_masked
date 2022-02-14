
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {scalar_t__ number; scalar_t__ primary; struct advk_pcie* sysdata; } ;
struct advk_pcie {scalar_t__ root_bus_nr; int bridge; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct advk_pcie*) ;
 int FUNC_3 (struct advk_pcie*,struct pci_bus*,int) ;
 int FUNC_4 (struct advk_pcie*) ;
 int FUNC_5 (struct advk_pcie*,int ) ;
 int FUNC_6 (struct advk_pcie*,int,int ) ;
 int FUNC_7 (int *,int,int,int) ;

__attribute__((used)) static int FUNC_8(struct pci_bus *VAR_13, u32 VAR_14,
    int VAR_15, int VAR_16, u32 VAR_17)
{
 struct advk_pcie *VAR_18 = VAR_13->sysdata;
 u32 VAR_19;
 u32 VAR_20 = 0x0;
 int VAR_21;
 int VAR_22;

 if (!FUNC_3(VAR_18, VAR_13, VAR_14))
  return VAR_0;

 if (VAR_13->number == VAR_18->root_bus_nr)
  return FUNC_7(&VAR_18->bridge, VAR_15,
        VAR_16, VAR_17);

 if (VAR_15 % VAR_16)
  return VAR_1;


 FUNC_6(VAR_18, 0, VAR_10);
 FUNC_6(VAR_18, 1, VAR_9);


 VAR_19 = FUNC_5(VAR_18, VAR_7);
 VAR_19 &= ~VAR_8;
 if (VAR_13->primary == VAR_18->root_bus_nr)
  VAR_19 |= VAR_3;
 else
  VAR_19 |= VAR_4;
 FUNC_6(VAR_18, VAR_19, VAR_7);


 VAR_19 = FUNC_1(VAR_13->number, VAR_14, VAR_15);
 FUNC_6(VAR_18, VAR_19, VAR_5);
 FUNC_6(VAR_18, 0, VAR_6);


 VAR_21 = VAR_15 & 0x3;
 VAR_19 = VAR_17 << (8 * VAR_21);
 VAR_20 = FUNC_0(VAR_16 - 1, 0) << VAR_21;


 FUNC_6(VAR_18, VAR_19, VAR_11);


 FUNC_6(VAR_18, VAR_20, VAR_12);


 FUNC_6(VAR_18, 1, VAR_10);

 VAR_22 = FUNC_4(VAR_18);
 if (VAR_22 < 0)
  return VAR_1;

 FUNC_2(VAR_18);

 return VAR_2;
}
