
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_pcie {int dev; } ;
struct armada8k_pcie {struct dw_pcie* pci; } ;


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
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dw_pcie*) ;
 int FUNC_2 (struct dw_pcie*,int ) ;
 scalar_t__ FUNC_3 (struct dw_pcie*) ;
 int FUNC_4 (struct dw_pcie*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct armada8k_pcie *VAR_19)
{
 struct dw_pcie *VAR_20 = VAR_19->pci;
 u32 VAR_21;

 if (!FUNC_1(VAR_20)) {

  VAR_21 = FUNC_2(VAR_20, VAR_13);
  VAR_21 &= ~(VAR_5);
  FUNC_4(VAR_20, VAR_13, VAR_21);
 }


 VAR_21 = FUNC_2(VAR_20, VAR_13);
 VAR_21 &= ~(VAR_10 << VAR_12);
 VAR_21 |= VAR_11 << VAR_12;
 FUNC_4(VAR_20, VAR_13, VAR_21);


 FUNC_4(VAR_20, VAR_6, VAR_0);
 FUNC_4(VAR_20, VAR_8, VAR_1);


 VAR_21 = FUNC_2(VAR_20, VAR_7);
 VAR_21 &= ~(VAR_2 << VAR_3);
 VAR_21 |= VAR_4 << VAR_3;
 FUNC_4(VAR_20, VAR_7, VAR_21);

 VAR_21 = FUNC_2(VAR_20, VAR_9);
 VAR_21 &= ~(VAR_2 << VAR_3);
 VAR_21 |= VAR_4 << VAR_3;
 FUNC_4(VAR_20, VAR_9, VAR_21);


 VAR_21 = FUNC_2(VAR_20, VAR_14);
 VAR_21 |= VAR_15 | VAR_16 |
        VAR_17 | VAR_18;
 FUNC_4(VAR_20, VAR_14, VAR_21);

 if (!FUNC_1(VAR_20)) {

  VAR_21 = FUNC_2(VAR_20, VAR_13);
  VAR_21 |= VAR_5;
  FUNC_4(VAR_20, VAR_13, VAR_21);
 }


 if (FUNC_3(VAR_20))
  FUNC_0(VAR_20->dev, "Link not up after reconfiguration\n");
}
