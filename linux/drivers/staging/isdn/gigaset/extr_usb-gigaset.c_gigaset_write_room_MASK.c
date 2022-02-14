
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cardstate {unsigned int cmdbytes; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct cardstate *VAR_1)
{
 unsigned VAR_2;

 VAR_2 = VAR_1->cmdbytes;
 return VAR_2 < VAR_0 ? VAR_0 - VAR_2 : 0;
}
