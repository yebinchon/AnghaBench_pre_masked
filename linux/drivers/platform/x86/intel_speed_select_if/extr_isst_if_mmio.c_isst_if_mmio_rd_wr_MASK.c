
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;
struct isst_if_io_reg {int reg; int value; scalar_t__ read_write; int logical_cpu; } ;
struct isst_if_device {int mutex; scalar_t__ punit_mmio; } ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (int ) ;
 struct pci_dev* FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct isst_if_device* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static long FUNC_7(u8 *VAR_3, int *VAR_4, int VAR_5)
{
 struct isst_if_device *VAR_6;
 struct isst_if_io_reg *VAR_7;
 struct pci_dev *VAR_8;

 VAR_7 = (struct isst_if_io_reg *)VAR_3;
 if (VAR_7->reg < 0x04 || VAR_7->reg > 0xD0)
  return -VAR_1;

 if (VAR_7->read_write && !FUNC_0(VAR_0))
  return -VAR_2;

 VAR_8 = FUNC_1(VAR_7->logical_cpu, 0, 0, 1);
 if (!VAR_8)
  return -VAR_1;

 VAR_6 = FUNC_4(VAR_8);
 if (!VAR_6)
  return -VAR_1;





 FUNC_2(&VAR_6->mutex);
 if (VAR_7->read_write) {
  FUNC_6(VAR_7->value, VAR_6->punit_mmio+VAR_7->reg);
  *VAR_4 = 1;
 } else {
  VAR_7->value = FUNC_5(VAR_6->punit_mmio+VAR_7->reg);
  *VAR_4 = 0;
 }
 FUNC_3(&VAR_6->mutex);

 return 0;
}
