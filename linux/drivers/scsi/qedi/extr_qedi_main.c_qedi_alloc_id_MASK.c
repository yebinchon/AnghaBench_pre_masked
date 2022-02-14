
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct qedi_portid_tbl {scalar_t__ start; scalar_t__ max; int lock; int table; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int ) ;

int FUNC_4(struct qedi_portid_tbl *VAR_0, u16 VAR_1)
{
 int VAR_2 = -1;

 VAR_1 -= VAR_0->start;
 if (VAR_1 >= VAR_0->max)
  return VAR_2;

 FUNC_1(&VAR_0->lock);
 if (!FUNC_3(VAR_1, VAR_0->table)) {
  FUNC_0(VAR_1, VAR_0->table);
  VAR_2 = 0;
 }
 FUNC_2(&VAR_0->lock);
 return VAR_2;
}
