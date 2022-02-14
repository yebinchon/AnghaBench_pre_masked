
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fimc_lite {int clock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct fimc_lite *VAR_1)
{
 if (FUNC_1(VAR_1->clock))
  return;

 FUNC_2(VAR_1->clock);
 VAR_1->clock = FUNC_0(-VAR_0);
}
