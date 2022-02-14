
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int * resource; int dev; } ;
struct intel_spi_boardinfo {int writeable; } ;
struct intel_spi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct intel_spi*) ;
 int FUNC_1 (struct intel_spi*) ;
 struct intel_spi_boardinfo* FUNC_2 (int *,void*,int,int ) ;
 struct intel_spi* FUNC_3 (int *,int *,struct intel_spi_boardinfo*) ;
 int FUNC_4 (struct pci_dev*,int ,int*) ;
 int FUNC_5 (struct pci_dev*,struct intel_spi*) ;
 int FUNC_6 (struct pci_dev*,int ,int) ;
 int FUNC_7 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_8(struct pci_dev *VAR_4,
          const struct pci_device_id *VAR_5)
{
 struct intel_spi_boardinfo *VAR_6;
 struct intel_spi *VAR_7;
 u32 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_7(VAR_4);
 if (VAR_9)
  return VAR_9;

 VAR_6 = FUNC_2(&VAR_4->dev, (void *)VAR_5->driver_data, sizeof(*VAR_6),
       VAR_3);
 if (!VAR_6)
  return -VAR_2;


 FUNC_4(VAR_4, VAR_0, &VAR_8);
 if (!(VAR_8 & VAR_1)) {
  VAR_8 |= VAR_1;
  FUNC_6(VAR_4, VAR_0, VAR_8);
  FUNC_4(VAR_4, VAR_0, &VAR_8);
 }
 VAR_6->writeable = !!(VAR_8 & VAR_1);

 VAR_7 = FUNC_3(&VAR_4->dev, &VAR_4->resource[0], VAR_6);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 FUNC_5(VAR_4, VAR_7);
 return 0;
}
