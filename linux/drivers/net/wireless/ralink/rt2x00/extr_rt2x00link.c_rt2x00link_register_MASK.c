
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link {scalar_t__ watchdog_interval; int watchdog_work; int work; } ;
struct rt2x00_dev {struct link link; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_1(struct rt2x00_dev *VAR_3)
{
 struct link *VAR_4 = &VAR_3->link;

 FUNC_0(&VAR_4->work, VAR_1);
 FUNC_0(&VAR_4->watchdog_work, VAR_2);

 if (VAR_4->watchdog_interval == 0)
  VAR_4->watchdog_interval = VAR_0;
}
