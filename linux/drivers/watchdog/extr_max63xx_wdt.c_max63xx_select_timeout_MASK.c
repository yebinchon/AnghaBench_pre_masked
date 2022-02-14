
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max63xx_timeout {int twd; scalar_t__ tdelay; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static struct max63xx_timeout *
FUNC_0(struct max63xx_timeout *VAR_1, int VAR_2)
{
 while (VAR_1->twd) {
  if (VAR_2 <= VAR_1->twd) {
   if (VAR_0 && VAR_1->tdelay == 0)
    return VAR_1;

   if (!VAR_0)
    return VAR_1;
  }

  VAR_1++;
 }

 return ((void*)0);
}
