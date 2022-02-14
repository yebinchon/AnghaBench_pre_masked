
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct happy_meal {int happy_flags; int irq; int happy_lock; int happy_timer; int gregs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct net_device*) ;
 int FUNC_2 (struct happy_meal*) ;
 int FUNC_3 (struct happy_meal*,int ) ;
 struct happy_meal* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_2)
{
 struct happy_meal *VAR_3 = FUNC_4(VAR_2);

 FUNC_5(&VAR_3->happy_lock);
 FUNC_3(VAR_3, VAR_3->gregs);
 FUNC_2(VAR_3);


 FUNC_0(&VAR_3->happy_timer);

 FUNC_6(&VAR_3->happy_lock);





 if ((VAR_3->happy_flags & (VAR_1|VAR_0)) != VAR_1)
  FUNC_1(VAR_3->irq, VAR_2);

 return 0;
}
