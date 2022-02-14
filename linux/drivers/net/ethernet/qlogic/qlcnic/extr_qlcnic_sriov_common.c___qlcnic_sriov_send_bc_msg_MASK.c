
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct qlcnic_vf_info {int state; TYPE_1__* adapter; } ;
struct qlcnic_bc_trans {int trans_state; } ;
struct TYPE_2__ {scalar_t__ need_fw_reset; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct qlcnic_bc_trans*,int ) ;
 int FUNC_2 (struct qlcnic_bc_trans*,int ) ;
 int FUNC_3 (struct qlcnic_bc_trans*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct qlcnic_bc_trans *VAR_3,
          struct qlcnic_vf_info *VAR_4, u8 VAR_5)
{
 bool VAR_6 = 1;
 int VAR_7 = -VAR_0;

 while (VAR_6) {
  if (FUNC_4(VAR_2, &VAR_4->state) ||
      VAR_4->adapter->need_fw_reset)
   VAR_3->trans_state = 132;

  switch (VAR_3->trans_state) {
  case 130:
   VAR_3->trans_state = 129;
   if (FUNC_1(VAR_3, VAR_5))
    VAR_3->trans_state = 132;
   break;
  case 129:
   FUNC_2(VAR_3, VAR_5);
   break;
  case 128:
   FUNC_3(VAR_3);
   break;
  case 131:
   VAR_7 = 0;
   VAR_6 = 0;
   break;
  case 132:
   VAR_7 = -VAR_0;
   VAR_6 = 0;
   FUNC_0(VAR_1, &VAR_4->state);
   break;
  default:
   VAR_7 = -VAR_0;
   VAR_6 = 0;
  }
 }
 return VAR_7;
}
