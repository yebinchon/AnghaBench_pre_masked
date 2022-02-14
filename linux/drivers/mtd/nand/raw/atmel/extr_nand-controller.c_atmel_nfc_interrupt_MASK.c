
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int smc; } ;
struct TYPE_4__ {int wait; } ;
struct atmel_hsmc_nand_controller {int complete; TYPE_1__ base; TYPE_2__ op; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_5, void *VAR_6)
{
 struct atmel_hsmc_nand_controller *VAR_7 = VAR_6;
 u32 VAR_8, VAR_9;
 bool VAR_10;

 FUNC_2(VAR_7->base.smc, VAR_1, &VAR_8);

 VAR_9 = VAR_8 & (VAR_7->op.wait | VAR_2);
 VAR_10 = FUNC_0(&VAR_7->op, VAR_8);

 if (VAR_9)
  FUNC_3(VAR_7->base.smc, VAR_0, VAR_9);

 if (VAR_10)
  FUNC_1(&VAR_7->complete);

 return VAR_9 ? VAR_3 : VAR_4;
}
