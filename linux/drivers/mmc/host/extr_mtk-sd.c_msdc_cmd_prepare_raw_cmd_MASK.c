
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct msdc_host {int cmd_rsp; scalar_t__ timeout_ns; scalar_t__ timeout_clks; scalar_t__ base; TYPE_1__* mmc; } ;
struct mmc_request {TYPE_2__* sbc; } ;
struct mmc_data {int blksz; int flags; int blocks; scalar_t__ timeout_ns; scalar_t__ timeout_clks; } ;
struct mmc_command {int opcode; unsigned int flags; struct mmc_data* data; } ;
struct TYPE_4__ {int arg; } ;
struct TYPE_3__ {int card; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct mmc_command*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct msdc_host*,struct mmc_request*,struct mmc_command*) ;
 int FUNC_4 (struct msdc_host*,scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_7(struct msdc_host *VAR_13,
  struct mmc_request *VAR_14, struct mmc_command *VAR_15)
{




 u32 VAR_16 = VAR_15->opcode;
 u32 VAR_17 = FUNC_3(VAR_13, VAR_14, VAR_15);
 u32 VAR_18 = (VAR_16 & 0x3f) | ((VAR_17 & 0x7) << 7);

 VAR_13->cmd_rsp = VAR_17;

 if ((VAR_16 == VAR_10 && VAR_15->flags == (unsigned int) -1) ||
     VAR_16 == VAR_3)
  VAR_18 |= (0x1 << 14);
 else if (VAR_16 == VAR_12)
  VAR_18 |= (0x1 << 30);
 else if (VAR_16 == VAR_9 ||
   VAR_16 == VAR_8 ||
   (VAR_16 == VAR_11 && FUNC_1(VAR_15) == VAR_0) ||
   (VAR_16 == VAR_7 && FUNC_1(VAR_15) == VAR_0) ||
   (VAR_16 == VAR_2 && FUNC_1(VAR_15) == VAR_0))
  VAR_18 |= (0x1 << 11);

 if (VAR_15->data) {
  struct mmc_data *VAR_19 = VAR_15->data;

  if (FUNC_2(VAR_16)) {
   if (FUNC_0(VAR_13->mmc->card) && VAR_14->sbc &&
       !(VAR_14->sbc->arg & 0xFFFF0000))
    VAR_18 |= 0x2 << 28;
  }

  VAR_18 |= ((VAR_19->blksz & 0xFFF) << 16);
  if (VAR_19->flags & VAR_1)
   VAR_18 |= (0x1 << 13);
  if (VAR_19->blocks > 1)
   VAR_18 |= (0x2 << 11);
  else
   VAR_18 |= (0x1 << 11);

  FUNC_5(VAR_13->base + VAR_4, VAR_5);

  if (VAR_13->timeout_ns != VAR_19->timeout_ns ||
      VAR_13->timeout_clks != VAR_19->timeout_clks)
   FUNC_4(VAR_13, VAR_19->timeout_ns,
     VAR_19->timeout_clks);

  FUNC_6(VAR_19->blocks, VAR_13->base + VAR_6);
 }
 return VAR_18;
}
