
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fimc_is {size_t config_index; int slock; struct chain_config* config; } ;
struct chain_config {int * p_region_index; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

unsigned int FUNC_3(struct fimc_is *VAR_0)
{
 struct chain_config *VAR_1 = &VAR_0->config[VAR_0->config_index];
 unsigned long VAR_2;
 unsigned int VAR_3;

 FUNC_1(&VAR_0->slock, VAR_2);
 VAR_3 = FUNC_0(VAR_1->p_region_index[0]);
 VAR_3 += FUNC_0(VAR_1->p_region_index[1]);
 FUNC_2(&VAR_0->slock, VAR_2);

 return VAR_3;
}
