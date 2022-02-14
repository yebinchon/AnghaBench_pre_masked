
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct list_head {int dummy; } ;
struct ipvtap_dev {int tap; } ;


 int FUNC_0 (struct net_device*,struct list_head*) ;
 struct ipvtap_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0,
      struct list_head *VAR_1)
{
 struct ipvtap_dev *VAR_2 = FUNC_1(VAR_0);

 FUNC_2(VAR_0);
 FUNC_3(&VAR_2->tap);
 FUNC_0(VAR_0, VAR_1);
}
