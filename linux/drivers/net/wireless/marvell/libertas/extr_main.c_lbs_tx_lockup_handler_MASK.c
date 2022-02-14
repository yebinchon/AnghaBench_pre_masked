
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct lbs_private {int driver_lock; int waitq; int dnld_sent; int (* reset_card ) (struct lbs_private*) ;int dev; } ;


 int VAR_0 ;
 struct lbs_private* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int ,char*) ;
 struct lbs_private* VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct lbs_private*) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_3)
{
 struct lbs_private *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_2);
 unsigned long VAR_5;

 FUNC_2(&VAR_4->driver_lock, VAR_5);

 FUNC_1(VAR_4->dev, "TX lockup detected\n");
 if (VAR_4->reset_card)
  VAR_4->reset_card(VAR_4);

 VAR_4->dnld_sent = VAR_0;
 FUNC_5(&VAR_4->waitq);

 FUNC_3(&VAR_4->driver_lock, VAR_5);
}
