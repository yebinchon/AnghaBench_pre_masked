
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sh_mmcif_host {int lock; int timeout; int timeout_work; int wait_for; int addr; scalar_t__ ccs_enable; } ;
struct mmc_request {TYPE_1__* data; struct mmc_command* cmd; } ;
struct mmc_command {int flags; int arg; } ;
struct TYPE_2__ {int blksz; } ;


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
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct sh_mmcif_host*,struct mmc_request*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct sh_mmcif_host *VAR_12,
          struct mmc_request *VAR_13)
{
 struct mmc_command *VAR_14 = VAR_13->cmd;
 u32 VAR_15;
 u32 VAR_16 = 0;
 unsigned long VAR_17;

 if (VAR_14->flags & VAR_11)
  VAR_16 = VAR_4 | VAR_3;
 else
  VAR_16 = VAR_4 | VAR_2;

 if (VAR_12->ccs_enable)
  VAR_16 |= VAR_1;

 if (VAR_13->data) {
  FUNC_2(VAR_12->addr, VAR_6, 0);
  FUNC_2(VAR_12->addr, VAR_6,
    VAR_13->data->blksz);
 }
 VAR_15 = FUNC_1(VAR_12, VAR_13);

 if (VAR_12->ccs_enable)
  FUNC_2(VAR_12->addr, VAR_8, 0xD80430C0);
 else
  FUNC_2(VAR_12->addr, VAR_8, 0xD80430C0 | VAR_0);
 FUNC_2(VAR_12->addr, VAR_9, VAR_16);

 FUNC_2(VAR_12->addr, VAR_5, VAR_14->arg);

 FUNC_3(&VAR_12->lock, VAR_17);
 FUNC_2(VAR_12->addr, VAR_7, VAR_15);

 VAR_12->wait_for = VAR_10;
 FUNC_0(&VAR_12->timeout_work, VAR_12->timeout);
 FUNC_4(&VAR_12->lock, VAR_17);
}
