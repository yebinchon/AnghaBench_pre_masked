
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76x02_dev {int dummy; } ;
struct beacon_bc_data {int * tail; int q; struct mt76x02_dev* dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,struct beacon_bc_data*) ;
 int FUNC_3 (struct mt76x02_dev*) ;
 int FUNC_4 (int ,int) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;

void
FUNC_6(struct mt76x02_dev *VAR_2,
       struct beacon_bc_data *VAR_3,
       int VAR_4)
{
 int VAR_5, VAR_6;

 VAR_3->dev = VAR_2;
 FUNC_1(&VAR_3->q);

 do {
  VAR_6 = FUNC_5(&VAR_3->q);
  FUNC_2(FUNC_3(VAR_2),
   VAR_0,
   VAR_1, VAR_3);
 } while (VAR_6 != FUNC_5(&VAR_3->q) &&
   FUNC_5(&VAR_3->q) < VAR_4);

 if (!FUNC_5(&VAR_3->q))
  return;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3->tail); VAR_5++) {
  if (!VAR_3->tail[VAR_5])
   continue;
  FUNC_4(VAR_3->tail[VAR_5], 0);
 }
}
