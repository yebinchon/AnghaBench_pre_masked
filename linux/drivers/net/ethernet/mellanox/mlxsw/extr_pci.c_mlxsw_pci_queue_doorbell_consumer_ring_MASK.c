
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_pci_queue {scalar_t__ count; scalar_t__ consumer_counter; } ;
struct mlxsw_pci {int dummy; } ;


 int FUNC_0 (struct mlxsw_pci*,struct mlxsw_pci_queue*,scalar_t__) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct mlxsw_pci *VAR_0,
         struct mlxsw_pci_queue *VAR_1)
{
 FUNC_1();
 FUNC_0(VAR_0, VAR_1,
           VAR_1->consumer_counter + VAR_1->count);
}
