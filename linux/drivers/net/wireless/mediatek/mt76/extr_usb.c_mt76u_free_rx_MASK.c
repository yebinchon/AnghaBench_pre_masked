
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_4__ {int pagecnt_bias; int va; } ;
struct mt76_queue {int ndesc; TYPE_2__ rx_page; TYPE_1__* entry; } ;
struct mt76_dev {struct mt76_queue* q_rx; } ;
struct TYPE_3__ {int urb; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct page*,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (int ) ;
 struct page* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct mt76_dev *VAR_1)
{
 struct mt76_queue *VAR_2 = &VAR_1->q_rx[VAR_0];
 struct page *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->ndesc; VAR_4++)
  FUNC_2(VAR_2->entry[VAR_4].urb);

 if (!VAR_2->rx_page.va)
  return;

 VAR_3 = FUNC_3(VAR_2->rx_page.va);
 FUNC_0(VAR_3, VAR_2->rx_page.pagecnt_bias);
 FUNC_1(&VAR_2->rx_page, 0, sizeof(VAR_2->rx_page));
}
