
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mei_me_hw {scalar_t__ pg_state; } ;
struct mei_device {scalar_t__ pg_event; scalar_t__ hbm_state; int dev; int wait_pg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mei_device*) ;
 int FUNC_2 (struct mei_device*) ;
 struct mei_me_hw* FUNC_3 (struct mei_device*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct mei_device *VAR_7, u32 VAR_8)
{
 struct mei_me_hw *VAR_9 = FUNC_3(VAR_7);

 if (VAR_7->pg_event == VAR_4 &&
     (VAR_8 & VAR_0)) {
  VAR_7->pg_event = VAR_3;
  if (VAR_9->pg_state == VAR_6) {
   VAR_9->pg_state = VAR_5;
   if (VAR_7->hbm_state != VAR_2) {




    FUNC_0(VAR_7->dev, "d0i3 set host ready\n");
    FUNC_2(VAR_7);
   }
  } else {
   VAR_9->pg_state = VAR_6;
  }

  FUNC_4(&VAR_7->wait_pg);
 }

 if (VAR_9->pg_state == VAR_6 && (VAR_8 & VAR_1)) {





  FUNC_0(VAR_7->dev, "d0i3 want resume\n");
  FUNC_1(VAR_7);
 }
}
