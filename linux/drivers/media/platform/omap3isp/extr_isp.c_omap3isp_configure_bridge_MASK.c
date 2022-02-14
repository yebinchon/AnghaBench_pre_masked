
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct isp_parallel_cfg {unsigned int clk_pol; unsigned int data_lane_shift; } ;
struct isp_device {int dummy; } ;
typedef enum ccdc_input_entity { ____Placeholder_ccdc_input_entity } ccdc_input_entity ;






 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int FUNC_0 (struct isp_device*,int ,int ) ;
 int FUNC_1 (struct isp_device*,unsigned int,int ,int ) ;

void FUNC_2(struct isp_device *VAR_12,
          enum ccdc_input_entity VAR_13,
          const struct isp_parallel_cfg *VAR_14,
          unsigned int VAR_15, unsigned int VAR_16)
{
 u32 VAR_17;

 VAR_17 = FUNC_0(VAR_12, VAR_11, VAR_10);
 VAR_17 &= ~VAR_8;
 VAR_17 &= ~VAR_1;
 VAR_17 &= ~VAR_6;
 VAR_17 &= ~VAR_0;
 VAR_17 |= VAR_16;

 switch (VAR_13) {
 case 128:
  VAR_17 |= VAR_7;
  VAR_17 |= VAR_14->clk_pol << VAR_2;
  VAR_15 += VAR_14->data_lane_shift;
  break;

 case 130:
  VAR_17 |= VAR_3;
  break;

 case 131:
  VAR_17 |= VAR_4;
  break;

 case 129:
  VAR_17 |= VAR_5;
  break;

 default:
  return;
 }

 VAR_17 |= ((VAR_15/2) << VAR_9) & VAR_8;

 FUNC_1(VAR_12, VAR_17, VAR_11, VAR_10);
}
