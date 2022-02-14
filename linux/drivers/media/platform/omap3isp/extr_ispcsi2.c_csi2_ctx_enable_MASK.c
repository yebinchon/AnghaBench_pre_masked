
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef unsigned int u32 ;
struct isp_device {int dummy; } ;
struct isp_csi2_device {int frame_skip; int output; int regs1; struct isp_csi2_ctx_cfg* contexts; } ;
struct isp_csi2_ctx_cfg {size_t enabled; } ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_1 (struct isp_device*,int ,int ) ;
 int FUNC_2 (struct isp_device*,unsigned int,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct isp_device *VAR_5,
       struct isp_csi2_device *VAR_6, u8 VAR_7, u8 VAR_8)
{
 struct isp_csi2_ctx_cfg *VAR_9 = &VAR_6->contexts[VAR_7];
 unsigned int VAR_10 = 0;
 u32 VAR_11;

 VAR_11 = FUNC_1(VAR_5, VAR_6->regs1, FUNC_0(VAR_7));

 if (VAR_8) {
  if (VAR_6->frame_skip)
   VAR_10 = VAR_6->frame_skip;
  else if (VAR_6->output & VAR_0)
   VAR_10 = 1;

  VAR_11 &= ~VAR_1;
  VAR_11 |= VAR_3
      | (VAR_10 << VAR_2)
      | VAR_4;
 } else {
  VAR_11 &= ~VAR_4;
 }

 FUNC_2(VAR_5, VAR_11, VAR_6->regs1, FUNC_0(VAR_7));
 VAR_9->enabled = VAR_8;
}
