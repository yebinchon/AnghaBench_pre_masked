
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_queue {int* in_flight; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct mmc_queue *VAR_2)
{
 return VAR_2->in_flight[VAR_1] +
        VAR_2->in_flight[VAR_0];
}
