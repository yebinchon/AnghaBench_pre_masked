
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct pasemi_mac {int * rx; TYPE_1__* dma_pdev; } ;
struct TYPE_4__ {int chan; int ring_info; int buf_dma; int buffers; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pasemi_mac*) ;
 TYPE_2__* FUNC_4 (struct pasemi_mac*) ;

__attribute__((used)) static void FUNC_5(struct pasemi_mac *VAR_1)
{
 FUNC_3(VAR_1);

 FUNC_0(&VAR_1->dma_pdev->dev, VAR_0 * sizeof(u64),
     FUNC_4(VAR_1)->buffers, FUNC_4(VAR_1)->buf_dma);

 FUNC_1(FUNC_4(VAR_1)->ring_info);
 FUNC_2(&FUNC_4(VAR_1)->chan);
 VAR_1->rx = ((void*)0);
}
