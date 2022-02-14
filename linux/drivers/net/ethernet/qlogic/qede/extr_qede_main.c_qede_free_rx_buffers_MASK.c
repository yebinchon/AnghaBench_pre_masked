
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct sw_rx_data {struct page* data; int mapping; } ;
struct qede_rx_queue {size_t sw_rx_cons; size_t sw_rx_prod; int data_direction; struct sw_rx_data* sw_rx_ring; } ;
struct qede_dev {TYPE_1__* pdev; } ;
struct page {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct qede_dev *VAR_2,
     struct qede_rx_queue *VAR_3)
{
 u16 VAR_4;

 for (VAR_4 = VAR_3->sw_rx_cons; VAR_4 != VAR_3->sw_rx_prod; VAR_4++) {
  struct sw_rx_data *VAR_5;
  struct page *VAR_6;

  VAR_5 = &VAR_3->sw_rx_ring[VAR_4 & VAR_0];
  VAR_6 = VAR_5->data;

  FUNC_1(&VAR_2->pdev->dev,
          VAR_5->mapping, VAR_1, VAR_3->data_direction);

  VAR_5->data = ((void*)0);
  FUNC_0(VAR_6);
 }
}
