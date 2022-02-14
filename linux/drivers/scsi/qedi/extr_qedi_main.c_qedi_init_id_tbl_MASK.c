
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct qedi_portid_tbl {int table; int lock; void* next; void* max; void* start; } ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct qedi_portid_tbl *VAR_2, u16 VAR_3,
       u16 VAR_4, u16 VAR_5)
{
 VAR_2->start = VAR_4;
 VAR_2->max = VAR_3;
 VAR_2->next = VAR_5;
 FUNC_2(&VAR_2->lock);
 VAR_2->table = FUNC_1(FUNC_0(VAR_3), sizeof(long), VAR_1);
 if (!VAR_2->table)
  return -VAR_0;

 return 0;
}
