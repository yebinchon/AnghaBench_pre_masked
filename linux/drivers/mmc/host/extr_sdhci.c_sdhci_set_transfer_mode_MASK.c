
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sdhci_host {int quirks2; int flags; int data; } ;
struct mmc_data {int blocks; int flags; } ;
struct mmc_command {scalar_t__ opcode; TYPE_2__* mrq; struct mmc_data* data; } ;
struct TYPE_4__ {TYPE_1__* sbc; } ;
struct TYPE_3__ {int arg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sdhci_host*,struct mmc_command*,int*) ;
 int FUNC_3 (struct sdhci_host*,int ) ;
 int FUNC_4 (struct sdhci_host*,int ,int ) ;
 int FUNC_5 (struct sdhci_host*,int,int ) ;

__attribute__((used)) static void FUNC_6(struct sdhci_host *VAR_14,
 struct mmc_command *VAR_15)
{
 u16 VAR_16 = 0;
 struct mmc_data *VAR_17 = VAR_15->data;

 if (VAR_17 == ((void*)0)) {
  if (VAR_14->quirks2 &
   VAR_4) {

   if (VAR_15->opcode != VAR_1)
    FUNC_5(VAR_14, 0x0, VAR_7);
  } else {

   VAR_16 = FUNC_3(VAR_14, VAR_7);
   FUNC_5(VAR_14, VAR_16 & ~(VAR_8 |
    VAR_9), VAR_7);
  }
  return;
 }

 FUNC_0(!VAR_14->data);

 if (!(VAR_14->quirks2 & VAR_5))
  VAR_16 = VAR_10;

 if (FUNC_1(VAR_15->opcode) || VAR_17->blocks > 1) {
  VAR_16 = VAR_10 | VAR_12;
  FUNC_2(VAR_14, VAR_15, &VAR_16);
  if (VAR_15->mrq->sbc && (VAR_14->flags & VAR_3))
   FUNC_4(VAR_14, VAR_15->mrq->sbc->arg, VAR_2);
 }

 if (VAR_17->flags & VAR_0)
  VAR_16 |= VAR_13;
 if (VAR_14->flags & VAR_6)
  VAR_16 |= VAR_11;

 FUNC_5(VAR_14, VAR_16, VAR_7);
}
