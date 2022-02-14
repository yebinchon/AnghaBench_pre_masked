
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {void* timing_2; void* timing_1; void* acc_control; void* config_ext; void* config; } ;
struct brcmnand_host {TYPE_1__ hwcfg; int cs; struct brcmnand_controller* ctrl; } ;
struct brcmnand_controller {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct brcmnand_controller*,int ,int ) ;
 void* FUNC_1 (struct brcmnand_controller*,scalar_t__) ;
 int FUNC_2 (struct brcmnand_controller*,scalar_t__,void*) ;

__attribute__((used)) static void FUNC_3(struct brcmnand_host *VAR_5,
         int VAR_6)
{
 struct brcmnand_controller *VAR_7 = VAR_5->ctrl;
 u16 VAR_8 = FUNC_0(VAR_7, VAR_5->cs, VAR_1);
 u16 VAR_9 = FUNC_0(VAR_7, VAR_5->cs,
   VAR_2);
 u16 VAR_10 = FUNC_0(VAR_7, VAR_5->cs,
   VAR_0);
 u16 VAR_11 = FUNC_0(VAR_7, VAR_5->cs, VAR_3);
 u16 VAR_12 = FUNC_0(VAR_7, VAR_5->cs, VAR_4);

 if (VAR_6) {
  FUNC_2(VAR_7, VAR_8, VAR_5->hwcfg.config);
  if (VAR_8 != VAR_9)
   FUNC_2(VAR_7, VAR_9,
          VAR_5->hwcfg.config_ext);
  FUNC_2(VAR_7, VAR_10, VAR_5->hwcfg.acc_control);
  FUNC_2(VAR_7, VAR_11, VAR_5->hwcfg.timing_1);
  FUNC_2(VAR_7, VAR_12, VAR_5->hwcfg.timing_2);
 } else {
  VAR_5->hwcfg.config = FUNC_1(VAR_7, VAR_8);
  if (VAR_8 != VAR_9)
   VAR_5->hwcfg.config_ext =
    FUNC_1(VAR_7, VAR_9);
  VAR_5->hwcfg.acc_control = FUNC_1(VAR_7, VAR_10);
  VAR_5->hwcfg.timing_1 = FUNC_1(VAR_7, VAR_11);
  VAR_5->hwcfg.timing_2 = FUNC_1(VAR_7, VAR_12);
 }
}
