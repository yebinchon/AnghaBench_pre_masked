
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iss_csi2_timing_cfg {int stop_state_counter; scalar_t__ stop_state_4x; scalar_t__ stop_state_16x; scalar_t__ force_rx_mode; } ;
struct iss_csi2_device {int regs1; int iss; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct iss_csi2_device *VAR_6,
          struct iss_csi2_timing_cfg *VAR_7)
{
 u32 VAR_8;

 VAR_8 = FUNC_0(VAR_6->iss, VAR_6->regs1, VAR_0);

 if (VAR_7->force_rx_mode)
  VAR_8 |= VAR_1;
 else
  VAR_8 &= ~VAR_1;

 if (VAR_7->stop_state_16x)
  VAR_8 |= VAR_4;
 else
  VAR_8 &= ~VAR_4;

 if (VAR_7->stop_state_4x)
  VAR_8 |= VAR_5;
 else
  VAR_8 &= ~VAR_5;

 VAR_8 &= ~VAR_2;
 VAR_8 |= VAR_7->stop_state_counter <<
        VAR_3;

 FUNC_1(VAR_6->iss, VAR_6->regs1, VAR_0, VAR_8);
}
