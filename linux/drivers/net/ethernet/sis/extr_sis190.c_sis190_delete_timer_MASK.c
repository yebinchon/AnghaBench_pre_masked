
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sis190_private {int timer; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct sis190_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static inline void FUNC_2(struct net_device *VAR_0)
{
 struct sis190_private *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->timer);
}
