
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct s3cmci_host {int sdio_irqen; int irq_state; scalar_t__ base; int irq; int irq_enabled; int irq_disabled; } ;
struct mmc_host {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct s3cmci_host*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct s3cmci_host*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 struct s3cmci_host* FUNC_6 (struct mmc_host*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct s3cmci_host*) ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct mmc_host *VAR_3, int VAR_4)
{
 struct s3cmci_host *VAR_5 = FUNC_6(VAR_3);
 unsigned long VAR_6;
 u32 VAR_7;

 FUNC_5(VAR_6);

 VAR_7 = FUNC_7(VAR_5->base + VAR_0);
 VAR_5->sdio_irqen = VAR_4;

 if (VAR_4 == VAR_5->sdio_irqen)
  goto same_state;

 if (VAR_4) {
  VAR_7 |= VAR_1;
  FUNC_2(VAR_5, VAR_2);

  if (!VAR_5->irq_state && !VAR_5->irq_disabled) {
   VAR_5->irq_state = 1;
   FUNC_3(VAR_5->irq);
  }
 } else {
  FUNC_0(VAR_5, VAR_2);
  VAR_7 &= ~VAR_1;

  if (!VAR_5->irq_enabled && VAR_5->irq_state) {
   FUNC_1(VAR_5->irq);
   VAR_5->irq_state = 0;
  }
 }

 FUNC_9(VAR_7, VAR_5->base + VAR_0);

 same_state:
 FUNC_4(VAR_6);

 FUNC_8(VAR_5);
}
