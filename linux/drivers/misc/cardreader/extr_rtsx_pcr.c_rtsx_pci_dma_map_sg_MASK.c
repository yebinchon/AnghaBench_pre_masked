
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct rtsx_pcr {TYPE_1__* pci; scalar_t__ remove_pci; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct scatterlist*,int,int) ;

int FUNC_1(struct rtsx_pcr *VAR_3, struct scatterlist *VAR_4,
  int VAR_5, bool VAR_6)
{
 enum dma_data_direction VAR_7 = VAR_6 ? VAR_0 : VAR_1;

 if (VAR_3->remove_pci)
  return -VAR_2;

 if ((VAR_4 == ((void*)0)) || (VAR_5 <= 0))
  return -VAR_2;

 return FUNC_0(&(VAR_3->pci->dev), VAR_4, VAR_5, VAR_7);
}
