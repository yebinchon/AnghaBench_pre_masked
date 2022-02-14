
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vme_bridge {struct ca91cx42_driver* driver_priv; } ;
struct pci_dev {int dummy; } ;
struct ca91cx42_driver {int crcsr_bus; int crcsr_kernel; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct pci_dev*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct vme_bridge *VAR_4,
 struct pci_dev *VAR_5)
{
 u32 VAR_6;
 struct ca91cx42_driver *VAR_7;

 VAR_7 = VAR_4->driver_priv;


 VAR_6 = FUNC_0(VAR_7->base + VAR_1);
 VAR_6 &= ~VAR_0;
 FUNC_1(VAR_6, VAR_7->base + VAR_1);


 FUNC_1(0, VAR_7->base + VAR_2);

 FUNC_2(VAR_5, VAR_3, VAR_7->crcsr_kernel,
  VAR_7->crcsr_bus);
}
