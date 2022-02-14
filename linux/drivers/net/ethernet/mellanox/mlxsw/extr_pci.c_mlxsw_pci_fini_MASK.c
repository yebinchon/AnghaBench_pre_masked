
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int in_mbox; int out_mbox; } ;
struct mlxsw_pci {TYPE_1__ cmd; int pdev; } ;


 int FUNC_0 (int ,struct mlxsw_pci*) ;
 int FUNC_1 (struct mlxsw_pci*) ;
 int FUNC_2 (struct mlxsw_pci*) ;
 int FUNC_3 (struct mlxsw_pci*) ;
 int FUNC_4 (struct mlxsw_pci*,int *) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_0)
{
 struct mlxsw_pci *VAR_1 = VAR_0;

 FUNC_0(FUNC_5(VAR_1->pdev, 0), VAR_1);
 FUNC_1(VAR_1);
 FUNC_3(VAR_1);
 FUNC_2(VAR_1);
 FUNC_4(VAR_1, &VAR_1->cmd.out_mbox);
 FUNC_4(VAR_1, &VAR_1->cmd.in_mbox);
}
