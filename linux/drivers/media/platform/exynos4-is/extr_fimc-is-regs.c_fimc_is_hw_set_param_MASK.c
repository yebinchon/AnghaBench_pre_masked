
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fimc_is {size_t config_index; unsigned int sensor_index; struct chain_config* config; } ;
struct chain_config {unsigned int* p_region_index; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (struct fimc_is*) ;
 int FUNC_2 (struct fimc_is*) ;
 int FUNC_3 (struct fimc_is*) ;
 int FUNC_4 (unsigned int,struct fimc_is*,int ) ;

int FUNC_5(struct fimc_is *VAR_1)
{
 struct chain_config *VAR_2 = &VAR_1->config[VAR_1->config_index];
 unsigned int VAR_3 = FUNC_1(VAR_1);

 FUNC_3(VAR_1);

 FUNC_4(VAR_0, VAR_1, FUNC_0(0));
 FUNC_4(VAR_1->sensor_index, VAR_1, FUNC_0(1));
 FUNC_4(VAR_1->config_index, VAR_1, FUNC_0(2));

 FUNC_4(VAR_3, VAR_1, FUNC_0(3));
 FUNC_4(VAR_2->p_region_index[0], VAR_1, FUNC_0(4));
 FUNC_4(VAR_2->p_region_index[1], VAR_1, FUNC_0(5));

 FUNC_2(VAR_1);
 return 0;
}
