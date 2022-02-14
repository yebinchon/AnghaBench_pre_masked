
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dwc2_qh {scalar_t__ host_us; scalar_t__ device_us; scalar_t__ host_interval; scalar_t__ device_interval; int num_hs_transfers; TYPE_1__* hs_transfers; } ;
struct dwc2_hsotg {int dummy; } ;
struct TYPE_2__ {scalar_t__ duration_us; scalar_t__ start_schedule_us; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dwc2_hsotg*,struct dwc2_qh*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct dwc2_hsotg *VAR_0, struct dwc2_qh *VAR_1)
{

 FUNC_0(VAR_1->host_us != VAR_1->device_us);
 FUNC_0(VAR_1->host_interval != VAR_1->device_interval);
 FUNC_0(VAR_1->num_hs_transfers != 1);


 VAR_1->hs_transfers[0].start_schedule_us = 0;
 VAR_1->hs_transfers[0].duration_us = VAR_1->host_us;

 return FUNC_1(VAR_0, VAR_1, 0, 0);
}
