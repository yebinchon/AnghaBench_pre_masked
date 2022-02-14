
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76_wcid {int rssi; int inactive_count; } ;
struct mt76_dev {unsigned long* wcid_mask; int rx_lock; int * wcid; } ;
typedef int s8 ;


 int FUNC_0 (unsigned long*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct mt76_wcid* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct mt76_dev *VAR_1)
{
 struct mt76_wcid *VAR_2;
 int VAR_3, VAR_4, VAR_5 = 0;
 s8 VAR_6;

 FUNC_2();
 FUNC_5();

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->wcid_mask); VAR_3++) {
  unsigned long VAR_7 = VAR_1->wcid_mask[VAR_3];

  if (!VAR_7)
   continue;

  for (VAR_4 = VAR_3 * VAR_0; VAR_7; VAR_4++, VAR_7 >>= 1) {
   if (!(VAR_7 & 1))
    continue;

   VAR_2 = FUNC_4(VAR_1->wcid[VAR_4]);
   if (!VAR_2)
    continue;

   FUNC_7(&VAR_1->rx_lock);
   if (VAR_2->inactive_count++ < 5)
    VAR_6 = -FUNC_1(&VAR_2->rssi);
   else
    VAR_6 = 0;
   FUNC_8(&VAR_1->rx_lock);

   if (VAR_6 < VAR_5)
    VAR_5 = VAR_6;
  }
 }

 FUNC_6();
 FUNC_3();

 return VAR_5;
}
