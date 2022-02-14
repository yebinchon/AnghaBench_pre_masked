
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct et8ek8_reglist {scalar_t__ type; } ;
struct et8ek8_meta_reglist {TYPE_1__* reglist; } ;
struct TYPE_2__ {struct et8ek8_reglist* ptr; } ;



__attribute__((used)) static struct et8ek8_reglist *FUNC_0(
  struct et8ek8_meta_reglist *VAR_0,
  u16 VAR_1)
{
 struct et8ek8_reglist **VAR_2 = &VAR_0->reglist[0].ptr;

 while (*VAR_2) {
  if ((*VAR_2)->type == VAR_1)
   return *VAR_2;

  VAR_2++;
 }

 return ((void*)0);
}
