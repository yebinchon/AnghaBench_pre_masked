
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rxq {int queue_size; int read; int write; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const struct iwl_rxq *VAR_0)
{

 FUNC_0(VAR_0->queue_size & (VAR_0->queue_size - 1));







 return (VAR_0->read - VAR_0->write - 1) & (VAR_0->queue_size - 1);
}
