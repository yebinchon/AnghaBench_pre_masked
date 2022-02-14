
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int set_uproc_interrupt_reg32; } ;
struct ipr_ioa_cfg {TYPE_1__ regs; int pdev; } ;
struct TYPE_4__ {int time_left; } ;
struct ipr_cmnd {TYPE_2__ u; int job_step; struct ipr_ioa_cfg* ioa_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ipr_ioa_cfg*,int ) ;
 int VAR_9 ;
 int FUNC_1 (struct ipr_cmnd*,int ) ;
 int VAR_10 ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ipr_cmnd *VAR_11)
{
 struct ipr_ioa_cfg *VAR_12 = VAR_11->ioa_cfg;
 u16 VAR_13;
 int VAR_14;

 VAR_0;
 VAR_14 = FUNC_2(VAR_12->pdev, VAR_7, &VAR_13);

 if ((VAR_14 == VAR_6) && (VAR_13 & VAR_8)) {
  FUNC_0(VAR_12, ~0);
  FUNC_3(VAR_3, VAR_12->regs.set_uproc_interrupt_reg32);
  VAR_11->job_step = VAR_10;
 } else {
  VAR_11->job_step = VAR_9;
 }

 VAR_11->u.time_left = VAR_4;
 FUNC_1(VAR_11, VAR_1);

 VAR_5;
 return VAR_2;
}
