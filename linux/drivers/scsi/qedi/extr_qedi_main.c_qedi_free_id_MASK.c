
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct qedi_portid_tbl {scalar_t__ start; scalar_t__ max; int table; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;

void FUNC_1(struct qedi_portid_tbl *VAR_1, u16 VAR_2)
{
 if (VAR_2 == VAR_0)
  return;

 VAR_2 -= VAR_1->start;
 if (VAR_2 >= VAR_1->max)
  return;

 FUNC_0(VAR_2, VAR_1->table);
}
