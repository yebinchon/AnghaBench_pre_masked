
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct rtsx_pcr {TYPE_1__* pci; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct scatterlist*,int,int) ;

void FUNC_1(struct rtsx_pcr *VAR_2, struct scatterlist *VAR_3,
  int VAR_4, bool VAR_5)
{
 enum dma_data_direction VAR_6 = VAR_5 ? VAR_0 : VAR_1;

 FUNC_0(&(VAR_2->pci->dev), VAR_3, VAR_4, VAR_6);
}
