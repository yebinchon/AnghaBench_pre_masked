
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int out_param; int status; } ;
struct TYPE_4__ {int wait_done; int wait; TYPE_1__ comp; } ;
struct mlxsw_pci {TYPE_2__ cmd; } ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct mlxsw_pci *VAR_0, char *VAR_1)
{
 VAR_0->cmd.comp.status = FUNC_2(VAR_1);
 VAR_0->cmd.comp.out_param =
  ((u64) FUNC_0(VAR_1)) << 32 |
  FUNC_1(VAR_1);
 VAR_0->cmd.wait_done = 1;
 FUNC_3(&VAR_0->cmd.wait);
}
