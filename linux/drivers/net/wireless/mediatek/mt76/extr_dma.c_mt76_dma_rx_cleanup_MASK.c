
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {int pagecnt_bias; int va; } ;
struct mt76_queue {TYPE_1__ rx_page; int lock; } ;
struct mt76_dev {int dummy; } ;


 int FUNC_0 (struct page*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 void* FUNC_2 (struct mt76_dev*,struct mt76_queue*,int,int *,int *,int*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct page* FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct mt76_dev *VAR_0, struct mt76_queue *VAR_1)
{
 struct page *VAR_2;
 void *VAR_3;
 bool VAR_4;

 FUNC_4(&VAR_1->lock);
 do {
  VAR_3 = FUNC_2(VAR_0, VAR_1, 1, ((void*)0), ((void*)0), &VAR_4);
  if (!VAR_3)
   break;

  FUNC_3(VAR_3);
 } while (1);
 FUNC_5(&VAR_1->lock);

 if (!VAR_1->rx_page.va)
  return;

 VAR_2 = FUNC_6(VAR_1->rx_page.va);
 FUNC_0(VAR_2, VAR_1->rx_page.pagecnt_bias);
 FUNC_1(&VAR_1->rx_page, 0, sizeof(VAR_1->rx_page));
}
