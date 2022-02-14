
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_queue {int* in_flight; } ;


 size_t VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct mmc_queue *VAR_1)
{

 return VAR_1->in_flight[VAR_0];
}
