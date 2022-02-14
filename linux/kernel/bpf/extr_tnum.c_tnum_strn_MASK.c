
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tnum {int mask; int value; } ;


 int FUNC_0 (char*,size_t,char*,int ,int ) ;

int FUNC_1(char *VAR_0, size_t VAR_1, struct tnum VAR_2)
{
 return FUNC_0(VAR_0, VAR_1, "(%#llx; %#llx)", VAR_2.value, VAR_2.mask);
}
