
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ispstat {TYPE_1__* buf; } ;
struct TYPE_2__ {int empty; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ispstat *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_1->buf[VAR_2].empty = 1;
}
