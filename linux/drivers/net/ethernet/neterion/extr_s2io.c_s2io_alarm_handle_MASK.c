
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct s2io_nic {int alarm_timer; struct net_device* dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct s2io_nic* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct net_device*) ;
 struct s2io_nic* VAR_3 ;

__attribute__((used)) static void
FUNC_3(struct timer_list *VAR_4)
{
 struct s2io_nic *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_1);
 struct net_device *VAR_6 = VAR_5->dev;

 FUNC_2(VAR_6);
 FUNC_1(&VAR_5->alarm_timer, VAR_2 + VAR_0 / 2);
}
