
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reserved_mem {scalar_t__ size; scalar_t__ base; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1(struct reserved_mem *VAR_2)
{
 VAR_0 = VAR_2->base;
 VAR_1 = VAR_2->size;

 FUNC_0(!(VAR_0 && VAR_1));

 return 0;
}
