
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsnotify_group {scalar_t__ priority; } ;



int FUNC_0(struct fsnotify_group *VAR_0, struct fsnotify_group *VAR_1)
{
 if (VAR_0 == VAR_1)
  return 0;
 if (!VAR_0)
  return 1;
 if (!VAR_1)
  return -1;
 if (VAR_0->priority < VAR_1->priority)
  return 1;
 if (VAR_0->priority > VAR_1->priority)
  return -1;
 if (VAR_0 < VAR_1)
  return 1;
 return -1;
}
