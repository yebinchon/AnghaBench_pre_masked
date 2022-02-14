
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ key; scalar_t__* p; } ;
typedef TYPE_1__ Indirect ;



__attribute__((used)) static inline int FUNC_0(Indirect *VAR_0, Indirect *VAR_1)
{
 while (VAR_0 <= VAR_1 && VAR_0->key == *VAR_0->p)
  VAR_0++;
 return (VAR_0 > VAR_1);
}
