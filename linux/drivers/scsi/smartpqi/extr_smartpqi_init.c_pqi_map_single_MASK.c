
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pqi_sg_descriptor {int flags; int length; int address; } ;
struct pci_dev {int dev; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef scalar_t__ dma_addr_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,void*,size_t,int) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (size_t,int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_3,
 struct pqi_sg_descriptor *VAR_4, void *VAR_5,
 size_t VAR_6, enum dma_data_direction VAR_7)
{
 dma_addr_t VAR_8;

 if (!VAR_5 || VAR_6 == 0 || VAR_7 == VAR_1)
  return 0;

 VAR_8 = FUNC_0(&VAR_3->dev, VAR_5, VAR_6,
  VAR_7);
 if (FUNC_1(&VAR_3->dev, VAR_8))
  return -VAR_2;

 FUNC_3((u64)VAR_8, &VAR_4->address);
 FUNC_2(VAR_6, &VAR_4->length);
 FUNC_2(VAR_0, &VAR_4->flags);

 return 0;
}
