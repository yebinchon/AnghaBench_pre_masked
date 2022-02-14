
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qedi_portid_tbl {int max; int next; int lock; scalar_t__ start; int table; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

u16 FUNC_5(struct qedi_portid_tbl *VAR_1)
{
 u16 VAR_2;

 FUNC_3(&VAR_1->lock);
 VAR_2 = FUNC_1(VAR_1->table, VAR_1->max, VAR_1->next);
 if (VAR_2 >= VAR_1->max) {
  VAR_2 = VAR_0;
  if (VAR_1->next != 0) {
   VAR_2 = FUNC_0(VAR_1->table, VAR_1->next);
   if (VAR_2 >= VAR_1->next)
    VAR_2 = VAR_0;
  }
 }

 if (VAR_2 < VAR_1->max) {
  FUNC_2(VAR_2, VAR_1->table);
  VAR_1->next = (VAR_2 + 1) & (VAR_1->max - 1);
  VAR_2 += VAR_1->start;
 }

 FUNC_4(&VAR_1->lock);

 return VAR_2;
}
