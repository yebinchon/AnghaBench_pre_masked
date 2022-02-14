
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct pulse_elem {int head; void* ts; } ;
struct pri_detector {scalar_t__ count; scalar_t__ max_count; void* last_ts; int pulses; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 struct pulse_elem* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 struct pulse_elem* FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct pri_detector*) ;
 int FUNC_6 (struct pri_detector*) ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_7(struct pri_detector *VAR_4, u64 VAR_5)
{
 struct pulse_elem *VAR_6 = FUNC_4();
 if (VAR_6 == ((void*)0)) {
  VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_0);
  if (VAR_6 == ((void*)0)) {
   FUNC_0(VAR_1);
   return 0;
  }
  FUNC_0(VAR_2);
  FUNC_0(VAR_3);
 }
 FUNC_1(&VAR_6->head);
 VAR_6->ts = VAR_5;
 FUNC_3(&VAR_6->head, &VAR_4->pulses);
 VAR_4->count++;
 VAR_4->last_ts = VAR_5;
 FUNC_5(VAR_4);
 if (VAR_4->count >= VAR_4->max_count)
  FUNC_6(VAR_4);
 return 1;
}
