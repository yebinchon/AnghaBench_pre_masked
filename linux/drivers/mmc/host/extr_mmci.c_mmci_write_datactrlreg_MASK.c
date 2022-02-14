
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mmci_host {int datactrl_reg; scalar_t__ base; TYPE_1__* variant; } ;
struct TYPE_2__ {int busy_dpsm_flag; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mmci_host *VAR_1, u32 VAR_2)
{

 VAR_2 |= VAR_1->datactrl_reg & VAR_1->variant->busy_dpsm_flag;

 if (VAR_1->datactrl_reg != VAR_2) {
  VAR_1->datactrl_reg = VAR_2;
  FUNC_0(VAR_2, VAR_1->base + VAR_0);
 }
}
