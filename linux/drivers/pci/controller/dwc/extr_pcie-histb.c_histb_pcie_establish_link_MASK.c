
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pcie_port {int dummy; } ;
struct histb_pcie {int dummy; } ;
struct dw_pcie {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct dw_pcie*) ;
 int FUNC_2 (struct pcie_port*) ;
 int FUNC_3 (struct dw_pcie*) ;
 int FUNC_4 (struct histb_pcie*,int ) ;
 int FUNC_5 (struct histb_pcie*,int ,int ) ;
 struct dw_pcie* FUNC_6 (struct pcie_port*) ;
 struct histb_pcie* FUNC_7 (struct dw_pcie*) ;

__attribute__((used)) static int FUNC_8(struct pcie_port *VAR_5)
{
 struct dw_pcie *VAR_6 = FUNC_6(VAR_5);
 struct histb_pcie *VAR_7 = FUNC_7(VAR_6);
 u32 VAR_8;

 if (FUNC_1(VAR_6)) {
  FUNC_0(VAR_6->dev, "Link already up\n");
  return 0;
 }


 VAR_8 = FUNC_4(VAR_7, VAR_2);
 VAR_8 &= ~VAR_1;
 VAR_8 |= VAR_4;
 FUNC_5(VAR_7, VAR_2, VAR_8);


 FUNC_2(VAR_5);


 VAR_8 = FUNC_4(VAR_7, VAR_3);
 VAR_8 |= VAR_0;
 FUNC_5(VAR_7, VAR_3, VAR_8);

 return FUNC_3(VAR_6);
}
