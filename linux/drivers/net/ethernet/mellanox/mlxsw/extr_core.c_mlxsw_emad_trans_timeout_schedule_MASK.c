
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_reg_trans {int timeout_dw; TYPE_1__* core; } ;
struct TYPE_2__ {int emad_wq; scalar_t__ fw_flash_in_progress; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct mlxsw_reg_trans *VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_1);

 if (VAR_2->core->fw_flash_in_progress)
  VAR_3 = FUNC_0(VAR_0);

 FUNC_1(VAR_2->core->emad_wq, &VAR_2->timeout_dw, VAR_3);
}
