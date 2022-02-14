
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct brcmnand_host {int cs; struct brcmnand_controller* ctrl; } ;
struct brcmnand_controller {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct brcmnand_controller*,int ,int ) ;
 int FUNC_1 (struct brcmnand_controller*) ;
 int FUNC_2 (struct brcmnand_controller*,int ) ;
 int FUNC_3 (struct brcmnand_controller*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct brcmnand_host *VAR_1, int VAR_2)
{
 struct brcmnand_controller *VAR_3 = VAR_1->ctrl;
 int VAR_4 = FUNC_1(VAR_3);
 u16 VAR_5 = FUNC_0(VAR_3, VAR_1->cs,
        VAR_0);
 u32 VAR_6;

 if (VAR_4 < 0)
  return;

 VAR_6 = FUNC_2(VAR_3, VAR_5);
 VAR_6 &= ~(1 << VAR_4);
 VAR_6 |= (!!VAR_2) << VAR_4;
 FUNC_3(VAR_3, VAR_5, VAR_6);
}
