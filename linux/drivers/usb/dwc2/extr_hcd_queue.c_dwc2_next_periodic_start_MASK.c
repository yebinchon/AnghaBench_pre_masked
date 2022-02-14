
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dwc2_qh {int host_interval; int start_active_frame; int next_active_frame; scalar_t__ dev_speed; scalar_t__ do_split; } ;
struct dwc2_hsotg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int,int) ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct dwc2_hsotg *VAR_3,
        struct dwc2_qh *VAR_4, u16 VAR_5)
{
 int VAR_6 = 0;
 u16 VAR_7 = VAR_4->host_interval;
 u16 VAR_8 = FUNC_0(VAR_5, 1);

 VAR_4->start_active_frame = FUNC_2(VAR_4->start_active_frame,
          VAR_7);
 if (VAR_7 >= 0x1000)
  goto exit;
 if (VAR_4->start_active_frame == VAR_4->next_active_frame ||
     FUNC_1(VAR_8, VAR_4->start_active_frame)) {
  u16 VAR_9 = VAR_4->start_active_frame;
  int VAR_10;





  if (VAR_4->do_split || VAR_4->dev_speed == VAR_2)
   VAR_10 = VAR_0;
  else
   VAR_10 = VAR_1;
  VAR_7 = FUNC_3(VAR_7, VAR_10);

  do {
   VAR_4->start_active_frame = FUNC_2(
    VAR_4->start_active_frame, VAR_7);
  } while (FUNC_1(VAR_8,
        VAR_4->start_active_frame));

  VAR_6 = FUNC_0(VAR_4->start_active_frame,
         VAR_9);
 }

exit:
 VAR_4->next_active_frame = VAR_4->start_active_frame;

 return VAR_6;
}
