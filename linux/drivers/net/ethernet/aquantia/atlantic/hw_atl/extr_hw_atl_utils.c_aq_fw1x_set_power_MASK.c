
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int pattern_mask; } ;
struct hw_atl_utils_fw_rpc {TYPE_2__ msg_enable_wakeup; int msg_id; } ;
struct aq_hw_s {TYPE_1__* aq_nic_cfg; } ;
struct TYPE_3__ {int wol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct aq_hw_s*,int,int *) ;
 int FUNC_1 (struct aq_hw_s*,unsigned int) ;
 int FUNC_2 (struct aq_hw_s*,struct hw_atl_utils_fw_rpc**) ;
 int FUNC_3 (struct aq_hw_s*,int ) ;
 int FUNC_4 (struct aq_hw_s*,int ) ;
 int FUNC_5 (struct hw_atl_utils_fw_rpc*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct aq_hw_s *VAR_3, unsigned int VAR_4,
        u8 *VAR_5)
{
 struct hw_atl_utils_fw_rpc *VAR_6 = ((void*)0);
 unsigned int VAR_7 = 0U;
 int VAR_8 = 0;

 if (VAR_3->aq_nic_cfg->wol & VAR_0) {
  VAR_8 = FUNC_0(VAR_3, 1, VAR_5);

  if (VAR_8 < 0)
   goto err_exit;

  VAR_7 = sizeof(VAR_6->msg_id) +
      sizeof(VAR_6->msg_enable_wakeup);

  VAR_8 = FUNC_2(VAR_3, &VAR_6);

  if (VAR_8 < 0)
   goto err_exit;

  FUNC_5(VAR_6, 0, VAR_7);

  VAR_6->msg_id = VAR_1;
  VAR_6->msg_enable_wakeup.pattern_mask = 0x00000002;

  VAR_8 = FUNC_1(VAR_3, VAR_7);
  if (VAR_8 < 0)
   goto err_exit;
 }
 FUNC_3(VAR_3, 0);
 FUNC_4(VAR_3, VAR_2);

err_exit:
 return VAR_8;
}
