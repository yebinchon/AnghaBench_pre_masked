
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ag71xx_ring {scalar_t__ descs_dma; void* descs_cpu; int * buf; int order; } ;
struct ag71xx {TYPE_1__* pdev; struct ag71xx_ring rx_ring; struct ag71xx_ring tx_ring; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ag71xx*) ;
 int FUNC_2 (struct ag71xx*) ;
 void* FUNC_3 (int *,int,scalar_t__*,int ) ;
 int * FUNC_4 (int,int,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct ag71xx *VAR_3)
{
 struct ag71xx_ring *VAR_4 = &VAR_3->tx_ring;
 struct ag71xx_ring *VAR_5 = &VAR_3->rx_ring;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_4->order) + FUNC_0(VAR_5->order);
 VAR_7 = FUNC_0(VAR_4->order);

 VAR_4->buf = FUNC_4(VAR_6, sizeof(*VAR_4->buf), VAR_2);
 if (!VAR_4->buf)
  return -VAR_1;

 VAR_4->descs_cpu = FUNC_3(&VAR_3->pdev->dev,
        VAR_6 * VAR_0,
        &VAR_4->descs_dma, VAR_2);
 if (!VAR_4->descs_cpu) {
  FUNC_5(VAR_4->buf);
  VAR_4->buf = ((void*)0);
  return -VAR_1;
 }

 VAR_5->buf = &VAR_4->buf[VAR_7];
 VAR_5->descs_cpu = ((void *)VAR_4->descs_cpu) + VAR_7 * VAR_0;
 VAR_5->descs_dma = VAR_4->descs_dma + VAR_7 * VAR_0;

 FUNC_2(VAR_3);
 return FUNC_1(VAR_3);
}
