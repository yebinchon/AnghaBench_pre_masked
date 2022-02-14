
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {int dev; int stats_lock; int stats_state; int period_task; int sp_task; int timer; int rx_mode; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bnx2x*,int ) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (struct bnx2x*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct bnx2x *VAR_5)
{
 VAR_5->state = VAR_1;

 VAR_5->rx_mode = VAR_0;

 if (FUNC_0(VAR_5))
  FUNC_1(VAR_5, VAR_2);


 FUNC_5(VAR_5);

 FUNC_2(VAR_5);
 if (FUNC_0(VAR_5))
  FUNC_3(VAR_5);
 FUNC_9(VAR_5->dev);

 FUNC_7(&VAR_5->timer);
 FUNC_6(&VAR_5->sp_task);
 FUNC_6(&VAR_5->period_task);

 if (!FUNC_8(&VAR_5->stats_lock, VAR_3 / 10)) {
  VAR_5->stats_state = VAR_4;
  FUNC_11(&VAR_5->stats_lock);
 }

 FUNC_4(VAR_5);

 FUNC_10(VAR_5->dev);

 return 0;
}
