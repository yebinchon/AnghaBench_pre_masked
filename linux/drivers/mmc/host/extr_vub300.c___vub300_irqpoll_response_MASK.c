
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int * reg; } ;
struct TYPE_8__ {int header_type; int header_size; } ;
struct TYPE_7__ {int error_code; } ;
struct TYPE_10__ {TYPE_4__ irq; TYPE_3__ common; int status; TYPE_2__ error; } ;
struct vub300_mmc_host {int irqs_queued; int irq_disabled; int irq_mutex; int mmc; int irq_enabled; TYPE_5__ resp; int card_present; int system_port_status; TYPE_1__* command_res_urb; } ;
struct TYPE_6__ {scalar_t__ actual_length; } ;


 int VAR_0 ;






 int VAR_1 ;
 int FUNC_0 (struct vub300_mmc_host*,int *) ;
 int FUNC_1 (struct vub300_mmc_host*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct vub300_mmc_host*) ;
 int FUNC_6 (struct vub300_mmc_host*,int) ;

__attribute__((used)) static void FUNC_7(struct vub300_mmc_host *VAR_2)
{

 if (VAR_2->command_res_urb->actual_length == 0)
  return;

 switch (VAR_2->resp.common.header_type) {
 case 132:
  FUNC_3(&VAR_2->irq_mutex);
  if (VAR_2->irq_enabled)
   FUNC_2(VAR_2->mmc);
  else
   VAR_2->irqs_queued += 1;
  VAR_2->irq_disabled = 1;
  FUNC_4(&VAR_2->irq_mutex);
  break;
 case 133:
  if (VAR_2->resp.error.error_code == VAR_1)
   FUNC_1(VAR_2);
  break;
 case 128:
  VAR_2->system_port_status = VAR_2->resp.status;
  FUNC_5(VAR_2);
  if (!VAR_2->card_present)
   FUNC_6(VAR_2, VAR_0 / 5);
  break;
 case 131:
 {
  int VAR_3 = VAR_2->resp.common.header_size - 3;
  int VAR_4 = VAR_3 >> 3;
  int VAR_5 = 0;
  while (VAR_4--) {
   FUNC_0(VAR_2, &VAR_2->resp.irq.reg[VAR_5]);
   VAR_5 += 1;
  }
  FUNC_3(&VAR_2->irq_mutex);
  if (VAR_2->irq_enabled)
   FUNC_2(VAR_2->mmc);
  else
   VAR_2->irqs_queued += 1;
  VAR_2->irq_disabled = 1;
  FUNC_4(&VAR_2->irq_mutex);
  break;
 }
 case 130:
 {
  int VAR_6 = VAR_2->resp.common.header_size - 3;
  int VAR_7 = VAR_6 >> 3;
  int VAR_8 = 0;
  while (VAR_7--) {
   FUNC_0(VAR_2, &VAR_2->resp.irq.reg[VAR_8]);
   VAR_8 += 1;
  }
  FUNC_3(&VAR_2->irq_mutex);
  if (VAR_2->irq_enabled)
   FUNC_2(VAR_2->mmc);
  else
   VAR_2->irqs_queued += 1;
  VAR_2->irq_disabled = 0;
  FUNC_4(&VAR_2->irq_mutex);
  break;
 }
 case 129:
  FUNC_6(VAR_2, 1);
  break;
 default:
  break;
 }
}
