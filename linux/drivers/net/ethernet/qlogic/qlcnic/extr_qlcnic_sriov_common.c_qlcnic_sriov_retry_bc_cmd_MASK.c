
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct qlcnic_bc_trans {int trans_state; TYPE_1__* vf; } ;
struct qlcnic_adapter {scalar_t__ fw_fail_cnt; int ahw; } ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct qlcnic_adapter *VAR_6,
         struct qlcnic_bc_trans *VAR_7)
{
 u8 VAR_8 = VAR_3;
 u32 VAR_9;

 VAR_9 = FUNC_0(VAR_6->ahw, VAR_2);
 if (VAR_9 == VAR_1) {
  FUNC_2(20);
  FUNC_1(VAR_4, &VAR_7->vf->state);
  VAR_7->trans_state = VAR_5;
  if (++VAR_6->fw_fail_cnt > VAR_8)
   return -VAR_0;
  else
   return 0;
 }

 return -VAR_0;
}
