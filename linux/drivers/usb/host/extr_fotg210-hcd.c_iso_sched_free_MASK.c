
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fotg210_iso_stream {int free_list; } ;
struct fotg210_iso_sched {int td_list; } ;


 int FUNC_0 (struct fotg210_iso_sched*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct fotg210_iso_stream *VAR_0,
  struct fotg210_iso_sched *VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_1(&VAR_1->td_list, &VAR_0->free_list);
 FUNC_0(VAR_1);
}
