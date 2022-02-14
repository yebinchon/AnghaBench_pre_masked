
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_hardware_context {int pci_func; } ;
struct qlcnic_adapter {int flags; struct qlcnic_hardware_context* ahw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qlcnic_adapter*,int ) ;

__attribute__((used)) static int
FUNC_1(struct qlcnic_adapter *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 struct qlcnic_hardware_context *VAR_7 = VAR_3->ahw;

 VAR_5 = FUNC_0(VAR_3, VAR_1);
 VAR_4 = FUNC_0(VAR_3, VAR_0);

 if (VAR_3->flags & VAR_2) {
  VAR_6 = (~(1 << (VAR_7->pci_func * 4)));
  VAR_4 = VAR_4 & VAR_6;
 }

 if (((VAR_5 & 0x11111111) == (VAR_4 & 0x11111111)) ||
   ((VAR_4 & 0x11111111) == ((VAR_5 >> 1) & 0x11111111)))
  return 0;
 else
  return 1;
}
