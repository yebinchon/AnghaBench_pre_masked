
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phylink {scalar_t__ link_an_mode; void (* get_fixed_state ) (struct net_device*,struct phylink_link_state*) ;int state_mutex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct phylink *VAR_2,
      void (*VAR_3)(struct net_device *VAR_4,
          struct phylink_link_state *VAR_5))
{



 if (VAR_2->link_an_mode != VAR_1)
  return -VAR_0;

 FUNC_0(&VAR_2->state_mutex);
 VAR_2->get_fixed_state = VAR_3;
 FUNC_1(&VAR_2->state_mutex);

 return 0;
}
