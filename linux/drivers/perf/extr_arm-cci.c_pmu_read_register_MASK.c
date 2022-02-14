
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cci_pmu {int model; scalar_t__ base; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_2(struct cci_pmu *VAR_0, int VAR_1, unsigned int VAR_2)
{
 return FUNC_1(VAR_0->base +
        FUNC_0(VAR_0->model, VAR_1) + VAR_2);
}
