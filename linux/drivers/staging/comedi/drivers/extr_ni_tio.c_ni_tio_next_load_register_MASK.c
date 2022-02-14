
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {unsigned int counter_index; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (struct ni_gpct*,int ) ;

__attribute__((used)) static unsigned int FUNC_5(struct ni_gpct *VAR_0)
{
 unsigned int VAR_1 = VAR_0->counter_index;
 unsigned int VAR_2 = FUNC_4(VAR_0, FUNC_3(VAR_1));

 return (VAR_2 & FUNC_0(VAR_1))
   ? FUNC_2(VAR_1)
   : FUNC_1(VAR_1);
}
