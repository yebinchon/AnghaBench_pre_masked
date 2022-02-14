
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_qh {int host_interval; struct dwc2_hs_transfer_time* hs_transfers; } ;
struct dwc2_hsotg {int hs_periodic_bitmap; } ;
struct dwc2_hs_transfer_time {int start_schedule_us; int duration_us; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct dwc2_hsotg *VAR_2, struct dwc2_qh *VAR_3,
     bool VAR_4, int VAR_5)
{
 struct dwc2_hs_transfer_time *VAR_6 = VAR_3->hs_transfers + VAR_5;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_2->hs_periodic_bitmap,
      VAR_0,
      VAR_1, VAR_6->duration_us,
      VAR_3->host_interval, VAR_6->start_schedule_us,
      VAR_4);

 if (VAR_7 < 0)
  return VAR_7;

 VAR_6->start_schedule_us = VAR_7;
 return 0;
}
