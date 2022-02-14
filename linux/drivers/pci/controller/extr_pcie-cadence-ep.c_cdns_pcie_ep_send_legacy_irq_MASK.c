
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct cdns_pcie_ep {int pcie; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cdns_pcie_ep*,int ,int ,int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct cdns_pcie_ep *VAR_3, u8 VAR_4, u8 VAR_5)
{
 u16 VAR_6;

 VAR_6 = FUNC_1(&VAR_3->pcie, VAR_4, VAR_1);
 if (VAR_6 & VAR_2)
  return -VAR_0;

 FUNC_0(VAR_3, VAR_4, VAR_5, 1);




 FUNC_2(1);
 FUNC_0(VAR_3, VAR_4, VAR_5, 0);
 return 0;
}
