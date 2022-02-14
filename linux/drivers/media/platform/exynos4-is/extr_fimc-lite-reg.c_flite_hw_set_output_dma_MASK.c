
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct flite_frame {int dummy; } ;
struct fimc_lite {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fimc_lite*,struct flite_frame*) ;
 int FUNC_1 (struct fimc_lite*,struct flite_frame*) ;
 int FUNC_2 (struct fimc_lite*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;

void FUNC_5(struct fimc_lite *VAR_2, struct flite_frame *VAR_3,
        bool VAR_4)
{
 u32 VAR_5 = FUNC_3(VAR_2->regs + VAR_0);

 if (!VAR_4) {
  VAR_5 |= VAR_1;
  FUNC_4(VAR_5, VAR_2->regs + VAR_0);
  return;
 }

 VAR_5 &= ~VAR_1;
 FUNC_4(VAR_5, VAR_2->regs + VAR_0);

 FUNC_1(VAR_2, VAR_3);
 FUNC_0(VAR_2, VAR_3);
 FUNC_2(VAR_2, 0);
}
