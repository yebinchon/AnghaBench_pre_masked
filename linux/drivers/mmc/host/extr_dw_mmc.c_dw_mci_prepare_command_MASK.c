
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mmc_host {int dummy; } ;
struct mmc_command {int opcode; int arg; int flags; TYPE_1__* data; int error; } ;
struct dw_mci_slot {int id; int flags; struct dw_mci* host; } ;
struct dw_mci {scalar_t__ state; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct dw_mci*,int ) ;
 int FUNC_2 (struct dw_mci_slot*,int,int ) ;
 int FUNC_3 (struct dw_mci*,int ,int) ;
 struct dw_mci_slot* FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static u32 FUNC_6(struct mmc_host *VAR_27, struct mmc_command *VAR_28)
{
 struct dw_mci_slot *VAR_29 = FUNC_4(VAR_27);
 struct dw_mci *VAR_30 = VAR_29->host;
 u32 VAR_31;

 VAR_28->error = -VAR_2;
 VAR_31 = VAR_28->opcode;

 if (VAR_28->opcode == VAR_10 ||
     VAR_28->opcode == VAR_4 ||
     VAR_28->opcode == VAR_5 ||
     (VAR_28->opcode == VAR_23 &&
      ((VAR_28->arg >> 9) & 0x1FFFF) == VAR_11))
  VAR_31 |= VAR_19;
 else if (VAR_28->opcode != VAR_9 && VAR_28->data)
  VAR_31 |= VAR_15;

 if (VAR_28->opcode == VAR_24) {
  u32 VAR_32;


  VAR_31 |= VAR_22;


  FUNC_0(VAR_29->host->state != VAR_25);
  VAR_29->host->state = VAR_26;
  VAR_32 = FUNC_1(VAR_30, VAR_0);
  VAR_32 &= ~(VAR_12 << VAR_29->id);
  FUNC_3(VAR_30, VAR_0, VAR_32);
  FUNC_2(VAR_29, VAR_20 |
        VAR_15, 0);
 }

 if (VAR_28->flags & VAR_8) {

  VAR_31 |= VAR_17;
  if (VAR_28->flags & VAR_6)
   VAR_31 |= VAR_18;
 }

 if (VAR_28->flags & VAR_7)
  VAR_31 |= VAR_16;

 if (VAR_28->data) {
  VAR_31 |= VAR_13;
  if (VAR_28->data->flags & VAR_3)
   VAR_31 |= VAR_14;
 }

 if (!FUNC_5(VAR_1, &VAR_29->flags))
  VAR_31 |= VAR_21;

 return VAR_31;
}
