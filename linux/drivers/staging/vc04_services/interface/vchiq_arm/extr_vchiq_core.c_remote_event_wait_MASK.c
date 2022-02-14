
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
struct remote_event {int armed; scalar_t__ fired; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 () ;

__attribute__((used)) static inline int
FUNC_3(wait_queue_head_t *VAR_1, struct remote_event *VAR_2)
{
 if (!VAR_2->fired) {
  VAR_2->armed = 1;
  FUNC_0(VAR_0);
  if (FUNC_1(*VAR_1, VAR_2->fired)) {
   VAR_2->armed = 0;
   return 0;
  }
  VAR_2->armed = 0;
  FUNC_2();
 }

 VAR_2->fired = 0;
 return 1;
}
