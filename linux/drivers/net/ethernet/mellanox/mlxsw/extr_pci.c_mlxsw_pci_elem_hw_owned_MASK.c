
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_pci_queue {int consumer_counter; int count; } ;



__attribute__((used)) static bool FUNC_0(struct mlxsw_pci_queue *VAR_0, bool VAR_1)
{
 return VAR_1 != !!(VAR_0->consumer_counter & VAR_0->count);
}
