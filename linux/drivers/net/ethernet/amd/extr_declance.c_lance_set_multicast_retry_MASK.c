
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct net_device {int dummy; } ;
struct lance_private {struct net_device* dev; } ;


 struct lance_private* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct net_device*) ;
 struct lance_private* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_2)
{
 struct lance_private *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1);
 struct net_device *VAR_4 = VAR_3->dev;

 FUNC_1(VAR_4);
}
