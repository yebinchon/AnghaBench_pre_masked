
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipw_hardware {scalar_t__ hw_version; int lock; TYPE_1__* memregs_CCR; scalar_t__ base_port; } ;
struct TYPE_2__ {int reg_config_and_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,scalar_t__) ;
 unsigned short FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (unsigned short,int *) ;

__attribute__((used)) static void FUNC_5(struct ipw_hardware *VAR_7)
{
 unsigned long VAR_8;

 FUNC_2(&VAR_7->lock, VAR_8);
 if (VAR_7->hw_version == VAR_2) {

  FUNC_0(VAR_0, VAR_7->base_port + VAR_5);

  FUNC_0(VAR_1, VAR_7->base_port + VAR_5);


  FUNC_0(VAR_4 | VAR_3, VAR_7->base_port + VAR_6);
 } else {




  unsigned short VAR_9 = FUNC_1(&VAR_7->memregs_CCR->reg_config_and_status);

  VAR_9 |= 1;
  FUNC_4(VAR_9, &VAR_7->memregs_CCR->reg_config_and_status);
 }
 FUNC_3(&VAR_7->lock, VAR_8);
}
