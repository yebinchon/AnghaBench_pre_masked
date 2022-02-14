
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct artpec6_pcie {int variant; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct artpec6_pcie*,int ) ;
 int FUNC_1 (struct artpec6_pcie*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct artpec6_pcie *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 switch (VAR_3->variant) {
 case 129:
  VAR_4 |= VAR_1;
  break;
 case 128:
  VAR_4 &= ~VAR_2;
  break;
 }
 FUNC_1(VAR_3, VAR_0, VAR_4);
}
