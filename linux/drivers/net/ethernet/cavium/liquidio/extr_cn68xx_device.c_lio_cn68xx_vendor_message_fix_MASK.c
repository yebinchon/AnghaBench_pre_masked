
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct octeon_device {int pci_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct octeon_device *VAR_1)
{
 u32 VAR_2 = 0;


 FUNC_0(VAR_1->pci_dev, VAR_0, &VAR_2);
 VAR_2 |= 0x3;
 FUNC_1(VAR_1->pci_dev, VAR_0, VAR_2);
}
