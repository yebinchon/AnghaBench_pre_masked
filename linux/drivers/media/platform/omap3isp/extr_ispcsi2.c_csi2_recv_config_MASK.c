
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct isp_device {int dummy; } ;
struct isp_csi2_device {int regs1; } ;
struct isp_csi2_ctrl_cfg {int vp_out_ctrl; scalar_t__ ecc_enable; scalar_t__ vp_only_enable; scalar_t__ vp_clk_enable; scalar_t__ frame_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct isp_device*,int ,int ) ;
 int FUNC_1 (struct isp_device*,int,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct isp_device *VAR_7,
        struct isp_csi2_device *VAR_8,
        struct isp_csi2_ctrl_cfg *VAR_9)
{
 u32 VAR_10;

 VAR_10 = FUNC_0(VAR_7, VAR_8->regs1, VAR_0);

 if (VAR_9->frame_mode)
  VAR_10 |= VAR_2;
 else
  VAR_10 &= ~VAR_2;

 if (VAR_9->vp_clk_enable)
  VAR_10 |= VAR_3;
 else
  VAR_10 &= ~VAR_3;

 if (VAR_9->vp_only_enable)
  VAR_10 |= VAR_4;
 else
  VAR_10 &= ~VAR_4;

 VAR_10 &= ~VAR_5;
 VAR_10 |= VAR_9->vp_out_ctrl << VAR_6;

 if (VAR_9->ecc_enable)
  VAR_10 |= VAR_1;
 else
  VAR_10 &= ~VAR_1;

 FUNC_1(VAR_7, VAR_10, VAR_8->regs1, VAR_0);
}
