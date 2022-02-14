
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fimc_md {void** wbclk; TYPE_1__* camclk; } ;
struct TYPE_2__ {void* clock; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static void FUNC_3(struct fimc_md *VAR_3)
{
 int VAR_4 = VAR_1;

 while (--VAR_4 >= 0) {
  if (FUNC_1(VAR_3->camclk[VAR_4].clock))
   continue;
  FUNC_2(VAR_3->camclk[VAR_4].clock);
  VAR_3->camclk[VAR_4].clock = FUNC_0(-VAR_0);
 }


 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (FUNC_1(VAR_3->wbclk[VAR_4]))
   continue;
  FUNC_2(VAR_3->wbclk[VAR_4]);
  VAR_3->wbclk[VAR_4] = FUNC_0(-VAR_0);
 }
}
