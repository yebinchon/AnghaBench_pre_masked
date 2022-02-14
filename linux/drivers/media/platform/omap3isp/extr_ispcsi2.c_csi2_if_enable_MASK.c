
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct isp_device {int dummy; } ;
struct isp_csi2_ctrl_cfg {scalar_t__ if_enable; } ;
struct isp_csi2_device {int regs1; struct isp_csi2_ctrl_cfg ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct isp_device*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct isp_device *VAR_2,
      struct isp_csi2_device *VAR_3, u8 VAR_4)
{
 struct isp_csi2_ctrl_cfg *VAR_5 = &VAR_3->ctrl;

 FUNC_0(VAR_2, VAR_3->regs1, VAR_0, VAR_1,
   VAR_4 ? VAR_1 : 0);

 VAR_5->if_enable = VAR_4;
}
