
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fimc_is {size_t config_index; struct chain_config* config; } ;
struct chain_config {int dummy; } ;



__attribute__((used)) static inline struct chain_config *FUNC_0(struct fimc_is *VAR_0)
{
 return &VAR_0->config[VAR_0->config_index];
}
