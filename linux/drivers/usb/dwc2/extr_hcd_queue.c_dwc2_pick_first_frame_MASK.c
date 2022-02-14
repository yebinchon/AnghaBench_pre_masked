
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct dwc2_qh {scalar_t__ dev_speed; int num_hs_transfers; int ls_start_schedule_slice; int next_active_frame; int start_active_frame; int host_interval; TYPE_2__* hs_transfers; scalar_t__ do_split; } ;
struct TYPE_3__ {int uframe_sched; } ;
struct dwc2_hsotg {TYPE_1__ params; } ;
struct TYPE_4__ {int start_schedule_us; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct dwc2_hsotg*) ;
 int FUNC_5 (struct dwc2_hsotg*,char*,struct dwc2_qh*,int,int) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct dwc2_hsotg *VAR_5, struct dwc2_qh *VAR_6)
{
 u16 VAR_7;
 u16 VAR_8;
 u16 VAR_9;
 u16 VAR_10;
 u16 VAR_11;





 VAR_7 = FUNC_4(VAR_5);
 VAR_8 = FUNC_3(VAR_7, 1);
 VAR_9 = VAR_8;


 if (!VAR_5->params.uframe_sched) {
  if (VAR_6->do_split)

   VAR_9 |= 0x7;
  goto exit;
 }

 if (VAR_6->dev_speed == VAR_4 || VAR_6->do_split) {






  FUNC_0(VAR_6->num_hs_transfers < 1);

  VAR_10 = VAR_6->hs_transfers[0].start_schedule_us /
     VAR_0;


  VAR_11 = FUNC_6(VAR_6->host_interval, VAR_1);

 } else {







  VAR_10 = VAR_6->ls_start_schedule_slice /
     VAR_2;
  VAR_11 = FUNC_6(VAR_6->host_interval, VAR_3);
 }


 FUNC_0(VAR_10 >= VAR_11);
 VAR_9 = (VAR_9 / VAR_11) * VAR_11;





 VAR_9 = FUNC_3(VAR_9,
            VAR_10);






 VAR_9 = FUNC_1(VAR_9, 1);





 while (FUNC_2(VAR_8, VAR_9))
  VAR_9 = FUNC_3(VAR_9,
             VAR_11);

exit:
 VAR_6->next_active_frame = VAR_9;
 VAR_6->start_active_frame = VAR_9;

 FUNC_5(VAR_5, "QH=%p First fn=%04x nxt=%04x\n",
        VAR_6, VAR_7, VAR_6->next_active_frame);
}
