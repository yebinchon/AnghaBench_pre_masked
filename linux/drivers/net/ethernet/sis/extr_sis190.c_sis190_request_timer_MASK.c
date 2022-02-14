
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {scalar_t__ expires; } ;
struct sis190_private {struct timer_list timer; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct timer_list*) ;
 scalar_t__ VAR_1 ;
 struct sis190_private* FUNC_1 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_2 (struct timer_list*,int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct net_device *VAR_3)
{
 struct sis190_private *VAR_4 = FUNC_1(VAR_3);
 struct timer_list *VAR_5 = &VAR_4->timer;

 FUNC_2(VAR_5, VAR_2, 0);
 VAR_5->expires = VAR_1 + VAR_0;
 FUNC_0(VAR_5);
}
