
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ expires; } ;
struct TYPE_3__ {int timeout; int interval; } ;
struct cisco_state {TYPE_2__ timer; TYPE_1__ settings; int lock; int rxseq; int txseq; scalar_t__ up; scalar_t__ last_poll; struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct net_device*,int ,int ,int ) ;
 struct cisco_state* FUNC_2 (int ,struct timer_list*,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct net_device*,char*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct cisco_state* VAR_3 ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_9(struct timer_list *VAR_5)
{
 struct cisco_state *VAR_6 = FUNC_2(VAR_6, VAR_5, VAR_4);
 struct net_device *VAR_7 = VAR_6->dev;

 FUNC_6(&VAR_6->lock);
 if (VAR_6->up &&
     FUNC_8(VAR_2, VAR_6->last_poll + VAR_6->settings.timeout * VAR_1)) {
  VAR_6->up = 0;
  FUNC_4(VAR_7, "Link down\n");
  FUNC_5(VAR_7);
 }

 FUNC_1(VAR_7, VAR_0, FUNC_3(++VAR_6->txseq),
        FUNC_3(VAR_6->rxseq));
 FUNC_7(&VAR_6->lock);

 VAR_6->timer.expires = VAR_2 + VAR_6->settings.interval * VAR_1;
 FUNC_0(&VAR_6->timer);
}
