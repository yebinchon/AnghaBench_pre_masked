
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct brcmnand_host {int cs; struct brcmnand_controller* ctrl; } ;
struct brcmnand_controller {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct brcmnand_controller*,int ,int ) ;
 int FUNC_1 (struct brcmnand_controller*) ;
 int FUNC_2 (struct brcmnand_controller*,int ) ;

__attribute__((used)) static int FUNC_3(struct brcmnand_host *VAR_1)
{
 struct brcmnand_controller *VAR_2 = VAR_1->ctrl;
 int VAR_3 = FUNC_1(VAR_2);
 u16 VAR_4 = FUNC_0(VAR_2, VAR_1->cs,
        VAR_0);

 if (VAR_3 < 0)
  return 0;

 return (FUNC_2(VAR_2, VAR_4) >> VAR_3) & 0x1;
}
