
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btc_coexist {int * adapter; int binded; } ;



__attribute__((used)) static bool FUNC_0(struct btc_coexist *VAR_0)
{
 if (!VAR_0->binded || ((void*)0) == VAR_0->adapter)
  return 0;

 return 1;
}
