
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ec_event_queue {int capacity; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ec_event_queue* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ec_event_queue*,int ,int) ;

__attribute__((used)) static struct ec_event_queue *FUNC_2(int VAR_2)
{
 struct ec_event_queue *VAR_3;

 VAR_3 = FUNC_0(FUNC_1(VAR_3, VAR_1, VAR_2), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->capacity = VAR_2;

 return VAR_3;
}
