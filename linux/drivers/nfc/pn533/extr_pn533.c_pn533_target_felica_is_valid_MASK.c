
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pn533_target_felica {scalar_t__ opcode; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct pn533_target_felica *VAR_1,
       int VAR_2)
{
 if (VAR_2 < sizeof(struct pn533_target_felica))
  return 0;

 if (VAR_1->opcode != VAR_0)
  return 0;

 return 1;
}
