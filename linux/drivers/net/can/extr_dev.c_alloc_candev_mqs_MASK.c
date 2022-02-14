
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {void* ml_priv; } ;
struct can_priv {unsigned int echo_skb_max; int restart_work; int state; void* echo_skb; struct net_device* dev; } ;
struct can_ml_priv {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct net_device* FUNC_2 (int,char*,int ,int ,unsigned int,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 struct can_priv* FUNC_3 (struct net_device*) ;

struct net_device *FUNC_4(int VAR_5, unsigned int VAR_6,
        unsigned int VAR_7, unsigned int VAR_8)
{
 struct net_device *VAR_9;
 struct can_priv *VAR_10;
 int VAR_11;
 VAR_11 = FUNC_0(VAR_5, VAR_1) + sizeof(struct can_ml_priv);

 if (VAR_6)
  VAR_11 = FUNC_0(VAR_11, sizeof(struct sk_buff *)) +
   VAR_6 * sizeof(struct sk_buff *);

 VAR_9 = FUNC_2(VAR_11, "can%d", VAR_2, VAR_4,
          VAR_7, VAR_8);
 if (!VAR_9)
  return ((void*)0);

 VAR_10 = FUNC_3(VAR_9);
 VAR_10->dev = VAR_9;

 VAR_9->ml_priv = (void *)VAR_10 + FUNC_0(VAR_5, VAR_1);

 if (VAR_6) {
  VAR_10->echo_skb_max = VAR_6;
  VAR_10->echo_skb = (void *)VAR_10 +
   (VAR_11 - VAR_6 * sizeof(struct sk_buff *));
 }

 VAR_10->state = VAR_0;

 FUNC_1(&VAR_10->restart_work, VAR_3);

 return VAR_9;
}
