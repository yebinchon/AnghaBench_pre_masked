
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct team_port {scalar_t__ priority; scalar_t__ index; } ;



__attribute__((used)) static bool FUNC_0(struct team_port *VAR_0,
            struct team_port *VAR_1)
{
 if (VAR_0->priority < VAR_1->priority)
  return 1;
 if (VAR_0->priority > VAR_1->priority)
  return 0;
 if (VAR_0->index < VAR_1->index)
  return 1;
 return 0;
}
