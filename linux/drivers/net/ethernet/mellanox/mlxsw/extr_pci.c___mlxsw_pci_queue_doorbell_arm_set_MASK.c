
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlxsw_pci_queue {size_t type; int num; } ;
struct mlxsw_pci {int doorbell_offset; } ;


 int FUNC_0 (int ,int ,int ) ;
 int * VAR_0 ;
 int FUNC_1 (struct mlxsw_pci*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mlxsw_pci *VAR_1,
            struct mlxsw_pci_queue *VAR_2,
            u16 VAR_3)
{
 FUNC_1(VAR_1,
     FUNC_0(VAR_1->doorbell_offset,
       VAR_0[VAR_2->type],
       VAR_2->num), VAR_3);
}
