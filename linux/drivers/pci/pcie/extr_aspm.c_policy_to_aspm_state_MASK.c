
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_link_state {int aspm_default; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct pcie_link_state *VAR_4)
{
 switch (VAR_3) {
 case 130:

  return 0;
 case 129:

  return (VAR_1 | VAR_2);
 case 128:

  return VAR_0;
 case 131:
  return VAR_4->aspm_default;
 }
 return 0;
}
