
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct badrange_entry {int list; void* length; void* start; } ;
struct badrange {int list; int lock; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct badrange *VAR_0,
  struct badrange_entry *VAR_1, u64 VAR_2, u64 VAR_3)
{
 FUNC_1(&VAR_0->lock);
 VAR_1->start = VAR_2;
 VAR_1->length = VAR_3;
 FUNC_0(&VAR_1->list, &VAR_0->list);
}
