
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef unsigned int u32 ;
struct iss_csi2_device {int frame_skip; int output; int regs1; int iss; struct iss_csi2_ctx_cfg* contexts; } ;
struct iss_csi2_ctx_cfg {size_t enabled; } ;


 int FUNC_0 (size_t) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct iss_csi2_device *VAR_5, u8 VAR_6, u8 VAR_7)
{
 struct iss_csi2_ctx_cfg *VAR_8 = &VAR_5->contexts[VAR_6];
 u32 VAR_9;

 VAR_9 = FUNC_1(VAR_5->iss, VAR_5->regs1, FUNC_0(VAR_6));

 if (VAR_7) {
  unsigned int VAR_10 = 0;

  if (VAR_5->frame_skip)
   VAR_10 = VAR_5->frame_skip;
  else if (VAR_5->output & VAR_4)
   VAR_10 = 1;

  VAR_9 &= ~VAR_0;
  VAR_9 |= VAR_2
      | (VAR_10 << VAR_1)
      | VAR_3;
 } else {
  VAR_9 &= ~VAR_3;
 }

 FUNC_2(VAR_5->iss, VAR_5->regs1, FUNC_0(VAR_6), VAR_9);
 VAR_8->enabled = VAR_7;
}
