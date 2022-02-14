
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct octeon_device {int pci_dev; } ;


 int FUNC_0 (int ,int,int*) ;
 scalar_t__ FUNC_1 (char*,char*,...) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, struct octeon_device *VAR_1)
{
 u32 VAR_2;
 int VAR_3, VAR_4 = 0;



 VAR_4 += FUNC_1(VAR_0 + VAR_4,
         "\n\t Octeon Config space Registers\n\n");

 for (VAR_3 = 0; VAR_3 <= 13; VAR_3++) {
  FUNC_0(VAR_1->pci_dev, (VAR_3 * 4), &VAR_2);
  VAR_4 += FUNC_1(VAR_0 + VAR_4, "[0x%x] (Config[%d]): 0x%08x\n",
          (VAR_3 * 4), VAR_3, VAR_2);
 }

 for (VAR_3 = 30; VAR_3 <= 34; VAR_3++) {
  FUNC_0(VAR_1->pci_dev, (VAR_3 * 4), &VAR_2);
  VAR_4 += FUNC_1(VAR_0 + VAR_4, "[0x%x] (Config[%d]): 0x%08x\n",
          (VAR_3 * 4), VAR_3, VAR_2);
 }

 return VAR_4;
}
