
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct net_device {int dummy; } ;
struct korina_private {int media_check_timer; struct net_device* dev; } ;


 scalar_t__ VAR_0 ;
 struct korina_private* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct net_device*,int ) ;
 struct korina_private* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_4)
{
 struct korina_private *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_3);
 struct net_device *VAR_6 = VAR_5->dev;

 FUNC_1(VAR_6, 0);
 FUNC_2(&VAR_5->media_check_timer, VAR_1 + VAR_0);
}
