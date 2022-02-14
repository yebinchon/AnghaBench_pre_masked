
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ace_private {int version; scalar_t__ tasklet_pending; int jumbo_refill_busy; scalar_t__ jumbo; int cur_jumbo_bufs; int mini_refill_busy; int cur_mini_bufs; int std_refill_busy; int cur_rx_bufs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct net_device*,scalar_t__) ;
 int FUNC_1 (struct net_device*,scalar_t__) ;
 int FUNC_2 (struct net_device*,scalar_t__) ;
 int FUNC_3 (int *) ;
 struct ace_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_6)
{
 struct net_device *VAR_7 = (struct net_device *) VAR_6;
 struct ace_private *VAR_8 = FUNC_4(VAR_7);
 int VAR_9;

 VAR_9 = FUNC_3(&VAR_8->cur_rx_bufs);
 if ((VAR_9 < VAR_3) &&
     !FUNC_6(0, &VAR_8->std_refill_busy)) {



  FUNC_2(VAR_7, VAR_5 - VAR_9);
 }

 if (VAR_8->version >= 2) {
  VAR_9 = FUNC_3(&VAR_8->cur_mini_bufs);
  if ((VAR_9 < VAR_2) &&
      !FUNC_6(0, &VAR_8->mini_refill_busy)) {




   FUNC_1(VAR_7, VAR_4 - VAR_9);
  }
 }

 VAR_9 = FUNC_3(&VAR_8->cur_jumbo_bufs);
 if (VAR_8->jumbo && (VAR_9 < VAR_1) &&
     !FUNC_6(0, &VAR_8->jumbo_refill_busy)) {



  FUNC_0(VAR_7, VAR_0 - VAR_9);
 }
 VAR_8->tasklet_pending = 0;
}
