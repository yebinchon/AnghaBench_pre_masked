
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_sg_descriptor {int length; int address; } ;
struct pci_dev {int dev; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_1,
 struct pqi_sg_descriptor *VAR_2, int VAR_3,
 enum dma_data_direction VAR_4)
{
 int VAR_5;

 if (VAR_4 == VAR_0)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  FUNC_0(&VAR_1->dev,
   (dma_addr_t)FUNC_2(&VAR_2[VAR_5].address),
   FUNC_1(&VAR_2[VAR_5].length),
   VAR_4);
}
