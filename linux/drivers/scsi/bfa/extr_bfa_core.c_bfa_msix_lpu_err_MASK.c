
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int pss_err_status_reg; int ll_halt; } ;
struct TYPE_7__ {int device_id; } ;
struct TYPE_11__ {TYPE_2__ ioc_regs; TYPE_1__ pcidev; } ;
struct TYPE_9__ {int intr_status; } ;
struct TYPE_10__ {TYPE_3__ bfa_regs; } ;
struct bfa_s {TYPE_5__ ioc; TYPE_4__ iocfc; } ;
typedef int bfa_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;

void
FUNC_6(struct bfa_s *VAR_11, int VAR_12)
{
 u32 VAR_13, VAR_14;
 bfa_boolean_t VAR_15, VAR_16, VAR_17;

 VAR_13 = FUNC_4(VAR_11->iocfc.bfa_regs.intr_status);

 if (FUNC_1(VAR_11->ioc.pcidev.device_id)) {
  VAR_16 = VAR_13 & VAR_1;
  VAR_17 = VAR_13 & VAR_5;
  VAR_15 = VAR_13 & (VAR_8 |
       VAR_10);
  VAR_13 &= VAR_3;
 } else {
  VAR_16 = FUNC_0(VAR_11->ioc.pcidev.device_id) ?
       (VAR_13 & VAR_6) : 0;
  VAR_17 = VAR_13 & VAR_4;
  VAR_15 = VAR_13 & (VAR_7 | VAR_9);
  VAR_13 &= VAR_2;
 }

 if (VAR_15)
  FUNC_3(&VAR_11->ioc);

 if (VAR_13) {
  if (VAR_16) {





   VAR_14 = FUNC_4(VAR_11->ioc.ioc_regs.ll_halt);
   VAR_14 &= ~VAR_0;
   FUNC_5(VAR_14, VAR_11->ioc.ioc_regs.ll_halt);
  }

  if (VAR_17) {





   VAR_14 = FUNC_4(
     VAR_11->ioc.ioc_regs.pss_err_status_reg);
   FUNC_5(VAR_14,
    VAR_11->ioc.ioc_regs.pss_err_status_reg);
  }

  FUNC_5(VAR_13, VAR_11->iocfc.bfa_regs.intr_status);
  FUNC_2(&VAR_11->ioc);
 }
}
