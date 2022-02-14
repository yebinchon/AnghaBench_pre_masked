
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int hwparams4; int hwparams6; int hwparams1; } ;
struct dwc3 {scalar_t__ revision; int is_fpga; int regs; scalar_t__ u2exit_lfps_quirk; scalar_t__ disable_scramble_quirk; int dev; TYPE_1__ hwparams; int nr_scratch; int dr_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;


 int FUNC_1 (int) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct dwc3 *VAR_14)
{
 u32 VAR_15 = VAR_14->hwparams.hwparams4;
 u32 VAR_16;

 VAR_16 = FUNC_4(VAR_14->regs, VAR_0);
 VAR_16 &= ~VAR_4;

 switch (FUNC_0(VAR_14->hwparams.hwparams1)) {
 case 129:
  if ((VAR_14->dr_mode == VAR_12 ||
    VAR_14->dr_mode == VAR_13) &&
    (VAR_14->revision >= VAR_10 &&
    VAR_14->revision <= VAR_11))
   VAR_16 |= VAR_2 | VAR_5;
  else
   VAR_16 &= ~VAR_2;
  break;
 case 128:

  VAR_14->nr_scratch = FUNC_1(VAR_15);





  VAR_16 |= VAR_3;
  break;
 default:

  break;
 }


 if (VAR_14->hwparams.hwparams6 & VAR_8) {
  FUNC_3(VAR_14->dev, "Running with FPGA optimizations\n");
  VAR_14->is_fpga = 1;
 }

 FUNC_2(VAR_14->disable_scramble_quirk && !VAR_14->is_fpga,
   "disable_scramble cannot be used on non-FPGA builds\n");

 if (VAR_14->disable_scramble_quirk && VAR_14->is_fpga)
  VAR_16 |= VAR_1;
 else
  VAR_16 &= ~VAR_1;

 if (VAR_14->u2exit_lfps_quirk)
  VAR_16 |= VAR_6;







 if (VAR_14->revision < VAR_9)
  VAR_16 |= VAR_7;

 FUNC_5(VAR_14->regs, VAR_0, VAR_16);
}
