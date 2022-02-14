
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vme_bridge {struct tsi148_driver* driver_priv; } ;
struct tsi148_driver {int crcsr_bus; int crcsr_kernel; scalar_t__ base; } ;
struct pci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct pci_dev*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct vme_bridge *VAR_5,
 struct pci_dev *VAR_6)
{
 u32 VAR_7;
 struct tsi148_driver *VAR_8;

 VAR_8 = VAR_5->driver_priv;


 VAR_7 = FUNC_0(VAR_8->base + VAR_0);
 FUNC_1(VAR_7 & ~VAR_1,
  VAR_8->base + VAR_0);


 FUNC_1(0, VAR_8->base + VAR_3);
 FUNC_1(0, VAR_8->base + VAR_2);

 FUNC_2(VAR_6, VAR_4, VAR_8->crcsr_kernel,
  VAR_8->crcsr_bus);
}
