
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tmio_mmc_host {TYPE_2__* mrq; TYPE_1__* pdata; struct mmc_command* cmd; struct mmc_data* data; } ;
struct mmc_data {int blocks; int flags; } ;
struct mmc_command {int opcode; int arg; } ;
struct TYPE_4__ {scalar_t__ sbc; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct mmc_command*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct tmio_mmc_host*,int ,int) ;
 int FUNC_3 (struct tmio_mmc_host*,int ,int ) ;
 int FUNC_4 (struct tmio_mmc_host*,int ) ;

__attribute__((used)) static int FUNC_5(struct tmio_mmc_host *VAR_18,
      struct mmc_command *VAR_19)
{
 struct mmc_data *VAR_20 = VAR_18->data;
 int VAR_21 = VAR_19->opcode;

 switch (FUNC_0(VAR_19)) {
 case 133: VAR_21 |= VAR_7; break;
 case 132:
 case 130:
      VAR_21 |= VAR_8; break;
 case 131: VAR_21 |= VAR_9; break;
 case 129: VAR_21 |= VAR_10; break;
 case 128: VAR_21 |= VAR_11; break;
 default:
  FUNC_1("Unknown response type %d\n", FUNC_0(VAR_19));
  return -VAR_4;
 }

 VAR_18->cmd = VAR_19;






 if (VAR_20) {
  VAR_21 |= VAR_3;
  if (VAR_20->blocks > 1) {
   FUNC_2(VAR_18, VAR_2, VAR_15);
   VAR_21 |= VAR_16;





   if ((VAR_18->pdata->flags & VAR_14) &&
       (VAR_19->opcode == VAR_12 || VAR_18->mrq->sbc))
    VAR_21 |= VAR_6;
  }
  if (VAR_20->flags & VAR_5)
   VAR_21 |= VAR_17;
 }

 FUNC_4(VAR_18, VAR_13);


 FUNC_3(VAR_18, VAR_0, VAR_19->arg);
 FUNC_2(VAR_18, VAR_1, VAR_21);

 return 0;
}
