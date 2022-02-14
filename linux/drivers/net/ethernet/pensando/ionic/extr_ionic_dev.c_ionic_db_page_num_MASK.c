
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ionic_lif {int hw_index; int dbid_count; } ;



int FUNC_0(struct ionic_lif *VAR_0, int VAR_1)
{
 return (VAR_0->hw_index * VAR_0->dbid_count) + VAR_1;
}
