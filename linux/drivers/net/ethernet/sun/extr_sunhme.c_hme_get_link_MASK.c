
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct happy_meal {int sw_bmsr; int happy_lock; int tcvregs; int sw_bmcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct happy_meal*,int ,int ) ;
 struct happy_meal* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static u32 FUNC_4(struct net_device *VAR_2)
{
 struct happy_meal *VAR_3 = FUNC_1(VAR_2);

 FUNC_2(&VAR_3->happy_lock);
 VAR_3->sw_bmcr = FUNC_0(VAR_3, VAR_3->tcvregs, VAR_1);
 FUNC_3(&VAR_3->happy_lock);

 return VAR_3->sw_bmsr & VAR_0;
}
