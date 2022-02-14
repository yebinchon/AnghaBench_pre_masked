
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct rtllib_network {int dummy; } ;
struct TYPE_5__ {scalar_t__ expires; } ;
struct TYPE_4__ {int tx_auth_rq; } ;
struct rtllib_device {TYPE_2__ associate_timer; int dev; int state; TYPE_1__ softmac_stats; struct rtllib_network current_network; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct rtllib_device*) ;
 struct sk_buff* FUNC_3 (struct rtllib_network*,struct rtllib_device*,int ,int *) ;
 int FUNC_4 (struct sk_buff*,struct rtllib_device*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(struct rtllib_device *VAR_3, u8 *VAR_4)
{
 struct rtllib_network *VAR_5 = &VAR_3->current_network;
 struct sk_buff *VAR_6;

 FUNC_1(VAR_3->dev, "Stopping scan\n");

 VAR_3->softmac_stats.tx_auth_rq++;

 VAR_6 = FUNC_3(VAR_5, VAR_3, 0, VAR_4);

 if (!VAR_6)
  FUNC_2(VAR_3);
 else {
  VAR_3->state = VAR_1;
  FUNC_1(VAR_3->dev, "Sending authentication request\n");
  FUNC_4(VAR_6, VAR_3);
  if (!FUNC_5(&VAR_3->associate_timer)) {
   VAR_3->associate_timer.expires = VAR_2 + (VAR_0 / 2);
   FUNC_0(&VAR_3->associate_timer);
  }
 }
}
