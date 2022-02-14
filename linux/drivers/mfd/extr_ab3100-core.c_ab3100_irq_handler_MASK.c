
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ab3100 {int startup_events_read; int* startup_events; int dev; int event_subscribers; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ab3100*,int ,int*,int) ;
 int FUNC_1 (int *,int,int *) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct ab3100 *VAR_4 = VAR_3;
 u8 VAR_5[3];
 u32 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_4, VAR_0,
           VAR_5, 3);
 if (VAR_7)
  goto err_event;

 VAR_6 = (VAR_5[0] << 16) |
  (VAR_5[1] << 8) |
  VAR_5[2];

 if (!VAR_4->startup_events_read) {
  VAR_4->startup_events[0] = VAR_5[0];
  VAR_4->startup_events[1] = VAR_5[1];
  VAR_4->startup_events[2] = VAR_5[2];
  VAR_4->startup_events_read = 1;
 }






 FUNC_1(&VAR_4->event_subscribers,
         VAR_6, ((void*)0));

 FUNC_2(VAR_4->dev,
  "IRQ Event: 0x%08x\n", VAR_6);

 return VAR_1;

 err_event:
 FUNC_2(VAR_4->dev,
  "error reading event status\n");
 return VAR_1;
}
