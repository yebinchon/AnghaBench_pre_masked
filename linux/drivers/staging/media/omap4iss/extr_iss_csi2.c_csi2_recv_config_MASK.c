
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iss_csi2_device {int regs1; int iss; } ;
struct iss_csi2_ctrl_cfg {int vp_out_ctrl; scalar_t__ ecc_enable; scalar_t__ vp_only_enable; scalar_t__ vp_clk_enable; scalar_t__ frame_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct iss_csi2_device *VAR_14,
        struct iss_csi2_ctrl_cfg *VAR_15)
{
 u32 VAR_16 = 0;

 if (VAR_15->frame_mode)
  VAR_16 |= VAR_4;
 else
  VAR_16 &= ~VAR_4;

 if (VAR_15->vp_clk_enable)
  VAR_16 |= VAR_10;
 else
  VAR_16 &= ~VAR_10;

 if (VAR_15->vp_only_enable)
  VAR_16 |= VAR_11;
 else
  VAR_16 &= ~VAR_11;

 VAR_16 &= ~VAR_12;
 VAR_16 |= VAR_15->vp_out_ctrl << VAR_13;

 if (VAR_15->ecc_enable)
  VAR_16 |= VAR_2;
 else
  VAR_16 &= ~VAR_2;






 VAR_16 &= ~(VAR_5 | VAR_7);
 VAR_16 |= (2 << VAR_6) |
        (4 << VAR_8);


 VAR_16 |= VAR_1;


 VAR_16 |= VAR_9;





 VAR_16 |= VAR_3;

 FUNC_0(VAR_14->iss, VAR_14->regs1, VAR_0, VAR_16);
}
