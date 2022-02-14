
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_pcie {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct dw_pcie*,int ) ;

__attribute__((used)) static int FUNC_2(struct dw_pcie *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5 = VAR_1 | VAR_0;

 VAR_4 = FUNC_1(VAR_3, VAR_2);

 if ((VAR_4 & VAR_5) == VAR_5)
  return 1;

 FUNC_0(VAR_3->dev, "No link detected (Global-Status: 0x%08x).\n", VAR_4);
 return 0;
}
