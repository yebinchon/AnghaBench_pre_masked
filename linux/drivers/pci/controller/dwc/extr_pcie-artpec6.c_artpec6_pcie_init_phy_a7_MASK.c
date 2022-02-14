
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_pcie {int dev; } ;
struct artpec6_pcie {struct dw_pcie* pci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct artpec6_pcie*,int ) ;
 int FUNC_1 (struct artpec6_pcie*,int ,int) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct artpec6_pcie *VAR_9)
{
 struct dw_pcie *VAR_10 = VAR_9->pci;
 u32 VAR_11;
 bool VAR_12;


 VAR_11 = FUNC_0(VAR_9, VAR_7);
 VAR_12 = !!(VAR_11 & VAR_8);
 FUNC_2(VAR_10->dev, "Using reference clock: %s\n",
  VAR_12 ? "external" : "internal");

 VAR_11 = FUNC_0(VAR_9, VAR_3);
 VAR_11 |= VAR_6 |
  VAR_4;
 if (VAR_12)
  VAR_11 |= VAR_5;
 else
  VAR_11 &= ~VAR_5;
 FUNC_1(VAR_9, VAR_3, VAR_11);
 FUNC_3(10, 20);

 VAR_11 = FUNC_0(VAR_9, VAR_0);
 VAR_11 |= VAR_1;
 FUNC_1(VAR_9, VAR_0, VAR_11);
 FUNC_3(20, 30);

 VAR_11 = FUNC_0(VAR_9, VAR_0);
 VAR_11 &= ~VAR_2;
 FUNC_1(VAR_9, VAR_0, VAR_11);
}
