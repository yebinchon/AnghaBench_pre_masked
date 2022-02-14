
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct usdhi6_host {int io_error; TYPE_2__* mrq; int wait; int mmc; } ;
struct TYPE_4__ {TYPE_1__* cmd; } ;
struct TYPE_3__ {int opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__,int ,int) ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__,int,...) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct usdhi6_host*,int ) ;
 int FUNC_4 (struct usdhi6_host*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct usdhi6_host *VAR_13)
{
 u32 VAR_14;

 FUNC_4(VAR_13, VAR_10, VAR_11);

 if (VAR_13->io_error &
     (VAR_7 | VAR_8)) {
  u32 VAR_15 = FUNC_3(VAR_13, VAR_9);
  int VAR_16 = VAR_13->mrq ? VAR_13->mrq->cmd->opcode : -1;

  VAR_14 = FUNC_3(VAR_13, VAR_5);

  if (VAR_13->wait == VAR_12)
   FUNC_0(FUNC_2(VAR_13->mmc),
    "T-out sts 0x%x, resp 0x%x, state %u, CMD%d\n",
    VAR_14, VAR_15, VAR_13->wait, VAR_16);
  else
   FUNC_1(FUNC_2(VAR_13->mmc),
     "T-out sts 0x%x, resp 0x%x, state %u, CMD%d\n",
     VAR_14, VAR_15, VAR_13->wait, VAR_16);
  return -VAR_2;
 }

 VAR_14 = FUNC_3(VAR_13, VAR_3);
 if (VAR_14 != VAR_4)
  FUNC_1(FUNC_2(VAR_13->mmc), "Err sts 0x%x, state %u, CMD%d\n",
    VAR_14, VAR_13->wait, VAR_13->mrq ? VAR_13->mrq->cmd->opcode : -1);
 if (VAR_13->io_error & VAR_6)
  return -VAR_0;

 return -VAR_1;
}
