
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slic_rx_queue {unsigned int len; struct slic_rx_buffer* rxbuffs; } ;
struct slic_rx_buffer {int skb; } ;
struct slic_device {TYPE_1__* pdev; struct slic_rx_queue rxq; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct slic_rx_buffer*,int ) ;
 int FUNC_2 (struct slic_rx_buffer*,int ) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (struct slic_rx_buffer*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct slic_device *VAR_3)
{
 struct slic_rx_queue *VAR_4 = &VAR_3->rxq;
 struct slic_rx_buffer *VAR_5;
 unsigned int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_4->len; VAR_6++) {
  VAR_5 = &VAR_4->rxbuffs[VAR_6];

  if (!VAR_5->skb)
   continue;

  FUNC_3(&VAR_3->pdev->dev,
     FUNC_1(VAR_5, VAR_1),
     FUNC_2(VAR_5, VAR_2),
     VAR_0);
  FUNC_0(VAR_5->skb);
 }
 FUNC_4(VAR_4->rxbuffs);
}
