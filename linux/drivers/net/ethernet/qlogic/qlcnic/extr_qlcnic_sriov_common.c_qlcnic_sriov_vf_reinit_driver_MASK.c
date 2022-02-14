
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_1__* ahw; scalar_t__ need_fw_reset; } ;
struct TYPE_2__ {int mailbox; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qlcnic_adapter*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct qlcnic_adapter*,int) ;
 int FUNC_3 (struct qlcnic_adapter*,int ) ;
 int FUNC_4 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_5(struct qlcnic_adapter *VAR_2)
{
 int VAR_3;

 VAR_2->need_fw_reset = 0;
 FUNC_1(VAR_2->ahw->mailbox);
 FUNC_0(VAR_2);

 VAR_3 = FUNC_2(VAR_2, 1);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_3(VAR_2, VAR_0);
 if (VAR_3)
  goto err_out_cleanup_bc_intr;

 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3)
  goto err_out_term_channel;

 return 0;

err_out_term_channel:
 FUNC_3(VAR_2, VAR_1);

err_out_cleanup_bc_intr:
 FUNC_2(VAR_2, 0);
 return VAR_3;
}
