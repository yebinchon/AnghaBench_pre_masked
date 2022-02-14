
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int num_tc; } ;
struct qede_dev {TYPE_1__ dev_info; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct qede_dev*) ;
 int FUNC_1 (struct net_device*,struct sk_buff*,int *) ;
 struct qede_dev* FUNC_2 (struct net_device*) ;

u16 FUNC_3(struct net_device *VAR_0, struct sk_buff *VAR_1,
        struct net_device *VAR_2)
{
 struct qede_dev *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3) * VAR_3->dev_info.num_tc;

 return FUNC_0(VAR_3) ?
  FUNC_1(VAR_0, VAR_1, ((void*)0)) % VAR_4 : 0;
}
