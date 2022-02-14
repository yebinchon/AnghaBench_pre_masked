
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu {int dummy; } ;
struct l3cache_pmu {scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct l3cache_pmu* FUNC_0 (struct pmu*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct pmu *VAR_2)
{
 struct l3cache_pmu *VAR_3 = FUNC_0(VAR_2);


 FUNC_1();

 FUNC_2(VAR_0, VAR_3->regs + VAR_1);
}
