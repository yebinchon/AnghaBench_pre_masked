
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct list_head {int dummy; } ;
struct geneve_dev {int next; } ;


 int FUNC_0 (int *) ;
 struct geneve_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct list_head*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0, struct list_head *VAR_1)
{
 struct geneve_dev *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(&VAR_2->next);
 FUNC_2(VAR_0, VAR_1);
}
