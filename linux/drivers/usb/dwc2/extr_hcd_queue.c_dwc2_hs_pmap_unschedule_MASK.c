
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_qh {int host_interval; struct dwc2_hs_transfer_time* hs_transfers; } ;
struct dwc2_hsotg {int hs_periodic_bitmap; } ;
struct dwc2_hs_transfer_time {int start_schedule_us; int duration_us; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct dwc2_hsotg *VAR_2,
        struct dwc2_qh *VAR_3, int VAR_4)
{
 struct dwc2_hs_transfer_time *VAR_5 = VAR_3->hs_transfers + VAR_4;

 FUNC_0(VAR_2->hs_periodic_bitmap,
   VAR_0,
   VAR_1, VAR_5->duration_us,
   VAR_3->host_interval, VAR_5->start_schedule_us);
}
