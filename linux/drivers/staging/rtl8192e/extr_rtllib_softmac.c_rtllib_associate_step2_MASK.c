
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct rtllib_network {int dummy; } ;
struct TYPE_2__ {int tx_ass_rq; } ;
struct rtllib_device {int associate_timer; TYPE_1__ softmac_stats; int dev; struct rtllib_network current_network; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct rtllib_device*) ;
 struct sk_buff* FUNC_4 (struct rtllib_network*,struct rtllib_device*) ;
 int FUNC_5 (struct sk_buff*,struct rtllib_device*) ;

__attribute__((used)) static void FUNC_6(struct rtllib_device *VAR_2)
{
 struct sk_buff *VAR_3;
 struct rtllib_network *VAR_4 = &VAR_2->current_network;

 FUNC_0(&VAR_2->associate_timer);

 FUNC_2(VAR_2->dev, "Sending association request\n");

 VAR_2->softmac_stats.tx_ass_rq++;
 VAR_3 = FUNC_4(VAR_4, VAR_2);
 if (!VAR_3)
  FUNC_3(VAR_2);
 else {
  FUNC_5(VAR_3, VAR_2);
  FUNC_1(&VAR_2->associate_timer, VAR_1 + (VAR_0/2));
 }
}
