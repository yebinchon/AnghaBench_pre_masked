
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bridge_emul {struct advk_pcie* data; } ;
struct advk_pcie {int dummy; } ;
typedef int pci_bridge_emul_read_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 int VAR_7 ;


 int VAR_8 ;
 int FUNC_0 (struct advk_pcie*,int ) ;

__attribute__((used)) static pci_bridge_emul_read_status_t
FUNC_1(struct pci_bridge_emul *VAR_9,
        int VAR_10, u32 *VAR_11)
{
 struct advk_pcie *VAR_12 = VAR_9->data;


 switch (VAR_10) {
 case 128:
  *VAR_11 = VAR_8 << 16;
  return VAR_5;

 case 130: {
  u32 VAR_13 = FUNC_0(VAR_12, VAR_1);
  *VAR_11 = (VAR_13 & VAR_4) ? VAR_7 : 0;
  return VAR_5;
 }

 case 129: {
  u32 VAR_14 = FUNC_0(VAR_12, VAR_2);
  u32 VAR_15 = FUNC_0(VAR_12, VAR_3);
  *VAR_11 = (VAR_14 & VAR_4) << 16 | (VAR_15 >> 16);
  return VAR_5;
 }

 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
  *VAR_11 = FUNC_0(VAR_12, VAR_0 + VAR_10);
  return VAR_5;
 default:
  return VAR_6;
 }

}
