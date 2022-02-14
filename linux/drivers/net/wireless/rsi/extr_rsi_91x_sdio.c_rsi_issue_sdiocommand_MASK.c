
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct sdio_func {TYPE_1__* card; } ;
struct mmc_host {int dummy; } ;
struct mmc_command {void** resp; void* flags; void* arg; void* opcode; } ;
struct TYPE_2__ {struct mmc_host* host; } ;


 int FUNC_0 (struct mmc_command*,int ,int) ;
 int FUNC_1 (struct mmc_host*,struct mmc_command*,int) ;

__attribute__((used)) static int FUNC_2(struct sdio_func *VAR_0,
     u32 VAR_1,
     u32 VAR_2,
     u32 VAR_3,
     u32 *VAR_4)
{
 struct mmc_command VAR_5;
 struct mmc_host *VAR_6;
 int VAR_7;

 VAR_6 = VAR_0->card->host;

 FUNC_0(&VAR_5, 0, sizeof(struct mmc_command));
 VAR_5.opcode = VAR_1;
 VAR_5.arg = VAR_2;
 VAR_5.flags = VAR_3;
 VAR_7 = FUNC_1(VAR_6, &VAR_5, 3);

 if ((!VAR_7) && (VAR_4))
  *VAR_4 = VAR_5.resp[0];

 return VAR_7;
}
