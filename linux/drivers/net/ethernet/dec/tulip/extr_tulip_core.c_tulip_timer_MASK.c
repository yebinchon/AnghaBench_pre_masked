
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tulip_private {int media_work; struct net_device* dev; } ;
struct timer_list {int dummy; } ;
struct net_device {int dummy; } ;


 struct tulip_private* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 struct tulip_private* VAR_1 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_2)
{
 struct tulip_private *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_0);
 struct net_device *VAR_4 = VAR_3->dev;

 if (FUNC_1(VAR_4))
  FUNC_2(&VAR_3->media_work);
}
