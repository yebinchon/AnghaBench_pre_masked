
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ftmac100_rxdes {int dummy; } ;
struct ftmac100_descs {int dummy; } ;
struct ftmac100 {TYPE_1__* descs; int descs_dma_addr; int dev; } ;
struct TYPE_2__ {int * txdes; struct ftmac100_rxdes* rxdes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int ,int,int *,int ) ;
 scalar_t__ FUNC_1 (struct ftmac100*,struct ftmac100_rxdes*,int ) ;
 int FUNC_2 (struct ftmac100*) ;
 int FUNC_3 (struct ftmac100_rxdes*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ftmac100 *VAR_4)
{
 int VAR_5;

 VAR_4->descs = FUNC_0(VAR_4->dev,
      sizeof(struct ftmac100_descs),
      &VAR_4->descs_dma_addr, VAR_1);
 if (!VAR_4->descs)
  return -VAR_0;


 FUNC_3(&VAR_4->descs->rxdes[VAR_2 - 1]);

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  struct ftmac100_rxdes *VAR_6 = &VAR_4->descs->rxdes[VAR_5];

  if (FUNC_1(VAR_4, VAR_6, VAR_1))
   goto err;
 }


 FUNC_4(&VAR_4->descs->txdes[VAR_3 - 1]);
 return 0;

err:
 FUNC_2(VAR_4);
 return -VAR_0;
}
