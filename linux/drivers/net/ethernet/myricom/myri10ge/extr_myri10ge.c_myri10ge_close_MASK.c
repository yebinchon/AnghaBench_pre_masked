
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct myri10ge_priv {scalar_t__ running; int num_slices; scalar_t__ rebooted; int down_cnt; TYPE_2__* ss; int down_wq; int watchdog_timer; } ;
struct myri10ge_cmd {int dummy; } ;
struct TYPE_3__ {int * req_bytes; } ;
struct TYPE_4__ {int napi; TYPE_1__ tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct myri10ge_priv*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct myri10ge_priv*,int ,struct myri10ge_cmd*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct net_device*,char*) ;
 struct myri10ge_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (int ,int,int ) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_5)
{
 struct myri10ge_priv *VAR_6 = FUNC_7(VAR_5);
 struct myri10ge_cmd VAR_7;
 int VAR_8, VAR_9;
 int VAR_10;

 if (VAR_6->running != VAR_2)
  return 0;

 if (VAR_6->ss[0].tx.req_bytes == ((void*)0))
  return 0;

 FUNC_0(&VAR_6->watchdog_timer);
 VAR_6->running = VAR_4;
 for (VAR_10 = 0; VAR_10 < VAR_6->num_slices; VAR_10++)
  FUNC_5(&VAR_6->ss[VAR_10].napi);

 FUNC_8(VAR_5);

 FUNC_10(VAR_5);
 if (VAR_6->rebooted == 0) {
  VAR_9 = VAR_6->down_cnt;
  FUNC_1();
  VAR_8 =
      FUNC_4(VAR_6, VAR_1, &VAR_7, 0);
  if (VAR_8)
   FUNC_6(VAR_5, "Couldn't bring down link\n");

  FUNC_11(VAR_6->down_wq, VAR_9 != VAR_6->down_cnt,
       VAR_0);
  if (VAR_9 == VAR_6->down_cnt)
   FUNC_6(VAR_5, "never got down irq\n");
 }
 FUNC_9(VAR_5);
 FUNC_2(VAR_6);
 for (VAR_10 = 0; VAR_10 < VAR_6->num_slices; VAR_10++)
  FUNC_3(&VAR_6->ss[VAR_10]);

 VAR_6->running = VAR_3;
 return 0;
}
