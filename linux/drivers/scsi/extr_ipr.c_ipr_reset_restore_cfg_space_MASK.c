
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int endian_swap_reg; } ;
struct ipr_ioa_cfg {scalar_t__ sdt_state; scalar_t__ in_ioa_bringdown; scalar_t__ ioa_unit_checked; scalar_t__ sis64; TYPE_4__ regs; TYPE_6__* pdev; } ;
struct TYPE_11__ {int time_left; } ;
struct TYPE_7__ {int ioasc; } ;
struct TYPE_8__ {TYPE_1__ hdr; } ;
struct TYPE_9__ {TYPE_2__ ioasa; } ;
struct ipr_cmnd {int job_step; TYPE_5__ u; TYPE_3__ s; struct ipr_ioa_cfg* ioa_cfg; } ;
struct TYPE_12__ {int state_saved; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 int FUNC_1 (struct ipr_ioa_cfg*) ;
 int FUNC_2 (struct ipr_ioa_cfg*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct ipr_cmnd*,int ) ;
 scalar_t__ FUNC_4 (struct ipr_ioa_cfg*) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct ipr_cmnd *VAR_14)
{
 struct ipr_ioa_cfg *VAR_15 = VAR_14->ioa_cfg;
 u32 VAR_16;

 VAR_0;
 VAR_15->pdev->state_saved = 1;
 FUNC_5(VAR_15->pdev);

 if (FUNC_4(VAR_15)) {
  VAR_14->s.ioasa.hdr.ioasc = FUNC_0(VAR_4);
  return VAR_5;
 }

 FUNC_1(VAR_15);

 if (VAR_15->sis64) {

  FUNC_7(VAR_3, VAR_15->regs.endian_swap_reg);
  VAR_16 = FUNC_6(VAR_15->regs.endian_swap_reg);
 }

 if (VAR_15->ioa_unit_checked) {
  if (VAR_15->sis64) {
   VAR_14->job_step = VAR_13;
   FUNC_3(VAR_14, VAR_2);
   return VAR_6;
  } else {
   VAR_15->ioa_unit_checked = 0;
   FUNC_2(VAR_15);
   VAR_14->job_step = VAR_11;
   FUNC_3(VAR_14, 0);
   return VAR_6;
  }
 }

 if (VAR_15->in_ioa_bringdown) {
  VAR_14->job_step = VAR_10;
 } else if (VAR_15->sdt_state == VAR_1) {
  VAR_14->job_step = VAR_9;
  VAR_14->u.time_left = VAR_7;
 } else {
  VAR_14->job_step = VAR_12;
 }

 VAR_8;
 return VAR_5;
}
