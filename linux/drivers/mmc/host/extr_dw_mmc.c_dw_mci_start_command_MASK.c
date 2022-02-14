
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_command {int arg; } ;
struct dw_mci {int dev; struct mmc_command* cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct dw_mci*) ;
 int FUNC_2 (struct dw_mci*,int) ;
 int FUNC_3 (struct dw_mci*,int ,int) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct dw_mci *VAR_4,
     struct mmc_command *VAR_5, u32 VAR_6)
{
 VAR_4->cmd = VAR_5;
 FUNC_0(VAR_4->dev,
   "start command: ARGR=0x%08x CMDR=0x%08x\n",
   VAR_5->arg, VAR_6);

 FUNC_3(VAR_4, VAR_1, VAR_5->arg);
 FUNC_4();
 FUNC_2(VAR_4, VAR_6);

 FUNC_3(VAR_4, VAR_0, VAR_6 | VAR_3);


 if (VAR_6 & VAR_2)
  FUNC_1(VAR_4);
}
