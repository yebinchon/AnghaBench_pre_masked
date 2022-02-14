
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fc_port {scalar_t__ chip_reset; int fw_login_state; scalar_t__ logo_ack_needed; scalar_t__ logout_on_delete; TYPE_3__* vha; } ;
struct TYPE_6__ {TYPE_2__* hw; } ;
struct TYPE_5__ {TYPE_1__* base_qpair; } ;
struct TYPE_4__ {scalar_t__ chip_reset; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct fc_port *VAR_1)
{
 if (VAR_1->chip_reset != VAR_1->vha->hw->base_qpair->chip_reset) {
  VAR_1->logout_on_delete = 0;
  VAR_1->logo_ack_needed = 0;
  VAR_1->fw_login_state = VAR_0;
 }
}
