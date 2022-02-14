
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_ctrl {unsigned long long cap; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct nvmet_ctrl *VAR_1)
{

 VAR_1->cap = (1ULL << 37);

 VAR_1->cap |= (15ULL << 24);

 VAR_1->cap |= VAR_0 - 1;
}
