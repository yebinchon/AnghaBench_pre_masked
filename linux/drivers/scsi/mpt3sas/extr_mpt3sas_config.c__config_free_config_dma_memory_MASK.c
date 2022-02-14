
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct config_request {scalar_t__ sz; int page_dma; int page; } ;
struct MPT3SAS_ADAPTER {scalar_t__ config_page_sz; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,scalar_t__,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct MPT3SAS_ADAPTER *VAR_0,
 struct config_request *VAR_1)
{
 if (VAR_1->sz > VAR_0->config_page_sz)
  FUNC_0(&VAR_0->pdev->dev, VAR_1->sz, VAR_1->page,
      VAR_1->page_dma);
}
