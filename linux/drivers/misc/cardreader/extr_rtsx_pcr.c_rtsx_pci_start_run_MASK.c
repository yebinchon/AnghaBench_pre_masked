
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtsx_pcr {scalar_t__ state; int idle_work; TYPE_1__* ops; scalar_t__ remove_pci; } ;
struct TYPE_2__ {int (* enable_auto_blink ) (struct rtsx_pcr*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rtsx_pcr*) ;
 int FUNC_3 (struct rtsx_pcr*) ;
 int VAR_1 ;

void FUNC_4(struct rtsx_pcr *VAR_2)
{

 if (VAR_2->remove_pci)
  return;

 if (VAR_2->state != VAR_0) {
  VAR_2->state = VAR_0;
  if (VAR_2->ops->enable_auto_blink)
   VAR_2->ops->enable_auto_blink(VAR_2);
  FUNC_2(VAR_2);
 }

 FUNC_0(VAR_1, &VAR_2->idle_work, FUNC_1(200));
}
