
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int q_low_mark; int q_high_mark; int tail_align; int head_align; int aggregation_timeout; int inactivity_timeout; } ;
struct cfhsi {TYPE_1__ cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct cfhsi* FUNC_0 (struct net_device const*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_7, const struct net_device *VAR_8)
{
 struct cfhsi *VAR_9 = FUNC_0(VAR_8);

 if (FUNC_1(VAR_7, VAR_3,
   VAR_9->cfg.inactivity_timeout) ||
     FUNC_1(VAR_7, VAR_1,
   VAR_9->cfg.aggregation_timeout) ||
     FUNC_1(VAR_7, VAR_2,
   VAR_9->cfg.head_align) ||
     FUNC_1(VAR_7, VAR_6,
   VAR_9->cfg.tail_align) ||
     FUNC_1(VAR_7, VAR_4,
   VAR_9->cfg.q_high_mark) ||
     FUNC_1(VAR_7, VAR_5,
   VAR_9->cfg.q_low_mark))
  return -VAR_0;

 return 0;
}
