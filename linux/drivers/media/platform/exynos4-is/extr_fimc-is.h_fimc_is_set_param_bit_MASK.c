
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fimc_is {size_t config_index; struct chain_config* config; } ;
struct chain_config {int * p_region_index; } ;


 int FUNC_0 (int,int *) ;

__attribute__((used)) static inline void FUNC_1(struct fimc_is *VAR_0, int VAR_1)
{
 struct chain_config *VAR_2 = &VAR_0->config[VAR_0->config_index];

 FUNC_0(VAR_1, &VAR_2->p_region_index[0]);
}
