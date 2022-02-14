
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bridge_emul {struct advk_pcie* data; } ;
struct advk_pcie {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;

 int VAR_4 ;
 int FUNC_0 (struct advk_pcie*,int,int ) ;

__attribute__((used)) static void
FUNC_1(struct pci_bridge_emul *VAR_5,
         int VAR_6, u32 VAR_7, u32 VAR_8, u32 VAR_9)
{
 struct advk_pcie *VAR_10 = VAR_5->data;

 switch (VAR_6) {
 case 131:
 case 130:
  FUNC_0(VAR_10, VAR_8, VAR_0 + VAR_6);
  break;

 case 129:
  VAR_8 = (VAR_8 & VAR_3) << 3;
  FUNC_0(VAR_10, VAR_8, VAR_1);
  break;

 case 128:
  VAR_8 = (VAR_8 & VAR_4) >> 9;
  FUNC_0(VAR_10, VAR_8, VAR_2);
  break;

 default:
  break;
 }
}
