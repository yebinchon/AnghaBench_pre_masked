
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct timer_list {int dummy; } ;
struct pqi_ctrl_info {int previous_num_interrupts; scalar_t__ previous_heartbeat_count; int heartbeat_timer; TYPE_1__* pci_dev; int num_interrupts; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 struct pqi_ctrl_info* VAR_1 ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 struct pqi_ctrl_info* FUNC_2 (int ,struct timer_list*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (struct pqi_ctrl_info*) ;
 scalar_t__ FUNC_5 (struct pqi_ctrl_info*) ;
 scalar_t__ FUNC_6 (struct pqi_ctrl_info*) ;
 int FUNC_7 (struct pqi_ctrl_info*) ;

__attribute__((used)) static void FUNC_8(struct timer_list *VAR_4)
{
 int VAR_5;
 u32 VAR_6;
 struct pqi_ctrl_info *VAR_7 = FUNC_2(VAR_7, VAR_4,
           VAR_2);

 FUNC_4(VAR_7);
 if (FUNC_5(VAR_7))
  return;

 VAR_5 = FUNC_0(&VAR_7->num_interrupts);
 VAR_6 = FUNC_6(VAR_7);

 if (VAR_5 == VAR_7->previous_num_interrupts) {
  if (VAR_6 == VAR_7->previous_heartbeat_count) {
   FUNC_1(&VAR_7->pci_dev->dev,
    "no heartbeat detected - last heartbeat count: %u\n",
    VAR_6);
   FUNC_7(VAR_7);
   return;
  }
 } else {
  VAR_7->previous_num_interrupts = VAR_5;
 }

 VAR_7->previous_heartbeat_count = VAR_6;
 FUNC_3(&VAR_7->heartbeat_timer,
  VAR_3 + VAR_0);
}
