
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ism_dev {scalar_t__ sba_dma_addr; int * sba; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int *,scalar_t__) ;
 int FUNC_1 (struct ism_dev*,int ) ;

__attribute__((used)) static int FUNC_2(struct ism_dev *VAR_4)
{
 int VAR_5;

 if (!VAR_4->sba)
  return 0;

 VAR_5 = FUNC_1(VAR_4, VAR_2);
 if (VAR_5 && VAR_5 != VAR_1)
  return -VAR_0;

 FUNC_0(&VAR_4->pdev->dev, VAR_3,
     VAR_4->sba, VAR_4->sba_dma_addr);

 VAR_4->sba = ((void*)0);
 VAR_4->sba_dma_addr = 0;

 return 0;
}
