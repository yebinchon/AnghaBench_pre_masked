
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siena_vf {int rxq_retry_count; int rxq_count; int txq_count; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;

__attribute__((used)) static bool FUNC_2(struct siena_vf *VAR_0)
{

 FUNC_1();

 return (!VAR_0->txq_count && !VAR_0->rxq_count) ||
  FUNC_0(&VAR_0->rxq_retry_count);
}
