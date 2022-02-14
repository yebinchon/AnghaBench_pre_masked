
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wakeup_source {int dummy; } ;
struct epitem {int dummy; } ;


 int FUNC_0 (struct wakeup_source*) ;
 struct wakeup_source* FUNC_1 (struct epitem*) ;

__attribute__((used)) static inline void FUNC_2(struct epitem *VAR_0)
{
 struct wakeup_source *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1)
  FUNC_0(VAR_1);
}
