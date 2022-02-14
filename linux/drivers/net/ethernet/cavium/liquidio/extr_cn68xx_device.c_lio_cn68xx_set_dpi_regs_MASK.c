
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct octeon_device {TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int,...) ;
 int FUNC_3 (struct octeon_device*,int ) ;
 int FUNC_4 (struct octeon_device*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct octeon_device *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5[6] = { 3, 3, 1, 1, 1, 8 };

 FUNC_4(VAR_3, VAR_2, VAR_1);
 FUNC_2(&VAR_3->pci_dev->dev, "DPI_DMA_CONTROL: 0x%016llx\n",
  FUNC_3(VAR_3, VAR_1));

 for (VAR_4 = 0; VAR_4 < 6; VAR_4++) {




  FUNC_4(VAR_3, 0, FUNC_1(VAR_4));
  FUNC_4(VAR_3, VAR_5[VAR_4], FUNC_0(VAR_4));
  FUNC_2(&VAR_3->pci_dev->dev, "DPI_ENG_BUF%d: 0x%016llx\n", VAR_4,
   FUNC_3(VAR_3, FUNC_0(VAR_4)));
 }





 FUNC_4(VAR_3, 1, VAR_0);
 FUNC_2(&VAR_3->pci_dev->dev, "DPI_CTL: 0x%016llx\n",
  FUNC_3(VAR_3, VAR_0));
}
