
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsi_hw {struct rsi_debugfs* dfsentry; } ;
struct rsi_debugfs {int subdir; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct rsi_hw *VAR_0)
{
 struct rsi_debugfs *VAR_1 = VAR_0->dfsentry;

 if (!VAR_1)
  return;

 FUNC_0(VAR_1->subdir);
}
