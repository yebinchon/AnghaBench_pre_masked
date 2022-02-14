
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct brcmnand_host {struct brcmnand_controller* ctrl; } ;
struct brcmnand_controller {int cmd_pending; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct brcmnand_controller*,int ,int ,int ) ;
 int FUNC_3 (struct brcmnand_controller*) ;
 int FUNC_4 (struct brcmnand_controller*,int ) ;
 int FUNC_5 (struct brcmnand_controller*,int ,int) ;
 int FUNC_6 (int ,char*,int,int ) ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct brcmnand_host *VAR_3, int VAR_4)
{
 struct brcmnand_controller *VAR_5 = VAR_3->ctrl;
 int VAR_6;
 u64 VAR_7;

 VAR_7 = FUNC_4(VAR_5, VAR_0);

 FUNC_6(VAR_5->dev, "send native cmd %d addr 0x%llx\n", VAR_4, VAR_7);

 FUNC_0(VAR_5->cmd_pending != 0);
 VAR_5->cmd_pending = VAR_4;

 VAR_6 = FUNC_2(VAR_5, VAR_2, VAR_2, 0);
 FUNC_1(VAR_6);

 FUNC_7();
 FUNC_5(VAR_5, VAR_1,
      VAR_4 << FUNC_3(VAR_5));
}
