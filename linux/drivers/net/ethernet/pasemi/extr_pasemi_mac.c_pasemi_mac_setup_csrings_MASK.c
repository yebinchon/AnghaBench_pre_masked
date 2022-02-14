
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pasemi_mac {scalar_t__ type; int num_cs; void** cs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct pasemi_mac*) ;

__attribute__((used)) static void FUNC_1(struct pasemi_mac *VAR_2)
{
 int VAR_3;
 VAR_2->cs[0] = FUNC_0(VAR_2);
 if (VAR_2->type == VAR_0)
  VAR_2->cs[1] = FUNC_0(VAR_2);
 else
  VAR_2->cs[1] = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  if (VAR_2->cs[VAR_3])
   VAR_2->num_cs++;
}
