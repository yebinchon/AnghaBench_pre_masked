
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u32 ;
struct dma_info {int core; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static bool FUNC_3(struct dma_info *VAR_1, uint VAR_2)
{
 u32 VAR_3;
 FUNC_2(VAR_1->core, VAR_2, VAR_0);
 VAR_3 = FUNC_1(VAR_1->core, VAR_2);
 FUNC_0(VAR_1->core, VAR_2, ~VAR_0);
 return (VAR_3 & VAR_0) == VAR_0;
}
