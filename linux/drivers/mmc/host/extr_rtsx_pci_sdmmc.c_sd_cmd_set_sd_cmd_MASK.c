
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_pcr {int dummy; } ;
struct mmc_command {int opcode; int arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtsx_pcr*,int ,int ,int,int) ;
 int FUNC_1 (struct rtsx_pcr*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct rtsx_pcr *VAR_4, struct mmc_command *VAR_5)
{
 FUNC_0(VAR_4, VAR_3, VAR_0, 0xFF,
  VAR_2 | VAR_5->opcode);
 FUNC_1(VAR_4, VAR_1, VAR_5->arg);
}
