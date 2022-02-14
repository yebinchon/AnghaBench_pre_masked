
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int list; } ;
struct perf_event {TYPE_1__ addr_filters; scalar_t__ parent; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct perf_event*) ;
 int VAR_0 ;
 int FUNC_3 (struct list_head*,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct perf_event *VAR_1,
         struct list_head *VAR_2)
{
 unsigned long VAR_3;
 FUNC_0(VAR_0);

 if (!FUNC_2(VAR_1))
  return;


 if (VAR_1->parent)
  return;

 FUNC_5(&VAR_1->addr_filters.lock, VAR_3);

 FUNC_4(&VAR_1->addr_filters.list, &VAR_0);
 if (VAR_2)
  FUNC_3(VAR_2, &VAR_1->addr_filters.list);

 FUNC_6(&VAR_1->addr_filters.lock, VAR_3);

 FUNC_1(&VAR_0);
}
