
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int cpu; } ;
struct perf_addr_filter {int entry; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 struct perf_addr_filter* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int *,struct list_head*) ;

__attribute__((used)) static struct perf_addr_filter *
FUNC_4(struct perf_event *VAR_1, struct list_head *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1->cpu == -1 ? 0 : VAR_1->cpu);
 struct perf_addr_filter *VAR_4;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0, VAR_3);
 if (!VAR_4)
  return ((void*)0);

 FUNC_0(&VAR_4->entry);
 FUNC_3(&VAR_4->entry, VAR_2);

 return VAR_4;
}
