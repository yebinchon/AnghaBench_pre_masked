
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_pcie {int dbi_base; } ;
struct tegra_pcie_dw {int num_lanes; struct dw_pcie pci; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct dw_pcie*,int ) ;
 int FUNC_1 (int,int,int*) ;
 int FUNC_2 (struct dw_pcie*,int ) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (struct dw_pcie*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct tegra_pcie_dw *VAR_17)
{
 struct dw_pcie *VAR_18 = &VAR_17->pci;
 u32 VAR_19, VAR_20, VAR_21;


 for (VAR_21 = 0; VAR_21 < VAR_17->num_lanes; VAR_21++) {
  FUNC_1(VAR_18->dbi_base + VAR_0
     + (VAR_21 * 2), 2, &VAR_19);
  VAR_19 &= ~VAR_1;
  VAR_19 |= VAR_8;
  VAR_19 &= ~VAR_2;
  VAR_19 |= (VAR_8 <<
      VAR_3);
  FUNC_3(VAR_18->dbi_base + VAR_0
     + (VAR_21 * 2), 2, VAR_19);

  VAR_20 = FUNC_0(VAR_18,
           VAR_12) +
    VAR_13;
  FUNC_1(VAR_18->dbi_base + VAR_20 + VAR_21, 1, &VAR_19);
  VAR_19 &= ~VAR_14;
  VAR_19 |= VAR_8;
  VAR_19 &= ~VAR_15;
  VAR_19 |= (VAR_8 <<
   VAR_16);
  FUNC_3(VAR_18->dbi_base + VAR_20 + VAR_21, 1, VAR_19);
 }

 VAR_19 = FUNC_2(VAR_18, VAR_9);
 VAR_19 &= ~VAR_10;
 FUNC_4(VAR_18, VAR_9, VAR_19);

 VAR_19 = FUNC_2(VAR_18, VAR_4);
 VAR_19 &= ~VAR_6;
 VAR_19 |= (0x3ff << VAR_7);
 VAR_19 &= ~VAR_5;
 FUNC_4(VAR_18, VAR_4, VAR_19);

 VAR_19 = FUNC_2(VAR_18, VAR_9);
 VAR_19 &= ~VAR_10;
 VAR_19 |= (0x1 << VAR_11);
 FUNC_4(VAR_18, VAR_9, VAR_19);

 VAR_19 = FUNC_2(VAR_18, VAR_4);
 VAR_19 &= ~VAR_6;
 VAR_19 |= (0x360 << VAR_7);
 VAR_19 &= ~VAR_5;
 FUNC_4(VAR_18, VAR_4, VAR_19);

 VAR_19 = FUNC_2(VAR_18, VAR_9);
 VAR_19 &= ~VAR_10;
 FUNC_4(VAR_18, VAR_9, VAR_19);
}
