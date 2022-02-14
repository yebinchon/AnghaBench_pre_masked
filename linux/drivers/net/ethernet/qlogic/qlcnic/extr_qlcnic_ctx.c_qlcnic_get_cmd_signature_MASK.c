
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_hardware_context {int pci_func; int fw_hal_version; } ;



__attribute__((used)) static inline u32 FUNC_0(struct qlcnic_hardware_context *VAR_0)
{
 return (VAR_0->pci_func & 0xff) | ((VAR_0->fw_hal_version & 0xff) << 8) |
        (0xcafe << 16);
}
