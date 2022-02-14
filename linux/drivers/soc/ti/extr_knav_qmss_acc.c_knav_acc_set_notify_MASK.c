
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {struct knav_pdsp_info* pdsp; } ;
struct knav_range_info {struct knav_device* kdev; TYPE_1__ acc_info; } ;
struct knav_queue_inst {int notify_needed; TYPE_2__* acc; int desc_count; } ;
struct knav_pdsp_info {scalar_t__ intd; } ;
struct knav_device {int dev; } ;
struct TYPE_4__ {int channel; int name; int retrigger_count; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct knav_range_info *VAR_0,
    struct knav_queue_inst *VAR_1,
    bool VAR_2)
{
 struct knav_pdsp_info *VAR_3 = VAR_0->acc_info.pdsp;
 struct knav_device *VAR_4 = VAR_0->kdev;
 u32 VAR_5, VAR_6;





 if (!VAR_2 || FUNC_3(&VAR_1->desc_count) <= 0)
  return 0;

 VAR_1->notify_needed = 1;
 FUNC_2(&VAR_1->acc->retrigger_count);
 VAR_5 = FUNC_1(VAR_1->acc->channel % 32);
 VAR_6 = FUNC_0(VAR_1->acc->channel);
 FUNC_4(VAR_4->dev, "setup-notify: re-triggering irq for %s\n",
  VAR_1->acc->name);
 FUNC_5(VAR_5, VAR_3->intd + VAR_6);
 return 0;
}
