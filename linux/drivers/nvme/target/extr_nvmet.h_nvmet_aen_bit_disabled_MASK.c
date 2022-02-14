
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvmet_ctrl {int aen_masked; int aen_enabled; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static inline bool FUNC_2(struct nvmet_ctrl *VAR_0, u32 VAR_1)
{
 if (!(FUNC_0(VAR_0->aen_enabled) & (1 << VAR_1)))
  return 1;
 return FUNC_1(VAR_1, &VAR_0->aen_masked);
}
