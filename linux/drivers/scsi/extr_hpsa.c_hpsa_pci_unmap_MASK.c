
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct CommandList {TYPE_1__* SG; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_2__ {int Len; int Addr; } ;


 int FUNC_0 (int *,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0, struct CommandList *VAR_1,
  int VAR_2, enum dma_data_direction VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_0(&VAR_0->dev, FUNC_2(VAR_1->SG[VAR_4].Addr),
    FUNC_1(VAR_1->SG[VAR_4].Len),
    VAR_3);
}
