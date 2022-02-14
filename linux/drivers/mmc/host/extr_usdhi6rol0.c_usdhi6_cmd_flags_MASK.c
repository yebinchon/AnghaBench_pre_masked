
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct usdhi6_host {int app_cmd; int mmc; struct mmc_request* mrq; } ;
struct mmc_request {int stop; TYPE_1__* data; struct mmc_command* cmd; } ;
struct mmc_command {int opcode; } ;
struct TYPE_2__ {int flags; int blocks; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;





 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
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
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mmc_command*) ;

__attribute__((used)) static int FUNC_3(struct usdhi6_host *VAR_15)
{
 struct mmc_request *VAR_16 = VAR_15->mrq;
 struct mmc_command *VAR_17 = VAR_16->cmd;
 u16 VAR_18 = VAR_17->opcode;

 if (VAR_15->app_cmd) {
  VAR_15->app_cmd = 0;
  VAR_18 |= VAR_5;
 }

 if (VAR_16->data) {
  VAR_18 |= VAR_7;

  if (VAR_16->data->flags & VAR_1)
   VAR_18 |= VAR_14;

  if (VAR_17->opcode == VAR_2 ||
      VAR_17->opcode == VAR_3 ||
      (VAR_17->opcode == VAR_4 &&
       VAR_16->data->blocks > 1)) {
   VAR_18 |= VAR_13;
   if (!VAR_16->stop)
    VAR_18 |= VAR_6;
  }

  switch (FUNC_2(VAR_17)) {
  case 132:
   VAR_18 |= VAR_8;
   break;
  case 131:
   VAR_18 |= VAR_9;
   break;
  case 130:
   VAR_18 |= VAR_10;
   break;
  case 129:
   VAR_18 |= VAR_11;
   break;
  case 128:
   VAR_18 |= VAR_12;
   break;
  default:
   FUNC_0(FUNC_1(VAR_15->mmc),
     "Unknown response type %d\n",
     FUNC_2(VAR_17));
   return -VAR_0;
  }
 }

 return VAR_18;
}
