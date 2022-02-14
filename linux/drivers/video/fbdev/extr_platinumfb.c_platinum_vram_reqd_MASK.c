
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hres; int vres; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static inline int FUNC_0(int VAR_3, int VAR_4)
{
 int VAR_5 = VAR_2[VAR_3-1].hres * (1<<VAR_4);

 if ((VAR_3 == VAR_1) && (VAR_4 > VAR_0))
  VAR_5 += 0x10;
 else
  VAR_5 += 0x20;

 return VAR_2[VAR_3-1].vres * VAR_5 + 0x1000;
}
