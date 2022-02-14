
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ec_event_queue {int dummy; } ;
typedef struct ec_event_queue ec_event ;


 struct ec_event_queue* FUNC_0 (struct ec_event_queue*) ;
 int FUNC_1 (struct ec_event_queue*) ;

__attribute__((used)) static void FUNC_2(struct ec_event_queue *VAR_0)
{
 struct ec_event *VAR_1;

 while ((VAR_1 = FUNC_0(VAR_0)) != ((void*)0))
  FUNC_1(VAR_1);

 FUNC_1(VAR_0);
}
