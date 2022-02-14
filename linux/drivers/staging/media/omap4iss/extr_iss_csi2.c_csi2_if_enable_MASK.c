
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct iss_csi2_ctrl_cfg {scalar_t__ if_enable; } ;
struct iss_csi2_device {int regs1; int iss; struct iss_csi2_ctrl_cfg ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct iss_csi2_device *VAR_2, u8 VAR_3)
{
 struct iss_csi2_ctrl_cfg *VAR_4 = &VAR_2->ctrl;

 FUNC_0(VAR_2->iss, VAR_2->regs1, VAR_0, VAR_1,
         VAR_3 ? VAR_1 : 0);

 VAR_4->if_enable = VAR_3;
}
