
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sdhci_host {int flags; scalar_t__ version; } ;
struct mmc_command {scalar_t__ opcode; TYPE_1__* mrq; } ;
struct TYPE_2__ {scalar_t__ sbc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (struct sdhci_host*,TYPE_1__*) ;
 int FUNC_1 (struct sdhci_host*,int ) ;
 int FUNC_2 (struct sdhci_host*,int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct sdhci_host *VAR_8,
      struct mmc_command *VAR_9,
      u16 *VAR_10)
{
 bool VAR_11 = FUNC_0(VAR_8, VAR_9->mrq) &&
    (VAR_9->opcode != VAR_7);
 bool VAR_12 = VAR_9->mrq->sbc && (VAR_8->flags & VAR_0);
 u16 VAR_13;






 if (VAR_8->version >= VAR_3 && (VAR_11 || VAR_12)) {
  *VAR_10 |= VAR_6;

  VAR_13 = FUNC_1(VAR_8, VAR_2);
  if (VAR_12)
   VAR_13 |= VAR_1;
  else
   VAR_13 &= ~VAR_1;
  FUNC_2(VAR_8, VAR_13, VAR_2);

  return;
 }





 if (VAR_11)
  *VAR_10 |= VAR_4;
 else if (VAR_12)
  *VAR_10 |= VAR_5;
}
