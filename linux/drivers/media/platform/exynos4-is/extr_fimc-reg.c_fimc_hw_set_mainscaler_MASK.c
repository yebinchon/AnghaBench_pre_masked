
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fimc_variant {scalar_t__ has_mainscaler_ext; } ;
struct fimc_scaler {int main_vratio; int main_hratio; } ;
struct fimc_dev {scalar_t__ regs; struct fimc_variant* variant; } ;
struct fimc_ctx {struct fimc_scaler scaler; struct fimc_dev* fimc_dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (struct fimc_ctx*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int,scalar_t__) ;

void FUNC_10(struct fimc_ctx *VAR_6)
{
 struct fimc_dev *VAR_7 = VAR_6->fimc_dev;
 const struct fimc_variant *VAR_8 = VAR_7->variant;
 struct fimc_scaler *VAR_9 = &VAR_6->scaler;
 u32 VAR_10;

 FUNC_6("main_hratio= 0x%X  main_vratio= 0x%X",
     VAR_9->main_hratio, VAR_9->main_vratio);

 FUNC_7(VAR_6);

 VAR_10 = FUNC_8(VAR_7->regs + VAR_3);
 VAR_10 &= ~(VAR_4 |
   VAR_5);

 if (VAR_8->has_mainscaler_ext) {
  VAR_10 |= FUNC_3(VAR_9->main_hratio);
  VAR_10 |= FUNC_5(VAR_9->main_vratio);
  FUNC_9(VAR_10, VAR_7->regs + VAR_3);

  VAR_10 = FUNC_8(VAR_7->regs + VAR_0);

  VAR_10 &= ~(VAR_2 |
    VAR_1);
  VAR_10 |= FUNC_0(VAR_9->main_hratio);
  VAR_10 |= FUNC_1(VAR_9->main_vratio);
  FUNC_9(VAR_10, VAR_7->regs + VAR_0);
 } else {
  VAR_10 |= FUNC_2(VAR_9->main_hratio);
  VAR_10 |= FUNC_4(VAR_9->main_vratio);
  FUNC_9(VAR_10, VAR_7->regs + VAR_3);
 }
}
