
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct superio_struct {scalar_t__ io; } ;
struct parport {scalar_t__ base; } ;


 int VAR_0 ;
 struct superio_struct* VAR_1 ;

__attribute__((used)) static struct superio_struct *FUNC_0(struct parport *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_1[VAR_3].io == VAR_2->base)
   return &VAR_1[VAR_3];
 return ((void*)0);
}
